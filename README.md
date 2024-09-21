***Random Integer Linked List Sorter***

**Description**

This C program generates 100 random integers, stores them in a linear linked list, and sorts the list using the bubble sort algorithm. It provides an excellent exercise in understanding linked lists, dynamic memory allocation, and basic sorting algorithms in C.

**Skills Developed**

- *Linked Lists*: Gain experience in creating, manipulating, and traversing linked lists.
- *Dynamic Memory Management*: Understand how to allocate and free memory using `malloc` and `free`.
- *Random Number Generation*: Learn to generate random numbers using the `rand()` function and seed with `srand()`.
- *Sorting Algorithms*: Implement the bubble sort algorithm, which reinforces logic and algorithm design.
- *Function Design*: Practice writing modular code by creating multiple functions for distinct tasks.

**Features**

- Generates 100 random integers between 0 and 100.
- Converts an array of integers into a linked list.
- Sorts the linked list using bubble sort.
- Displays the original and sorted lists.

**Requirements**

- C compiler (e.g., GCC)

**Usage**

- To compile the program, run:
```gcc -o sorter random_int_linked_list_sorter.c```
- To execute the program, run:
```./sorter```
- The program will display:
    1. The original list of random integers.
    2. The sorted list after applying bubble sort.

**Example Output**

```
The original list is:
23    45    67    12    89    ...
The sorted list is:
1     12    23    34    45    ...
```
