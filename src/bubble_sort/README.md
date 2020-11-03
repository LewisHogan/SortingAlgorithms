# Bubble Sort

Bubble sort is a in-place sorting algorithm that can be implemented in a couple of lines of code.

## Memory complexity

As the sorting algorithm is in-place, the amount of memory required to sort the array does not change based on the size of the array.

## Running complexity

It is never recommended to use bubble sort in a production environment, even in comparison to other O(n<sup>2</sup>) algorithms, the performance is usually inferior in practice.

### Best case

In the best case scenario (where the array is already sorted), bubble sort can perform in a linear running time O(n), as the algorithm only loops through each element once, and as no element is swapped, exits.

### Average case

In the average case scenario, bubble sort will perform according to O(n<sup>2</sup>).

### Worst case

In the worst case scenario (where the array is sorted backwards), bubble sort will perform according to O(n<sup>2</sup>).