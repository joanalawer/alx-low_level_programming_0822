# 0x13. C - More singly linked lists
This is task builds on the concept of singly linked list fro task 0x12 in the ALX low level programming project.

### What are singly_linked_lists?:
In this concepts I learnt that singly_linked_list is a type of data structure in which items have a connection with one another in the list.

### Why is singly_linked_lists needed?:
Unlike arrays, linked lists (singly), are not stored in any particular order but each item is a connection to the adjacent item. They do not have a fixed size unlike arrays as well.

### When can singly_linked_list be used?:
Singly_linked_list can be used in situations where there is a need to created a dynamic list where more items need to be added at any time. (Fast insertion of new items)

### How are singly_linked_list used?:
A singly_linked_list is define by struct and declared as nodes. 
A node is made up of two parts, the data and the address of the next node. 
A head, which is a pointer, always points to the first node of a singly linked list.
The last node in a singly linked list points to NULL.

## Implementation of singly linked list are demonstrated in the tasks below:

### 0. Print list
Write a function that prints all the elements of a listint_t list.
* Prototype: size_t print_listint(const listint_t *h);
* Return: the number of nodes
* Format: see example
* You are allowed to use printf

### 1. List length
Write a function that returns the number of elements in a linked listint_t list.
* Prototype: size_t listint_len(const listint_t *h);

### 2. Add node
Write a function that adds a new node at the beginning of a listint_t list.
* Prototype: listint_t *add_nodeint(listint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed

### 3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.
* Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed

### 4. Free list
Write a function that frees a listint_t list.
* Prototype: void free_listint(listint_t *head);

### 5. Free
Write a function that frees a listint_t list.
* Prototype: void free_listint2(listint_t **head);
* The function sets the head to NULL
