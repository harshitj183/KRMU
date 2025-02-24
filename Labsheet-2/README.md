# Merge Sort Analysis

## Introduction
Merge Sort is a divide-and-conquer sorting algorithm that recursively splits an array into smaller subarrays, sorts them, and then merges them back together. This project implements Merge Sort and analyzes its performance across different input sizes under best-case, worst-case, and average-case scenarios.

## Objective
- Implement Merge Sort to sort an array of elements and determine the time required to sort.
- Measure the execution time for different values of `n`.
- Analyze the time complexity in best-case, worst-case, and average-case scenarios.
- Plot a graph of time taken versus `n`.

## Problem Description
### Task:
1. Write a program to sort a set of numbers using Merge Sort.
2. Measure the time required to sort different values of `n`.
3. Analyze the time complexity by varying the input size.
4. Plot a graph of time taken versus `n`.

### Input:
- A set of numbers provided by the user.
- Perform sorting for input sizes of `10, 20, 30, and 40` numbers.

### Output:
- Sorted arrays in ascending order.
- Time count for sorting the numbers.
- Graph of time taken versus `n`.

## Cases Analyzed:
- **Best Case:** Already sorted input.
- **Worst Case:** Reverse sorted input.
- **Average Case:** Randomized input.

## Implementation
The code is written in **C++** and uses the `chrono` library to measure the execution time. It includes functions for merging, sorting, and printing the array.

## Requirements
- C++ compiler (g++ recommended)
- Python (for plotting graphs using Matplotlib, if required)

## Compilation and Execution
To compile and run the program, use:
```bash
 g++ merge_sort.cpp -o merge_sort
 ./merge_sort
```

## Expected Output
Example output:
```
Original Array: 35 12 48 7 22 
Sorted Array: 7 12 22 35 48 
Step Count: 10
Time Taken: 50 microseconds
```

## Graph Plotting
To visualize the time complexity, use Python's Matplotlib to plot the execution time against input size.

## Submission
- Ensure the repository includes:
  - `merge_sort.cpp` (Implementation file)
  - `README.md` (Documentation)
  - Sample outputs and graphs
- Submit the GitHub repository link on Moodle before the due date.

## Author
- **Course:** Analysis and Design of Algorithms (ENCS202)
- **Instructor:** Dr. Vandna Batra
- **Batch:** 2023-2027
- **Department:** School of Engineering & Technology, B.Tech CSE, Semester 4th
