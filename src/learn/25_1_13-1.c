//
// Created by xuxiao on 25-1-13.
//

#include <stdio.h>
//1
// int main() {
//     int arr[] = {1, 9, 2, 0, 3, 4, 6, 5, 10};
//     int temp;
//     for (int i = 0; i < 9; i++) {
//         for (int j = 0; j < 9 - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 10; ++i) {
//         if (arr[i] != i) {
//             printf("%d", i);
//             break;
//         }
//     }
// }

//2
#include <stdio.h>

// int main() {
//     int arr[] = {1, 9, 2, 0, 3, 4, 6, 5, 10};
//     int n = sizeof(arr) / sizeof(arr[0]); // 计算数组长度
//     int total = 55; // 0到10的总和
//     for (int i = 0; i < n; i++) {
//         total -= arr[i];
//     }
//     printf("Missing number is: %d\n", total);
//     return 0;
// }

//3
#include <stdio.h>

// int main() {
//     int arr[] = {1, 9, 2, 0, 3, 4, 6, 5, 10};
//     int x = 0;
//     for (int i = 0; i < 9; ++i) {
//         x ^= i;
//     }
//     for (int i = 0; i < 9; ++i) {
//         x ^= arr[i];
//     }
//     printf("%d", x);
// }
