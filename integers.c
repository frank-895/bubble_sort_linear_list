#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This program generates 100 random integers and sorts them
// using a bubble sort.

typedef struct list {
  int data;
  struct list* next;
} list;

list* create_list(int d) {
  // creates linear linked list
  list* head = malloc(sizeof(list));
  head->data = d;
  head->next = NULL;
  return head;
}

list* add_list(int d, list* h) {
  // adds to front of linear linked list
  list* head = create_list(d);
  head->next = h;
  return head;
}

void random_int_list(int no, int* list) {
  // returns an array of x random integers
  srand(time(0));
  for (int i = 0; i < no; i++) {
    list[i] = rand() % 101;
  }
}

list* array_to_list(int d[], int size) {
  // turns array into linear linked list
  list* head = create_list(d[0]);
  for (int i = 1; i < size; i++) {
    head = add_list(d[i], head);
  }
  return head;
}

void print_list(list* h) {
  // prints linearly linked list
  int column = 0;
  while (h != NULL) {
    if (column != 5) {
        printf("%d\t", h->data);
        column++;
    } else {
        printf("\n%d\t", h->data);
        column = 1;
    }
    h = h->next;
  }
  printf("\n");
}

void swap(list* ptr1, list* ptr2) {
    int temp = ptr2->data;
    ptr2->data = ptr1->data;
    ptr1->data = temp;
}

void sort_list(list* h, int size) {
  // uses bubble sort to sort linearly linked list
  list* temp = h;
  list *comp = h;
  for (int i = 0; i < size; i++) {  // iterate through each element
  comp = temp;
    for (int j = i + 1; j < size;
         j++) {  // iterate through each element AFTER i
      comp = comp -> next;
      if (comp->data > temp->data) {
        swap(comp, temp);
      }
    }
    temp = temp->next;
  }
}

int main(void) {
  int size = 100;
  int list1[size];
  random_int_list(size, list1); // generate array of random integers
  list* head = array_to_list(list1, size); // turn array into linear list
  printf("The original list is:\n");
  print_list(head); // printing unsorted
  sort_list(head, size);
  printf("The sorted list is:\n");
  print_list(head); // printing sorted
  return 0;
}