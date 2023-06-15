`0x17-doubly_linked_lists`

Imagine you have a bunch of boxes, and each box has two arrows on it—one pointing to the
previous box and one pointing to the next box. That's similar to how a doubly linked list works.

In programming, a doubly linked list is a data structure where each element, called a "node,"
contains two parts of information: the actual data you want to store and two pointers.
One pointer points to the previous node (the box before it), and the other pointer points to the
next node (the box after it).

Here's an example of what a node in a doubly linked list might look like in C:

```
	struct Node {
    	int data;             // The data we want to store in the node
    	struct Node* prev;    // Pointer to the previous node
    	struct Node* next;    // Pointer to the next node
	};
```

Let's say we have three nodes: A, B, and C. In our doubly linked list, the pointers would be set up like this:

```
	A.prev = NULL     A.next = &B
	B.prev = &A       B.next = &C
	C.prev = &B       C.next = NULL
```

Here, the prev pointer of node A is set to NULL because there is no node before A. Similarly,
the next pointer of node C is set to NULL because there is no node after C.

Using this setup, you can easily traverse the list in both directions. For example, if you start at
node A, you can follow the next pointers to go from A to B to C. If you start at node C, you can
follow the prev pointers to go from C to B to A.

Doubly linked lists are helpful because they allow efficient insertion and deletion of nodes at any
position in the list. Since each node knows about its previous and next nodes, you can easily
rearrange the pointers to insert or remove a node without having to modify the entire list.
