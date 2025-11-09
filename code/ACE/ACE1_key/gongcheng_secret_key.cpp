#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); //解决中文乱码


    char key[101], key_num[1001];    // key: 密钥，key_num: 密文
    int keynum[100] = { 0 };         // keynum: 存储密钥对应的数字形式 (A->0, B->1, ...)

    // 读取密钥和密文
    gets_s(key);       // 安全版本读取密钥
    gets_s(key_num);   // 安全版本读取密文

    int len = strlen(key);       // 密钥长度
    int len_num = strlen(key_num); // 密文长度

    // 将密钥全部转换为大写，保证一致性
    _strupr_s(key);

    // 将密钥字母转换为数字 (A->0, B->1, ..., Z->25)
    for (int i = 0; i < len; i++)
    {
        keynum[i] = key[i] - 'A';
    }

    char result[100] = { '\0' }; // 存储解密后的明文

    // 遍历密文每个字符进行解密
    for (int i = 0; i < len_num; i++)
    {
        static int Offset = 0;       // 用于记录非字母字符的偏移量
        int j = i % len - Offset;    // 计算当前密钥索引
        if (j < 0) j += len;         // 保证索引非负

        // 如果当前字符不是字母，则直接保留
        if (!((key_num[i] >= 'A' && key_num[i] <= 'Z') || (key_num[i] >= 'a' && key_num[i] <= 'z')))
        {
            Offset++;                 // 非字母字符影响密钥索引，偏移量加1
            result[i] = key_num[i];   // 保留原字符
            continue;                 // 跳过后续解密操作
        }

        // 对大写字母进行解密
        if (key_num[i] <= 'Z')
        {
            result[i] = (key_num[i] - keynum[j]); // 密文减去密钥对应数字
            if (result[i] < 'A')                 // 如果小于 'A'，回绕到字母范围
                result[i] += 26;
        }
        // 对小写字母进行解密
        else if (key_num[i] >= 'a')
        {
            result[i] = (key_num[i] - keynum[j]); // 密文减去密钥对应数字
            if (result[i] < 'a')                 // 如果小于 'a'，回绕到字母范围
                result[i] += 26;
        }
    }

    printf("%s", result); // 输出解密后的明文
    return 0;
}
