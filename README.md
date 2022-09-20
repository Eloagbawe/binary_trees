solutions to binary tree exercises

0. Write a function that creates a binary tree node

	Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
	Where parent is a pointer to the parent node of the node to create
	And value is the value to put in the new node
	When created, a node does not have any child
	Your function must return a pointer to the new node, or NULL on failure

1. Write a function that inserts a node as the left-child of another node

	Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
	Where parent is a pointer to the node to insert the left-child in
	And value is the value to store in the new node
	Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
	If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

2. Write a function that inserts a node as the right-child of another node

	Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
	Where parent is a pointer to the node to insert the right-child in
	And value is the value to store in the new node
	Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
	If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.