// https://www.programiz.com/dsa
// Create a structure called Student that can hold the following details:
// Name
// Roll Number
// Branch
// CGPA
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
struct student {
    char name[50];
    int roll;
    char branch[10];
    float cgpa;
} s;
int main()
{
    printf("Enter the name of the student: ");
    scanf("%s", s.name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &s.roll);
    printf("Enter the branch of the student: ");
    scanf("%s", s.branch);
    printf("Enter the CGPA of the student: ");
    scanf("%f", &s.cgpa);
    printf("\nThe details of the student are as follows:\n");
    printf("Name: %s\nRoll Number: %d\nBranch: %s\nCGPA: %.2f\n", s.name, s.roll, s.branch, s.cgpa);
    return 0;
}
// 2. Create a menu driven program to do the following:
// Ask the user for the details of one student and store it.
// Display the details of the student.
#include <stdio.h>
int main()
{
    int choice;
    struct student s;
    printf("Enter the details of the student:\n");
    printf("Enter the name of the student: ");
    scanf("%s", s.name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &s.roll);
    printf("Enter the branch of the student: ");
    scanf("%s", s.branch);
    printf("Enter the CGPA of the student: ");
    scanf("%f", &s.cgpa);
    printf("\nThe details of the student are as follows:\n");
    printf("Name: %s\nRoll Number: %d\nBranch: %s\nCGPA: %.2f\n", s.name, s.roll, s.branch, s.cgpa);
    printf("\nEnter your choice:\n1. Display the details of the student\n2. Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nThe details of the student are as follows:\n");
        printf("Name: %s\nRoll Number: %d\nBranch: %s\nCGPA: %.2f\n", s.name, s.roll, s.branch, s.cgpa);
        break;
    case 2:
        printf("\nExiting the program...\n");
        break;
    default:
        printf("\nInvalid choice...\n");
        break;
    }
    return 0;
}
// 3. Create a menu driven program to do the following:
// Ask the user for the details of five students and store it.
// Display the details of all the five students.
// Ask the user to enter the roll number of a student and display the details of the student
// thathas the entered roll number.
#include <stdio.h>
struct student1 {
    char name[50];
    int roll;
    char branch[10];
    float cgpa;
} s1[5];
int main()
{
    int i, choice, roll;
    printf("Enter the details of the students:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s", s1[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d", &s1[i].roll);
        printf("Enter the branch of the student: ");
        scanf("%s", s1[i].branch);
        printf("Enter the CGPA of the student: ");
        scanf("%f", &s1[i].cgpa);
    }
    printf("\nThe details of the students are as follows:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\nRoll Number: %d\nBranch: %s\nCGPA: %.2f\n", s1[i].name, s1[i].roll, s1[i].branch, s1[i].cgpa);
    }
    printf("\nEnter your choice:\n1. Display the details of the students\n2. Display the details of the student with the entered roll number\n3. Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nThe details of the students are as follows:\n");
        for (i = 0; i < 5; i++)
        {
            printf("Name: %s\nRoll Number: %d\nBranch: %s\nCGPA: %.2f\n", s1[i].name, s1[i].roll, s1[i].branch, s1[i].cgpa);
        }
        break;
    case 2:
        printf("\nEnter the roll number of the student: ");
        scanf("%d", &roll);
        for (i = 0; i < 5; i++)
        {
            if (s1[i].roll == roll)
            {
               printf("\nThe details of the student with entered roll number are as follows:\n");
               printf("Name: %s\nRoll Number: %d\nBranch: %s\nCGPA: %.2f\n", s1[i].name, s1[i].roll, s1[i].branch, s1[i].cgpa);

            }
        }
    }
    return 0;
}



// Write a program in C to add two numbers using pointers.
#include <stdio.h>
int main()
{
   int first, second, *p, *q, sum;

   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
// Write a program in C to add numbers using call by reference.
// https://www.w3resource.com/c-programming-exercises/pointer/c-pointer-exercise-5.php
#include <stdio.h>  
int main()  
{  
    int a, b, sum;  
    printf("Enter two numbers: ");  
    scanf("%d%d", &a, &b);  
    sum = add(a, b);  
    printf("Sum of %d and %d is %d", a, b, sum);  
    return 0;  
}
int add(int x, int y)  
{  
    return x + y;  
}
// Write a program in C to add numbers using call by reference.
// https://www.w3resource.com/c-programming-exercises/pointer/c-pointer-exercise-5.php
#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}

// Write a program in C to store n elements in an array and print the elements using pointer.
// https://www.w3resource.com/c-programming-exercises/pointer/c-pointer-exercise-7.php
#include <stdio.h>
int main()
{
   int i, n, *ptr;
   printf("\n\n Pointer : Store n elements in an array and print the elements using pointer:\n");
   printf("-------------------------------------------------------------\n");
   printf(" Input the number of elements : ");
   scanf("%d", &n);
   ptr = (int *)malloc(n * sizeof(int));
   printf(" Input the elements : \n");
   for (i = 0; i < n; i++)
      scanf("%d", &ptr[i]);
   printf(" The elements are : \n");
   for (i = 0; i < n; i++)
      printf(" %d ", ptr[i]);
   printf("\n\n");
   return 0;
}
// SOL 2
#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   printf("\n\n Pointer : Store and retrieve elements from an array :\n"); 
   printf("------------------------------------------------------------\n");    
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i);
	  scanf("%d",arr1+i);
	  }
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i,*(arr1+i));
	  }
	   return 0;
}
// Create a simple function print_addr(int x) whose sole purpose is to print the address of the
// integer x passed to it. Create an integer variable in main, print out its address, and then pass
// that variable to print_addr. Compare the results. Is this expected behavior?
// http://maciej.sobieraj.pracownik.put.poznan.pl/10_C.pdf
//  Write a program in C to print the address of the variable.
#include <stdio.h>
int main()
{
   int a = 10;
   printf("\n\n Pointer : Print the address of the variable:\n");
   printf("----------------------------------------------------\n");
   printf(" The address of the variable is : %d\n", &a);
   return 0;
}
// Write a program in C to
// 1. Create a Linked List.
#include <stdio.h>
struct node
{
   int data;
   struct node *next;
};
void insert(struct node **, int);
void display(struct node *);
int main()
{
   struct node *start = NULL;
   int num, choice;
   printf("\n\n Pointer : Create a Linked List:\n");
   printf("---------------------------------\n");
   printf(" 1. Insert an element in the Linked List\n");
   printf(" 2. Display the Linked List\n");
   printf(" 3. Exit\n");
   printf(" Enter your choice : ");
   scanf("%d", &choice);
   while (choice != 3)
   {
      switch (choice)
      {
      case 1:
         printf("\n Enter the element to be inserted : ");
         scanf("%d", &num);
         insert(&start, num);
         break;
      case 2:
         display(start);
         break;
      }
      printf("\n Enter your choice : ");
      scanf("%d", &choice);
   }
   return 0;
}
// 2. Insert a new node.
void insert(struct node **start, int data)
{
   struct node *temp;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data;
   temp->next = *start;
   *start = temp;
}
// 3. Display the Linked List.
void display(struct node *start)
{
   struct node *ptr;
   if (start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   printf("\n The elements in the list are : \n");
   ptr = start;
   while (ptr != NULL)
   {
      printf(" %d ", ptr->data);
      ptr = ptr->next;
   }
}
// 4. Find a node in the list
void find(struct node *start, int data)
{
   struct node *ptr;
   int flag = 0;
   if (start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   ptr = start;
   while (ptr != NULL)
   {
      if (ptr->data == data)
      {
         printf("\n Element found\n");
         flag = 1;
         break;
      }
      ptr = ptr->next;
   }
   if (flag == 0)
      printf("\n Element not found\n");
}
// Delete the first node
void delete_first(struct node **start)
{
   struct node *ptr;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   ptr = *start;
   *start = (*start)->next;
   free(ptr);
}
// Delete the last node
void delete_last(struct node **start)
{
   struct node *ptr, *prev;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   if ((*start)->next == NULL)
   {
      free(*start);
      *start = NULL;
      return;
   }
   ptr = *start;
   while (ptr->next != NULL)
   {
      prev = ptr;
      ptr = ptr->next;
   }
   prev->next = NULL;
   free(ptr);
}
// Delete a node
void delete_node(struct node **start, int data)
{
   struct node *ptr, *prev;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   if ((*start)->data == data)
   {
      delete_first(start);
      return;
   }
   ptr = *start;
   while (ptr->data != data)
   {
      prev = ptr;
      ptr = ptr->next;
   }
   prev->next = ptr->next;
   free(ptr);
}
// Insert a node at the beginning.
void insert_begin(struct node **start, int data)
{
   struct node *temp;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data;
   temp->next = *start;
   *start = temp;
}
// Insert a node at the end.
void insert_end(struct node **start, int data)
{
   struct node *ptr, *temp;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data;
   temp->next = NULL;
   if (*start == NULL)
   {
      *start = temp;
      return;
   }
   ptr = *start;
   while (ptr->next != NULL)
      ptr = ptr->next;
   ptr->next = temp;
}
// Insert a node after a given node.
void insert_after(struct node **start, int data, int x)
{
   struct node *ptr, *temp;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   ptr = *start;
   while (ptr->data != x)
      ptr = ptr->next;
   temp->next = ptr->next;
   ptr->next = temp;
}
// Insert a node at the third position.
void insert_third(struct node **start, int data)
{
   struct node *ptr, *temp, *prev;
   int count = 0;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   ptr = *start;
   while (ptr != NULL)
   {
      count++;
      ptr = ptr->next;
   }
   if (count < 3)
   {
      printf("\n Not enough nodes\n");
      return;
   }
   ptr = *start;
   while (ptr->next != NULL)
      ptr = ptr->next;
   temp->next = ptr->next;
   ptr->next = temp;
}
// Link two separate linked lists.
void link_list(struct node **start1, struct node **start2)
{
   struct node *ptr1, *ptr2;
   if (*start1 == NULL)
   {
      printf("\n List1 is empty\n");
      return;
   }
   if (*start2 == NULL)
   {
      printf("\n List2 is empty\n");
      return;
   }
   ptr1 = *start1;
   while (ptr1->next != NULL)
      ptr1 = ptr1->next;
   ptr2 = *start2;
   ptr1->next = ptr2;
}
// Reverse a linked list.
void reverse(struct node **start)
{
   struct node *ptr1, *ptr2, *ptr3;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   ptr1 = *start;
   ptr2 = ptr1->next;
   ptr1->next = NULL;
   while (ptr2 != NULL)
   {
      ptr3 = ptr2->next;
      ptr2->next = ptr1;
      ptr1 = ptr2;
      ptr2 = ptr3;
   }
   *start = ptr1;
}
// Count the number of nodes in a linked list.
int count_nodes(struct node *start)
{
   struct node *ptr;
   int count = 0;
   if (start == NULL)
   {
      printf("\n List is empty\n");
      return 0;
   }
   ptr = start;
   while (ptr != NULL)
   {
      count++;
      ptr = ptr->next;
   }
   return count;
}
// Count the number of nodes in a linked list recursively.
int count_nodes_rec(struct node *start)
{
   if (start == NULL)
      return 0;
   return 1 + count_nodes_rec(start->next);
}

// 1. Find the middle of a given Linked List. Delete this identified middle element.
void delete_middle(struct node **start)
{
   struct node *ptr1, *ptr2, *ptr3;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   ptr1 = *start;
   ptr2 = ptr1->next;
   ptr3 = ptr2->next;
   while (ptr3 != NULL)
   {
      ptr1 = ptr1->next;
      ptr2 = ptr2->next;
      ptr3 = ptr3->next;
   }
   ptr2->next = ptr2->next->next;
}
// Find the reverse of a given linked list.
void reverse_list(struct node **start)
{
   struct node *ptr1, *ptr2, *ptr3;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   ptr1 = *start;
   ptr2 = ptr1->next;
   ptr1->next = NULL;
   while (ptr2 != NULL)
   {
      ptr3 = ptr2->next;
      ptr2->next = ptr1;
      ptr1 = ptr2;
      ptr2 = ptr3;
   }
   *start = ptr1;
}
// Remove the duplicate elements from a sorted linked list.
void remove_duplicate(struct node **start)
{
   struct node *ptr1, *ptr2, *ptr3;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   ptr1 = *start;
   ptr2 = ptr1->next;
   while (ptr2 != NULL)
   {
      if (ptr1->data == ptr2->data)
      {
         ptr3 = ptr2->next;
         ptr2->next = NULL;
         free(ptr2);
         ptr2 = ptr3;
      }
      else
      {
         ptr1 = ptr1->next;
         ptr2 = ptr2->next;
      }
   }
}
// Given only a pointer/reference to a node to be deleted in a single linked list, how do you delete it?
void delete_node(struct node **start, int x)
{
   struct node *ptr1, *ptr2;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   if ((*start)->data == x)
   {
      ptr1 = *start;
      *start = (*start)->next;
      free(ptr1);
      return;
   }
   ptr1 = *start;
   while (ptr1->next != NULL)
   {
      if (ptr1->next->data == x)
      {
         ptr2 = ptr1->next;
         ptr1->next = ptr1->next->next;
         free(ptr2);
         return;
      }
      ptr1 = ptr1->next;
   }
}
// Given a reference (pointer to pointer) to the head of a list and an int,delete the node with that int.
void delete_node_reference(struct node **start, int x)
{
   struct node *ptr1, *ptr2;
   if (*start == NULL)
   {
      printf("\n List is empty\n");
      return;
   }
   if ((*start)->data == x)
   {
      ptr1 = *start;
      *start = (*start)->next;
      free(ptr1);
      return;
   }
   ptr1 = *start;
   while (ptr1->next != NULL)
   {
      if (ptr1->next->data == x)
      {
         ptr2 = ptr1->next;
         ptr1->next = ptr1->next->next;
         free(ptr2);
         return;
      }
      ptr1 = ptr1->next;
   }
}
// Detect a loop in a Linked List using Floyd’s Cycle-Finding Algorithm.
int detect_loop_floyd(struct node *start)
{
   struct node *ptr1, *ptr2;
   if (start == NULL)
   {
      printf("\n List is empty\n");
      return 0;
   }
   ptr1 = start;
   ptr2 = start;
   while (ptr1->next != NULL && ptr2->next != NULL && ptr2->next->next != NULL)
   {
      ptr1 = ptr1->next;
      ptr2 = ptr2->next->next;
      if (ptr1 == ptr2)
         return 1;
   }
   return 0;
}
// Find nth node from the end of the linked list.
struct node *find_nth_from_end(struct node *start, int n)
{
   struct node *ptr1, *ptr2;
   if (start == NULL)
   {
      printf("\n List is empty\n");
      return NULL;
   }
   ptr1 = start;
   ptr2 = start;
   while (ptr1->next != NULL && n > 0)
   {
      ptr1 = ptr1->next;
      n--;
   }
   if (n > 0)
   {
      printf("\n n is greater than the number of nodes in the list\n");
      return NULL;
   }
   while (ptr1->next != NULL)
   {
      ptr1 = ptr1->next;
      ptr2 = ptr2->next;
   }
   return ptr2;
}
// Implementation of Stack using arrays.
void push(int *top, int *size, int *arr, int x)
{
   if (*top == *size - 1)
   {
      printf("\n Stack Overflow\n");
      return;
   }
   *top = *top + 1;
   arr[*top] = x;
}
int pop(int *top, int *size, int *arr)
{
   if (*top == -1)
   {
      printf("\n Stack Underflow\n");
      return INT_MIN;
   }
   return arr[(*top)--];
}
// Implementation of Queue using arrays.
void enqueue(int *front, int *rear, int *size, int *arr, int x)
{
   if (*rear == *size - 1)
   {
      printf("\n Queue Overflow\n");
      return;
   }
   if (*front == -1)
      *front = 0;
   *rear = *rear + 1;
   arr[*rear] = x;
}
int dequeue(int *front, int *rear, int *size, int *arr)
{
   if (*front == -1)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   return arr[(*front)++];
}
// Implementation of Circular Queue using Arrays.
void enqueue_circular(int *front, int *rear, int *size, int *arr, int x)
{
   if (*rear == *size - 1)
   {
      printf("\n Queue Overflow\n");
      return;
   }
   if (*front == -1)
      *front = 0;
   *rear = *rear + 1;
   arr[*rear] = x;
}
// Implementation of multiple Stacks in an Array.
void push_multiple_stack(int *top, int *size, int *arr, int x, int stack_no)
{
   if (*top == *size - 1)
   {
      printf("\n Stack Overflow\n");
      return;
   }
   *top = *top + 1;
   arr[*top] = x;
}
int pop_multiple_stack(int *top, int *size, int *arr, int stack_no)
{
   if (*top == -1)
   {
      printf("\n Stack Underflow\n");
      return INT_MIN;
   }
   return arr[(*top)--];
}
// Implementation of multiple Queues in an Array.
void enqueue_multiple_queue(int *front, int *rear, int *size, int *arr, int x, int queue_no)
{
   if (*rear == *size - 1)
   {
      printf("\n Queue Overflow\n");
      return;
   }
   if (*front == -1)
      *front = 0;
   *rear = *rear + 1;
   arr[*rear] = x;
}
int dequeue_multiple_queue(int *front, int *rear, int *size, int *arr, int queue_no)
{
   if (*front == -1)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   return arr[(*front)++];
}
// Implementation of Stack using Linked Lists.
void push_linked_list(struct node **top, int x)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = *top;
   *top = new_node;
}
int pop_linked_list(struct node **top)
{
   struct node *temp;
   int x;
   if (*top == NULL)
   {
      printf("\n Stack Underflow\n");
      return INT_MIN;
   }
   temp = *top;
   x = temp->data;
   *top = (*top)->next;
   free(temp);
   return x;
}
// Implementation of Queue using Linked Lists.
void enqueue_linked_list(struct node **front, struct node **rear, int x)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = NULL;
   if (*front == NULL)
      *front = new_node;
   else
      (*rear)->next = new_node;
   *rear = new_node;
}
int dequeue_linked_list(struct node **front)
{
   struct node *temp;
   int x;
   if (*front == NULL)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   temp = *front;
   x = temp->data;
   *front = (*front)->next;
   free(temp);
   return x;
}
// Implementation of Circular Queue using Linked Lists.
void enqueue_circular_linked_list(struct node **front, struct node **rear, int x)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = NULL;
   if (*front == NULL)
      *front = new_node;
   else
      (*rear)->next = new_node;
   *rear = new_node;
}
int dequeue_circular_linked_list(struct node **front)
{
   struct node *temp;
   int x;
   if (*front == NULL)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   temp = *front;
   x = temp->data;
   *front = (*front)->next;
   free(temp);
   return x;
}
// Implementation of multiple Stacks in Linked Lists.
void push_multiple_stack_linked_list(struct node **top, int x, int stack_no)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = *top;
   *top = new_node;
}
int pop_multiple_stack_linked_list(struct node **top, int stack_no)
{
   struct node *temp;
   int x;
   if (*top == NULL)
   {
      printf("\n Stack Underflow\n");
      return INT_MIN;
   }
   temp = *top;
   x = temp->data;
   *top = (*top)->next;
   free(temp);
   return x;
}
// Implementation of multiple Queues in Linked Lists.
void enqueue_multiple_queue_linked_list(struct node **front, struct node **rear, int x, int queue_no)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = NULL;
   if (*front == NULL)
      *front = new_node;
   else
      (*rear)->next = new_node;
   *rear = new_node;
}
int dequeue_multiple_queue_linked_list(struct node **front, int queue_no)
{
   struct node *temp;
   int x;
   if (*front == NULL)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   temp = *front;
   x = temp->data;
   *front = (*front)->next;
   free(temp);
   return x;
}
// Implementation of Input Restricted DeQues.
void enqueue_input_restricted_deque(struct node **front, struct node **rear, int x)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = NULL;
   if (*front == NULL)
      *front = new_node;
   else
      (*rear)->next = new_node;
   *rear = new_node;
}
int dequeue_input_restricted_deque(struct node **front)
{
   struct node *temp;
   int x;
   if (*front == NULL)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   temp = *front;
   x = temp->data;
   *front = (*front)->next;
   free(temp);
   return x;
}
// Implementation of Output Restricted DeQues.
void enqueue_output_restricted_deque(struct node **front, struct node **rear, int x)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = NULL;
   if (*front == NULL)
      *front = new_node;
   else
      (*rear)->next = new_node;
   *rear = new_node;
}
int dequeue_output_restricted_deque(struct node **front)
{
   struct node *temp;
   int x;
   if (*front == NULL)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   temp = *front;
   x = temp->data;
   *front = (*front)->next;
   free(temp);
   return x;
}
// Implementation of Circular DeQues.
void enqueue_circular_deque(struct node **front, struct node **rear, int x)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = NULL;
   if (*front == NULL)
      *front = new_node;
   else
      (*rear)->next = new_node;
   *rear = new_node;
}
int dequeue_circular_deque(struct node **front)
{
   struct node *temp;
   int x;
   if (*front == NULL)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   temp = *front;
   x = temp->data;
   *front = (*front)->next;
   free(temp);
   return x;
}
// Implementation of Tower of Hanoi using Recursion.
void tower_of_hanoi(int n, char source, char aux, char dest)
{
   if (n == 1)
   {
      printf("\n Move disk 1 from rod %c to rod %c", source, dest);
      return;
   }
   tower_of_hanoi(n - 1, source, dest, aux);
   printf("\n Move disk %d from rod %c to rod %c", n, source, dest);
   tower_of_hanoi(n - 1, aux, source, dest);
}
// Implementation of Tower of Hanoi using Iterative.
void tower_of_hanoi_iterative(int n, char source, char aux, char dest)
{
   int i;
   for (i = 1; i <= n; i++)
   {
      printf("\n Move disk %d from rod %c to rod %c", i, source, dest);
   }
}
// Implementation of Tower of Hanoi using Iterative with Stack.
void tower_of_hanoi_iterative_stack(int n, char source, char aux, char dest)
{
   int i;
   struct node *top = NULL;
   for (i = 1; i <= n; i++)
   {
      push_stack_linked_list(&top, i, 1);
   }
   while (top != NULL)
   {
      printf("\n Move disk %d from rod %c to rod %c", top->data, source, dest);
      pop_stack_linked_list(&top, 1);
   }
}
// Implementation of Tower of Hanoi using Iterative with Queue.
void tower_of_hanoi_iterative_queue(int n, char source, char aux, char dest)
{
   int i;
   struct node *front = NULL;
   struct node *rear = NULL;
   for (i = 1; i <= n; i++)
   {
      enqueue_queue_linked_list(&front, &rear, i, 1);
   }
   while (front != NULL)
   {
      printf("\n Move disk %d from rod %c to rod %c", front->data, source, dest);
      dequeue_queue_linked_list(&front, &rear, 1);
   }
}
// Implementation of Queue using stacks.
void enqueue_queue_using_stack(struct node **front, struct node **rear, int x)
{
   struct node *new_node;
   new_node = (struct node *)malloc(sizeof(struct node));
   new_node->data = x;
   new_node->next = NULL;
   if (*front == NULL)
      *front = new_node;
   else
      (*rear)->next = new_node;
   *rear = new_node;
}
int dequeue_queue_using_stack(struct node **front)
{
   struct node *temp;
   int x;
   if (*front == NULL)
   {
      printf("\n Queue Underflow\n");
      return INT_MIN;
   }
   temp = *front;
   x = temp->data;
   *front = (*front)->next;
   free(temp);
   return x;
}

// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->item);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->item);
}

// Create a new Node
struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

int main() {
  struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);
}

// Checking if a binary tree is a full binary tree in C

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int item;
  struct Node *left, *right;
};

// Creation of new Node
struct Node *createNewNode(char k) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->item = k;
  node->right = node->left = NULL;
  return node;
}

bool isFullBinaryTree(struct Node *root) {
  // Checking tree emptiness
  if (root == NULL)
    return true;

  // Checking the presence of children
  if (root->left == NULL && root->right == NULL)
    return true;

  if ((root->left) && (root->right))
    return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

  return false;
}

int main() {
  struct Node *root = NULL;
  root = createNewNode(1);
  root->left = createNewNode(2);
  root->right = createNewNode(3);

  root->left->left = createNewNode(4);
  root->left->right = createNewNode(5);
  root->left->right->left = createNewNode(6);
  root->left->right->right = createNewNode(7);

  if (isFullBinaryTree(root))
    printf("The tree is a full binary tree\n");
  else
    printf("The tree is not a full binary tree\n");
}

// Checking if a binary tree is a perfect binary tree in C

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

// Creating a new node
struct node *newnode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return (node);
}

// Calculate the depth
int depth(struct node *node) {
  int d = 0;
  while (node != NULL) {
    d++;
    node = node->left;
  }
  return d;
}

// Check if the tree is perfect
bool is_perfect(struct node *root, int d, int level) {
    // Check if the tree is empty
  if (root == NULL)
    return true;

  // Check the presence of children
  if (root->left == NULL && root->right == NULL)
    return (d == level + 1);

  if (root->left == NULL || root->right == NULL)
    return false;

  return is_perfect(root->left, d, level + 1) &&
       is_perfect(root->right, d, level + 1);
}

// Wrapper function
bool is_Perfect(struct node *root) {
  int d = depth(root);
  return is_perfect(root, d, 0);
}

int main() {
  struct node *root = NULL;
  root = newnode(1);
  root->left = newnode(2);
  root->right = newnode(3);
  root->left->left = newnode(4);
  root->left->right = newnode(5);
  root->right->left = newnode(6);

  if (is_Perfect(root))
    printf("The tree is a perfect binary tree\n");
  else
    printf("The tree is not a perfect binary tree\n");
}

// Checking if a binary tree is a complete binary tree in C

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int key;
  struct Node *left, *right;
};

// Node creation
struct Node *newNode(char k) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->key = k;
  node->right = node->left = NULL;
  return node;
}

// Count the number of nodes
int countNumNodes(struct Node *root) {
  if (root == NULL)
    return (0);
  return (1 + countNumNodes(root->left) + countNumNodes(root->right));
}

// Check if the tree is a complete binary tree
bool checkComplete(struct Node *root, int index, int numberNodes) {
  // Check if the tree is complete
  if (root == NULL)
    return true;

  if (index >= numberNodes)
    return false;

  return (checkComplete(root->left, 2 * index + 1, numberNodes) && checkComplete(root->right, 2 * index + 2, numberNodes));
}

int main() {
  struct Node *root = NULL;
  root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);

  int node_count = countNumNodes(root);
  int index = 0;

  if (checkComplete(root, index, node_count))
    printf("The tree is a complete binary tree\n");
  else
    printf("The tree is not a complete binary tree\n");
}

// Checking if a binary tree is height balanced in C

#include <stdio.h>
#include <stdlib.h>
#define bool int

// Node creation
struct node {
  int item;
  struct node *left;
  struct node *right;
};

// Create a new node
struct node *newNode(int item) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->item = item;
  node->left = NULL;
  node->right = NULL;

  return (node);
}

// Check for height balance
bool checkHeightBalance(struct node *root, int *height) {
  // Check for emptiness
  int leftHeight = 0, rightHeight = 0;
  int l = 0, r = 0;

  if (root == NULL) {
    *height = 0;
    return 1;
  }

  l = checkHeightBalance(root->left, &leftHeight);
  r = checkHeightBalance(root->right, &rightHeight);

  *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

  if ((leftHeight - rightHeight >= 2) || (rightHeight - leftHeight >= 2))
    return 0;

  else
    return l && r;
}

int main() {
  int height = 0;

  struct node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  if (checkHeightBalance(root, &height))
    printf("The tree is balanced");
  else
    printf("The tree is not balanced");
}

// Binary Search Tree operations in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    printf("%d -> ", root->key);

    // Traverse right
    inorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

// Driver code
int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  printf("Inorder traversal: ");
  inorder(root);

  printf("\nAfter deleting 10\n");
  root = deleteNode(root, 10);
  printf("Inorder traversal: ");
  inorder(root);
}

// AVL tree implementation in C

#include <stdio.h>
#include <stdlib.h>

// Create Node
struct Node {
  int key;
  struct Node *left;
  struct Node *right;
  int height;
};

int max(int a, int b);

// Calculate height
int height(struct Node *N) {
  if (N == NULL)
    return 0;
  return N->height;
}

int max(int a, int b) {
  return (a > b) ? a : b;
}

// Create a node
struct Node *newNode(int key) {
  struct Node *node = (struct Node *)
    malloc(sizeof(struct Node));
  node->key = key;
  node->left = NULL;
  node->right = NULL;
  node->height = 1;
  return (node);
}

// Right rotate
struct Node *rightRotate(struct Node *y) {
  struct Node *x = y->left;
  struct Node *T2 = x->right;

  x->right = y;
  y->left = T2;

  y->height = max(height(y->left), height(y->right)) + 1;
  x->height = max(height(x->left), height(x->right)) + 1;

  return x;
}

// Left rotate
struct Node *leftRotate(struct Node *x) {
  struct Node *y = x->right;
  struct Node *T2 = y->left;

  y->left = x;
  x->right = T2;

  x->height = max(height(x->left), height(x->right)) + 1;
  y->height = max(height(y->left), height(y->right)) + 1;

  return y;
}

// Get the balance factor
int getBalance(struct Node *N) {
  if (N == NULL)
    return 0;
  return height(N->left) - height(N->right);
}

// Insert node
struct Node *insertNode(struct Node *node, int key) {
  // Find the correct position to insertNode the node and insertNode it
  if (node == NULL)
    return (newNode(key));

  if (key < node->key)
    node->left = insertNode(node->left, key);
  else if (key > node->key)
    node->right = insertNode(node->right, key);
  else
    return node;

  // Update the balance factor of each node and
  // Balance the tree
  node->height = 1 + max(height(node->left),
               height(node->right));

  int balance = getBalance(node);
  if (balance > 1 && key < node->left->key)
    return rightRotate(node);

  if (balance < -1 && key > node->right->key)
    return leftRotate(node);

  if (balance > 1 && key > node->left->key) {
    node->left = leftRotate(node->left);
    return rightRotate(node);
  }

  if (balance < -1 && key < node->right->key) {
    node->right = rightRotate(node->right);
    return leftRotate(node);
  }

  return node;
}

struct Node *minValueNode(struct Node *node) {
  struct Node *current = node;

  while (current->left != NULL)
    current = current->left;

  return current;
}

// Delete a nodes
struct Node *deleteNode(struct Node *root, int key) {
  // Find the node and delete it
  if (root == NULL)
    return root;

  if (key < root->key)
    root->left = deleteNode(root->left, key);

  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    if ((root->left == NULL) || (root->right == NULL)) {
      struct Node *temp = root->left ? root->left : root->right;

      if (temp == NULL) {
        temp = root;
        root = NULL;
      } else
        *root = *temp;
      free(temp);
    } else {
      struct Node *temp = minValueNode(root->right);

      root->key = temp->key;

      root->right = deleteNode(root->right, temp->key);
    }
  }

  if (root == NULL)
    return root;

  // Update the balance factor of each node and
  // balance the tree
  root->height = 1 + max(height(root->left),
               height(root->right));

  int balance = getBalance(root);
  if (balance > 1 && getBalance(root->left) >= 0)
    return rightRotate(root);

  if (balance > 1 && getBalance(root->left) < 0) {
    root->left = leftRotate(root->left);
    return rightRotate(root);
  }

  if (balance < -1 && getBalance(root->right) <= 0)
    return leftRotate(root);

  if (balance < -1 && getBalance(root->right) > 0) {
    root->right = rightRotate(root->right);
    return leftRotate(root);
  }

  return root;
}

// Print the tree
void printPreOrder(struct Node *root) {
  if (root != NULL) {
    printf("%d ", root->key);
    printPreOrder(root->left);
    printPreOrder(root->right);
  }
}

int main() {
  struct Node *root = NULL;

  root = insertNode(root, 2);
  root = insertNode(root, 1);
  root = insertNode(root, 7);
  root = insertNode(root, 4);
  root = insertNode(root, 5);
  root = insertNode(root, 3);
  root = insertNode(root, 8);

  printPreOrder(root);

  root = deleteNode(root, 3);

  printf("\nAfter deletion: ");
  printPreOrder(root);

  return 0;
}

// binary tree implementation in C
#include<stdlib.h>
#include<stdio.h>

struct bin_tree {
int data;
struct bin_tree * right, * left;
};
typedef struct bin_tree node;

void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}

void print_preorder(node * tree)
{
    if (tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

void print_inorder(node * tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%d\n",tree->data);
        print_inorder(tree->right);
    }
}

void print_postorder(node * tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}

void deltree(node * tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

node* search(node ** tree, int val)
{
    if(!(*tree))
    {
        return NULL;
    }

    if(val < (*tree)->data)
    {
        search(&((*tree)->left), val);
    }
    else if(val > (*tree)->data)
    {
        search(&((*tree)->right), val);
    }
    else if(val == (*tree)->data)
    {
        return *tree;
    }
}

void main()
{
    node *root;
    node *tmp;
    //int i;

    root = NULL;
    /* Inserting nodes into tree */
    insert(&root, 9);
    insert(&root, 4);
    insert(&root, 15);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 17);
    insert(&root, 2);

    /* Printing nodes of tree */
    printf("Pre Order Display\n");
    print_preorder(root);

    printf("In Order Display\n");
    print_inorder(root);

    printf("Post Order Display\n");
    print_postorder(root);

    /* Search node into tree */
    tmp = search(&root, 4);
    if (tmp)
    {
        printf("Searched node=%d\n", tmp->data);
    }
    else
    {
        printf("Data Not found in tree.\n");
    }

    /* Deleting all nodes of tree */
    deltree(root);
}
