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

// #include <iostream>

// int main() {
//     int arr[] = {5, 4, 3, 4, 9};
//     int max_position = 0;
//     int max_value = arr[0];
//     for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
//         if (arr[i] > max_value) {
//             max_value = arr[i]; 
//             max_position = i; 
//         }
//     }

//     std::cout << "Позиция максимального элемента: " << max_position << std::endl;

//     return 0;
// }

// // 7 задание

// #include <iostream>
// #include <cstring>
 
// int main()
// {
    
//     int size = 5;
//     int *a = new int[size];
    
//     for(int i = 0; i < size; ++i)
//     {
//         std::cin >> a[i];
    
//     }
//     for(int i = 0, end = size/2; i < end; ++i)
//     {
//     int temp = a[i];
//     a[i] = a[size-1-i];
//     a[size-1-i] = temp;
//     }
    
//     for(int i = 0; i < size; ++i)
//     {
//         std::cout << a[i];
//     }
//     return 0;
// }

// // 8 задание

// #include <iostream>

// int main() {
//     char stroka[] = "AaBbCcDdEeFfGgggggg";
//     int count = 0;  

//     for (int i = 0; i < sizeof(stroka); i++) {
//         if (isupper(stroka[i])) {
//             count++; 
//         }
//     }

//     std::cout << "Количество заглавных букв: " << count << std::endl;

//     return 0;
// }

// // 9 задание

// #include <iostream>

// int main() {
//     char stroka[] = "Aaa1323#Aa";
//     char target = 'A';  // целевая буква для поиска
//     int count = 0;  // переменная для хранения количества вхождений

//     for (int i = 0; i < sizeof(stroka); i++) {
//         if (stroka[i] == target) {
//             count++;  // увеличиваем счетчик, если символ соответствует целевой букве
//         }
//     }

//     std::cout << "Количество вхождений буквы A: " << count << std::endl;

//     return 0;
// }

// // 10 задание

// #include <iostream>
// #include <cctype>

// int main() {
//     char stroka[] = "aaaabbbbccccdddd";
//     int length = sizeof(stroka) - 1; 

//     for (int i = 0; i < length; i++) {
//         stroka[i] = std::toupper(stroka[i]);
//     }

//     std::cout << stroka << std::endl; 

//     return 0;
// }


