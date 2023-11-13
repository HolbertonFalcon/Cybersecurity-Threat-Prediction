Singly linked lists
#
>A linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence. In its most basic form, each node contains: data, and a reference (in other words, a link) to the next node in the sequence.
#
>Singly linked lists contain nodes which have a data field as well as 'next' field, which points to the next node in line of nodes. Operations that can be performed on singly linked lists include insertion, deletion and traversal.
#
>The head of a linked list is a reference to the first node of the list1234. It can be a variable that stores the address of the first node, or a dummy node that points to the first node. The head is used to access the elements of the list and perform operations on it. The head itself does not contain any data, only a link to the next node. If the list is empty, the head is null.
#
>The tail of a linked list is a reference to the last node of the list12345. It can be a variable that stores the address of the last node, or a node that points to null. The tail is used to add elements to the end of the list and perform operations on it. The tail itself may contain data and a link to the previous node (if it is a doubly linked list). If the list is empty, the tail is null.

Some implementations pass a pointer to pointer parameter to allow changing the head pointer directly instead of returning the new one. Thus you could write:

```
// note that there's no return value: it's not needed
void push(struct node** head, int data)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=*head;
    *head = newnode; // *head stores the newnode in the head
}
```

```
// and call like this:
push(&head,1);
```

The implementation that doesn't take a pointer to the head pointer must return the new head, and the caller is responsible for updating it itself:

```
struct node* push(struct node* head, int data)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    return newnode;
}
```

```
// note the assignment of the result to the head pointer
head = push(head,1);
```

If you don't do this assignment when calling this function, you will be leaking the nodes you allocate with malloc, and the head pointer will always point to the same node.

The advantage should be clear now: with the second, if the caller forgets to assign the returned node to the head pointer, bad things will happen.


