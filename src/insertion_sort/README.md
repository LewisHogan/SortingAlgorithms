# Insertion Sort

Insertion sort is a in-place stable sorting algorithm that can be implemented in a couple of lines of code.

## Memory complexity

As the sorting algorithm is in-place, the amount of memory required to sort the array does not change based on the size of the array.

## Running complexity

### Best case

In the best case scenario (where the array is already sorted), insertion sort can perform in a linear running time O(n), as for each element in the array it will be checked with the element to it's left, upon which the comparison will cause the inner loop to immediately exit.

### Average case

In the average case scenario, insertion sort will perform according to O(n<sup>2</sup>), this is because for each element in the array being compared with another element, the chance of inversion being necessary (i.e. swap of two numbers in the array) is 50%. [More can be read on the maths behind this logic here.][0]



### Worst case

In the worst case scenario (where the array is sorted backwards), insertion sort will perform according to O(n<sup>2</sup>), as each element in the array will be compared will every element of the sorted section of the array.

[0]: https://stackoverflow.com/questions/17055341/why-is-insertion-sort-%ce%98n2-in-the-average-case/17055342#17055342