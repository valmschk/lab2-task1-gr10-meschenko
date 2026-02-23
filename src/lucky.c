#include "lucky.h"
int is_lucky(int number) {
    int s1 = 0, s2 = 0;
    int temp = number;
    for (int i = 0; i < 3; i++) { s2 += temp % 10; temp /= 10; }
    for (int i = 0; i < 3; i++) { s1 += temp % 10; temp /= 10; }
    return (s1 == s2);
}
int count_lucky_numbers(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++) { if (is_lucky(i)) count++; }
    return count;
}