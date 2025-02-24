import time
import random
import matplotlib.pyplot as plt

def merge(arr, left, mid, right):
    n1 = mid - left + 1
    n2 = right - mid
    L = arr[left:mid + 1]
    R = arr[mid + 1:right + 1]
    
    i = j = 0
    k = left
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1
    
    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1
    
    while j < n2:
        arr[k] = R[j]
        j += 1
        k += 1

def merge_sort(arr, left, right):
    if left < right:
        mid = (left + right) // 2
        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        merge(arr, left, mid, right)

def measure_time(n):
    arr = [random.randint(1, 1000) for _ in range(n)]
    start_time = time.time()
    merge_sort(arr, 0, n - 1)
    end_time = time.time()
    return end_time - start_time

sizes = [10, 20, 30, 40, 50, 100, 200, 500]
times = [measure_time(n) for n in sizes]

plt.plot(sizes, times, marker='o', linestyle='-', color='b', label='Merge Sort Time')
plt.xlabel('Input Size (n)')
plt.ylabel('Time Taken (seconds)')
plt.title('Merge Sort Time Complexity Analysis')
plt.legend()
plt.grid()
plt.show()
