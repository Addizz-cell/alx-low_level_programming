More Singly Linked Lists

Description

This repository contains solutions to various tasks involving manipulation of singly linked lists in C programming. Each task focuses on a specific function to perform operations such as printing a linked list, calculating the length of the list, adding nodes at different positions, deleting nodes, and more.

Tasks

0. Print list

	•	Function: size_t print_listint(const listint_t *h);
	•	Returns: The number of nodes.
	•	Description: Prints all elements of a listint_t list.

1. List length

	•	Function: size_t listint_len(const listint_t *h);
	•	Description: Returns the number of elements in a listint_t list.

2. Add node

	•	Function: listint_t *add_nodeint(listint_t **head, const int n);
	•	Returns: Address of the new element or NULL if failed.
	•	Description: Adds a new node at the beginning of a listint_t list.

3. Add node at the end

	•	Function: listint_t *add_nodeint_end(listint_t **head, const int n);
	•	Returns: Address of the new element or NULL if failed.
	•	Description: Adds a new node at the end of a listint_t list.

4. Free list

	•	Function: void free_listint(listint_t *head);
	•	Description: Frees a listint_t list.

5. Free list with head update

	•	Function: void free_listint2(listint_t **head);
	•	Description: Frees a listint_t list and sets the head to NULL.

6. Pop

	•	Function: int pop_listint(listint_t **head);
	•	Returns: The head node’s data.
	•	Description: Deletes the head node of a listint_t list.

7. Get node at index

	•	Function: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
	•	Returns: Nth node of a listint_t list or NULL if the node doesn’t exist.

8. Sum list

	•	Function: int sum_listint(listint_t *head);
	•	Returns: Sum of all the data (n) of a listint_t list.

9. Insert node at index

	•	Function: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
	•	Returns: Address of the new node or NULL if failed.
	•	Description: Inserts a new node at a given position.

10. Delete node at index

	•	Function: int delete_nodeint_at_index(listint_t **head, unsigned int index);
	•	Returns: 1 if succeeded, -1 if failed.
	•	Description: Deletes the node at a specified index.
