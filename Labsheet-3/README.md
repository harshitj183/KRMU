# Recursive Binary Search

## Introduction
Binary Search is an efficient search algorithm that follows the divide-and-conquer approach. This implementation uses recursion to search for an element in a sorted array.

## Objective
- Implement Recursive Binary Search.
- Measure the time complexity by varying input sizes.
- Analyze the best-case, worst-case, and average-case performance.

## Problem Description
1. Implement Recursive Binary Search.
2. Measure the time required to search for an element.
3. Analyze time complexity for different input sizes.
4. Plot a graph of time taken vs. input size.

## Input
- A sorted list of numbers provided by the user.
- Perform search operations for varying input sizes.

## Output
- Index of the searched element (if found), else -1.
- Time taken for search operation.
- Graph of time taken vs. input size.

## Implementation Details
- The algorithm works by repeatedly dividing the search space in half.
- Recursive calls are made to either the left or right subarray.
- The base case is when the element is found or when the search space is exhausted.

## Complexity Analysis
| Case        | Time Complexity |
|------------|----------------|
| Best Case  | O(1) |
| Worst Case | O(log n) |
| Average Case | O(log n) |

## Sample Test Cases

### Test Case 1: Element in the Middle
**Input:**
```python
arr = [5, 10, 15, 20, 25]
search_element = 15
```
**Expected Output:**
```
Index: 2, Time Taken: Minimal
```

### Test Case 2: Element Not Present
**Input:**
```python
arr = [5, 10, 15, 20, 25]
search_element = 30
```
**Expected Output:**
```
Index: -1, Time Taken: Higher due to full search.
```

## Graphical Representation
A graph plotting time complexity against input size can be generated using Matplotlib in Python.

## How to Run the Code
1. Clone the repository:
```bash
git clone <repository_url>
```
2. Navigate to the directory:
```bash
cd recursive-binary-search
```
3. Run the script:
```bash
python recursive_binary_search.py
```

## Conclusion
- Recursive Binary Search is an efficient way to search in sorted arrays.
- The time complexity is **O(log n)** in the worst case.
- The algorithm performs significantly better than Linear Search for large datasets.
