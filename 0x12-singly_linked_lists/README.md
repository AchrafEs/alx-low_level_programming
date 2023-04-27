""Singly linked lists.""

A singly linked list is a data structure used in computer programming
for storing and manipulating a sequence of elements.
It consists of a sequence of nodes, where each node
contains a value and a reference to the next node in the sequence.

The first node of the list is called the head, and the last node is called the tail.
The tail node has a reference to a special value called NULL,
which indicates the end of the list.

To traverse a singly linked list, you start at the head and follow
the references to the next node until you reach the tail.
Singly linked lists are often used in algorithms that require fast
insertion and deletion of elements from the beginning of the list,
as this operation can be done in constant time O(1).

However, accessing an element at a specific position in the list can be slow, 
as you need to traverse the list from the head to the desired position,
which can take O(n) time in the worst case.

Overall, singly linked lists are a simple and efficient data structure for certain operations,
but they have limitations in terms of accessing elements at specific positions.
