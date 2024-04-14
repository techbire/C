//------------------------------------------------------
//bubble sorting:
// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     // Input array elements
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Bubble sort
//     for(int i = 0; i < n - 1; i++) {
//         for(int j = 0; j < n - 1 - i; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 // Swap
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // Output sorted array
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


//------------------------------------------------------
//selection sorting:
// #include<stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     // Input array elements
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Selection sort
//     for(int i = 0; i < n - 1; i++) {
//         int smallest = i;
//         for(int j = i + 1; j < n; j++) {
//             if(arr[j] < arr[smallest]) {
//                 smallest = j;
//             }
//         }
//         // Swap arr[smallest] and arr[i]
//         int temp = arr[smallest];
//         arr[smallest] = arr[i];
//         arr[i] = temp;
//     }

//     // Output sorted array
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
