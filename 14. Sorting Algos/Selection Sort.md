## 🔢 Selection Sort

**Selection Sort** is a comparison-based sorting algorithm. It works by repeatedly selecting the **smallest (or largest)** element from the unsorted portion of the array and swapping it with the **first unsorted element**. This process continues until the entire array is sorted.

```cpp
void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int start = 0; start < n - 1; start++)
    {
        int minInd = start;
        for (int j = start + 1; j < n; j++)
        {
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }
        swap(arr[minInd], arr[start]);
    }
}
}
```
### ⏱ Time and Space Complexity

| Case    | Time Complexity |
|---------|-----------------|
| Best    | O(n²)           |
| Average | O(n²)           |
| Worst   | O(n²)           |

- **Auxiliary Space:** O(1)  
- **In-Place:** ✅ Yes  
- **Stable:** ❌ No

### ✅ Advantages

- Simple and easy to implement
- In-place sorting with O(1) extra space
- Fewer swaps than Bubble Sort (useful when memory writes are costly)

### ❌ Disadvantages

- Inefficient for large datasets: O(n²) time in all cases
- Not a stable sort (may reorder equal elements)
- Slower than advanced algorithms like Quick Sort or Merge Sort
