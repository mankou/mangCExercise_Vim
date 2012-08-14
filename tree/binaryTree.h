#define TREE_TYPE int

struct binaryTree {
	TREE_TYPE value;
	struct biaryTree * left;
	struct biaryTree * right;
} /* optional variable list */;
typedef struct binaryTree BinaryTree;

void insert(BinaryTree **current,TREE_TYPE value);


BinaryTree *find(BinaryTree * tree,TREE_TYPE value );


void inOrderTraverse(BinaryTree *);
