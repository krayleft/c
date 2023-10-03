// // 1 задание

// #include <iostream>

// int main() {
//     int array[7] = {2, 3, 4, 5, 2, 8, 10};
    
//     for (int i = 0; i < 7; i++) {
//         std::cout << array[i] << " ";
//     }
    
//     return 0;
// }


// // 2.1 задание

// #include <iostream>

// int main() {
//     int arr[] = {500, 4, 24, 15, 100, 105};
//     int sum = 0;

//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//         sum += arr[i];
//     }

//     std::cout << "Сумма элементов массива: " << sum << std::endl;

//     return 0;
// }


// // 2.2 задание

// #include <iostream>

// int main() {
//     int arr[] = {500, 4, 24, 15, 100, 105};
//     int sum = 0;
//     int i = 0;

//     while (i < sizeof(arr) / sizeof(arr[0])) {
//         sum += arr[i];
//         i++;
//     }

//     std::cout << "Сумма элементов массива: " << sum << std::endl;

//     return 0;
// }

// // 3 задание

// #include <iostream>

// int main() {
//     const int SIZE = 6;
//     int arr[SIZE] = {500, 4, 24, 15, 100, 105};
//     int number;
//     int count = 0;

//     std::cout << "Введите число: ";
//     std::cin >> number;

//     for (int i = 0; i < SIZE; i++) {
//         if (arr[i] % number == 0) {
//             count++;
//         }
//     }

//     std::cout << "Количество элементов, кратных " << number << ": " << count << std::endl;

//     return 0;
// }


// // 4 задание 

// #include <iostream>

// int main() {
//     int arr[] = {5, 4, 3, 4, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int min = arr[0];

//     for (int i = 1; i < size; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     std::cout << "Минимальный элемент массива: " << min << std::endl;

//     return 0;
// }

// // 5 задание 

// #include <iostream>

// int main() {
//     int arr[] = {5, 4, 3, 4, 9};
//     int arrLength = sizeof(arr) / sizeof(arr[0]); 

//     int maxValue = arr[0]; 
//     int minValue = arr[0]; 

//     for (int i = 1; i < arrLength; i++) {
//         if (arr[i] > maxValue) {
//             maxValue = arr[i]; 
//         }
//         if (arr[i] < minValue) {
//             minValue = arr[i]; 
//         }
//     }

//     int difference = maxValue - minValue;

//     std::cout << "Разница между самым большим и самым маленьким элементом: " << difference << std::endl;

//     return 0;
// }

// // 6 задание 

