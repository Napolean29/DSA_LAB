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
// SOL 2
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
// Given a reference (pointer to pointer) to the head of a list and an int,
//  delete the node with that int.
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