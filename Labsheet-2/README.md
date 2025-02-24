# Merge Sort Analysis

## Introduction
This project implements and analyzes the Merge Sort algorithm by measuring its execution time for different input sizes and cases (Best, Worst, and Average).

## Features
- Implementation of Merge Sort in C++
- Measurement of execution time
- Analysis of time complexity for different input cases
- Graph plotting using Python (Matplotlib)

## Files Included
- `merge_sort.cpp` - C++ program implementing Merge Sort and measuring execution time.
- `graph_plot.py` - Python script to plot execution time vs input size.
- `README.md` - Project documentation.

## Compilation and Execution
### Running Merge Sort in C++
1. Compile the code:
   ```sh
   g++ merge_sort.cpp -o merge_sort
   ```
2. Run the executable:
   ```sh
   ./merge_sort
   ```

### Running Graph Plotting in Python
1. Ensure you have Python installed.
2. Install required library:
   ```sh
   pip install matplotlib
   ```
3. Run the script:
   ```sh
   python graph_plot.py
   ```

## Example Input & Output
### Input
```
Numbers: [35, 12, 48, 7, 22]
```
### Output
```
Sorted Array: [7, 12, 22, 35, 48]
Step Count: (Depends on comparisons)
Time Taken: (Varies per system)
```

## Analysis Cases
- **Best Case:** Already sorted input.
- **Worst Case:** Reverse sorted input.
- **Average Case:** Random input.

## Graph Representation
The execution time is plotted against different input sizes (10, 20, 30, 40 elements) using Python's Matplotlib.

## Author
- Developed for `Analysis and Design of Algorithms` Lab
- Faculty: Dr. Vandna Batra
- B.Tech CSE, Semester 4th, Batch 2023-2027
