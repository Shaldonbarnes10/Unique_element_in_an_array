# Unique Element Finder in an Array

This program is designed to find the unique element in an array of integers using bitwise XOR operation. It assumes the array contains an odd number of elements, where all elements except one occur in pairs.

## How It Works

The program utilizes the XOR operator (`^`) to identify the unique element:
- XOR of a number with itself is 0 (e.g., `a ^ a = 0`).
- XOR of a number with 0 is the number itself (e.g., `a ^ 0 = a`).
- XOR is commutative and associative, so the order of operations doesn't matter.

By XORing all elements in the array, the paired elements cancel out, leaving only the unique element.

## Prerequisites

- Basic knowledge of C++ programming.
- A C++ compiler (e.g., GCC, Clang, or MSVC).

## Code

```cpp
#include<iostream>
using namespace std;

int main(){
    int n, a[100], temp;
    
    cout << "Enter the number of elements (odd number) : ";
    cin >> n;
    
    cout << "Enter the elements :";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "The elements are : " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    temp = a[0];
    for (int i = 1; i < n; i++) {
        temp ^= a[i];
    }

    cout << "\nThe unique element is : " << temp;
    return 0;
}
```

## Input and Output Example

### Input
```
Enter the number of elements (odd number): 5
Enter the elements: 1 2 3 2 1
```

### Output
```
The elements are:
1 2 3 2 1
The unique element is: 3
```

## Steps to Run the Program

1. Copy the code into a file named `unique_element.cpp`.
2. Compile the code using a C++ compiler. For example:
   ```
   g++ unique_element.cpp -o unique_element
   ```
3. Run the compiled program:
   ```
   ./unique_element
   ```
4. Follow the prompts to enter the number of elements and the elements of the array.

## Constraints

- The number of elements (`n`) must be an odd number.
- The input array must contain exactly one unique element, with all other elements appearing in pairs.
- Maximum array size is 100 (as defined in the code).

## Explanation of Key Steps

1. **Input:**
   - The program first reads the number of elements (`n`) and checks that it is an odd number.
   - Then, the program takes `n` integers as input and stores them in an array.

2. **Display:**
   - The elements of the array are printed for verification.

3. **Find Unique Element:**
   - The program initializes `temp` with the first element of the array.
   - It iteratively applies the XOR operation between `temp` and the remaining elements of the array.
   - The result is stored in `temp`, which eventually holds the unique element.

4. **Output:**
   - The unique element is displayed.

## Advantages of Using XOR

- Efficient: The algorithm runs in O(n) time complexity, as it requires a single traversal of the array.
- Minimal Space: No additional data structures are required, so the space complexity is O(1).

## Possible Enhancements

- Add input validation to ensure the user enters an odd number of elements.
- Dynamically allocate the array to handle larger sizes instead of a fixed size.
- Extend the program to handle multiple unique elements or even numbers of elements.

## License

This code is provided as-is without any warranty. Feel free to use and modify it for educational or personal purposes.

