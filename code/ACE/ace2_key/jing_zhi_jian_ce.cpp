
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_LEN 100
#define MAX_BASE 37

int char_to_digit(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 10;
    } else if (c >= 'a' && c <= 'z') {
        return c - 'a' + 10;
    }
    return -1;
}

long long to_decimal(const char *num_str, int base) {
    long long result = 0;
    for (int i = 0; num_str[i]; i++) {
        int digit = char_to_digit(num_str[i]);
        if (digit < 0 || digit >= base) return -1;
        result = result * base + digit;
    }
    return result;
}

int get_min_base(const char *num_str) {
    int max_digit = 0;
    for (int i = 0; num_str[i]; i++) {
        int digit = char_to_digit(num_str[i]);
        if (digit < 0) return -1;
        if (digit > max_digit) max_digit = digit;
    }
    return max_digit + 1;
}

int find_base_for_value(const char *num_str, long long target, int min_base) {
    int left = min_base, right = 36;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        long long value = to_decimal(num_str, mid);
        
        if (value == target) {
            return mid;  // 找到匹配的进制
        } else if (value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;  // 未找到
}

void find_all_bases(const char *num_str, long long target, int min_base, 
                    int *bases, int *count) {
    *count = 0;
    
    for (int base = min_base; base <= 36; base++) {
        long long value = to_decimal(num_str, base);
        if (value == target) {
            bases[(*count)++] = base;
        } else if (value > target) {
            break;
        }
    }
}

int max(int a, int b) { return a > b ? a : b; }
int max3(int a, int b, int c) { return max(max(a, b), c); }

void solve() {
    char line[MAX_LEN * 3];
    char num1_str[MAX_LEN], num2_str[MAX_LEN], result_str[MAX_LEN];
    
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("Man, what can I say\n");
        return;
    }
    
    if (sscanf(line, "%s %s %s", num1_str, num2_str, result_str) != 3) {
        printf("Man, what can I say\n");
        return;
    }
    
    int min_base1 = get_min_base(num1_str);
    int min_base2 = get_min_base(num2_str);
    int min_base_result = get_min_base(result_str);
    
    if (min_base1 < 0 || min_base2 < 0 || min_base_result < 0) {
        printf("Man, what can I say\n");
        return;
    }
    
    int min_base_input = max3(min_base1, min_base2, 2);
    min_base_result = max(min_base_result, 2);
    
    int all_valid_bases[MAX_BASE];
    int valid_count = 0;
    
    // 枚举前两个数的进制
    for (int base1 = min_base_input; base1 <= 36; base1++) {
        long long num1 = to_decimal(num1_str, base1);
        long long num2 = to_decimal(num2_str, base1);
        
        if (num1 < 0 || num2 < 0) continue;
        
        long long product = num1 * num2;

        int temp_bases[MAX_BASE];
        int temp_count;
        find_all_bases(result_str, product, min_base_result, temp_bases, &temp_count);
        

        for (int i = 0; i < temp_count; i++) {
            int found = 0;
            for (int j = 0; j < valid_count; j++) {
                if (all_valid_bases[j] == temp_bases[i]) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                all_valid_bases[valid_count++] = temp_bases[i];
            }
        }
    }
    
    // 排序
    for (int i = 0; i < valid_count - 1; i++) {
        for (int j = i + 1; j < valid_count; j++) {
            if (all_valid_bases[i] > all_valid_bases[j]) {
                int temp = all_valid_bases[i];
                all_valid_bases[i] = all_valid_bases[j];
                all_valid_bases[j] = temp;
            }
        }
    }
    
    if (valid_count == 0) {
        printf("Man, what can I say\n");
    } else {
        for (int i = 0; i < valid_count; i++) {
            printf("%d", all_valid_bases[i]);
            if (i < valid_count - 1) printf(" ");
        }
        printf("\n");
    }
}

int main() {
    solve();
    return 0;
}