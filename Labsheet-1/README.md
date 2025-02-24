# Sorting Algorithms Implementation

This repository contains implementations of various sorting algorithms in C++. The sorting algorithms included are:

1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**

Each algorithm includes:
- Sorting a given array in ascending order.
- Step count calculation to analyze efficiency.
- Implementation with proper comments for understanding.

## Files Included
- `bubble_sort.cpp` - Implements Bubble Sort
- `selection_sort.cpp` - Implements Selection Sort
- `insertion_sort.cpp` - Implements Insertion Sort

## Compilation and Execution
To compile and run any sorting algorithm, use the following commands:

```sh
# Compile
g++ -o bubble_sort bubble_sort.cpp

# Run
./bubble_sort
```

Similarly, replace `bubble_sort.cpp` with `selection_sort.cpp` or `insertion_sort.cpp` to execute other sorting algorithms.

## Step Count Analysis
Each sorting algorithm counts the number of key operations (comparisons, swaps, or assignments) performed during execution. These counts help analyze time complexity:
- **Best Case**: Already sorted input.
- **Worst Case**: Reverse sorted input.
- **Average Case**: Random input.

## Graphical Analysis
To visualize the step count comparison:
- Run the sorting algorithms for different input sizes (10, 20, 30, 40 elements).
- Plot graphs of **Input Size vs. Step Count** for better understanding.

## Author
Developed for the **Analysis and Design of Algorithms** course (ENCS202) at SOET, B.Tech CSE.

## License
This project is open-source and free to use for educational purposes.
