import time

def recursive_binary_search(arr, low, high, target):
    if low > high:
        return -1
    
    mid = (low + high) // 2
    if arr[mid] == target:
        return mid
    elif arr[mid] > target:
        return recursive_binary_search(arr, low, mid - 1, target)
    else:
        return recursive_binary_search(arr, mid + 1, high, target)

# Function to measure time complexity
def measure_time_complexity():
    import matplotlib.pyplot as plt
    import random

    input_sizes = [10, 20, 30, 40, 50, 100, 200, 500, 1000]
    time_taken = []

    for size in input_sizes:
        sorted_list = sorted(random.sample(range(0, size * 10), size))  # Generate sorted list
        target = sorted_list[size // 2]  # Choosing middle element as target
        
        start_time = time.time()
        recursive_binary_search(sorted_list, 0, len(sorted_list) - 1, target)
        end_time = time.time()
        
        time_taken.append(end_time - start_time)
    
    plt.plot(input_sizes, time_taken, marker='o', linestyle='-', color='b')
    plt.xlabel('Input Size (n)')
    plt.ylabel('Time Taken (seconds)')
    plt.title('Time Complexity of Recursive Binary Search')
    plt.grid()
    plt.show()

# Sample test case
test_arr = [5, 10, 15, 20, 25]
target = 15
index = recursive_binary_search(test_arr, 0, len(test_arr) - 1, target)
print(f"Element {target} found at index: {index}")

# Measure time complexity
measure_time_complexity()
