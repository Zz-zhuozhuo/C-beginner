#include <stdio.h>
#include <stdint.h>
#include <string.h>

// 类型定义
typedef unsigned char uint8_t;
typedef signed short  int16_t;
typedef float         fp32;

// 将两个 uint8_t 高低字节组合成 int16_t
int16_t pack_int16(uint8_t high, uint8_t low) {
    return (int16_t)((((uint16_t)high) << 8) | (uint16_t)low);
}

// 简单处理函数：把整数转换成浮点数
fp32 process_data(int16_t value) {
    return (fp32)value; // 直接转换为浮点
}

// 打包 float 为 4 字节（小端序）
void pack_fp32_le(fp32 value, uint8_t out[4]) {
    uint32_t u;
    memcpy(&u, &value, 4);
    out[0] = (uint8_t)(u & 0xFF);
    out[1] = (uint8_t)((u >> 8) & 0xFF);
    out[2] = (uint8_t)((u >> 16) & 0xFF);
    out[3] = (uint8_t)((u >> 24) & 0xFF);
}

// 解包 4 字节为 float（小端序）
fp32 unpack_fp32_le(const uint8_t in[4]) {
    uint32_t u =  ((uint32_t)in[0])
                | ((uint32_t)in[1] << 8)
                | ((uint32_t)in[2] << 16)
                | ((uint32_t)in[3] << 24);
    fp32 f;
    memcpy(&f, &u, 4);
    return f;
}

int main() {
    // 模拟接收到的两个字节
    uint8_t DATA[2] = {0x07, 0xD0}; // 0x07D0 = 2000

    // 1) 高低字节组合
    int16_t value = pack_int16(DATA[0], DATA[1]);
    printf("步骤1：组合后的 int16 值 = %d\n", value);

    // 2) 转换为浮点数
    fp32 fvalue = process_data(value);
    printf("步骤2：转换后的浮点数 = %f\n", fvalue);

    // 3) 打包为 4 个字节发送
    uint8_t tx_bytes[4];
    pack_fp32_le(fvalue, tx_bytes);
    printf("步骤3：打包后的字节 = [%02X %02X %02X %02X]\n",
           tx_bytes[0], tx_bytes[1], tx_bytes[2], tx_bytes[3]);

    // 4) 接收端解包还原
    fp32 restored = unpack_fp32_le(tx_bytes);
    printf("步骤4：恢复后的浮点数 = %f\n", restored);

    return 0;
}