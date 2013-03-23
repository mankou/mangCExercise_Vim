#include <stdlib.h>
#include <stdio.h>
#include "binaryTree.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert
 *  Description:向二叉搜索树中插入元素。是以链表的形式表示结点，所以这里不受元素个数的限制。  
 *  Parameter: BinaryTree **current
 *             TREE_TYPE value  要插入的值。其中TREE_TYPE在binaryTree.h另define为int
 *  Create:15:05 2012-8-14
 *  Lastmodify:15:05 2012-8-14
 *  Author: 	　mang
 *  Version:    　1.0
 * =====================================================================================
 */
	void
insert (BinaryTree **current,TREE_TYPE value)
{
/* 注意：这里为什么要用　**current　因为我们改变的是指针变量的值，所以传递的必须是指针的指针。在中序遍历函数中因不需要改变指针变量的值，所以传递的是指针。
 * 提示：如果要在函数中改变指针　用两种方法。第一种：函数形参用指针的指针。第二种　函数返回指针。
 */
/* 	
 * 如果根结点为空，则新建结点
 * 否则　如果value>根结点->value　则把该值插入其右子树
 * 否则　如果value<根结点->value 则把该值插入其左子树
 */
	if (*current==NULL) {
		*current=(BinaryTree*)malloc(sizeof(BinaryTree));
		if((*current)!=NULL){
			(*current)->value=value;
			(*current)->left=NULL;
			(*current)->right=NULL;
		}
		else {
			printf("新建结点出错\n");
			exit(1);
		}

	}
	else if(value>(*current)->value){
		insert(&(*current)->right,value);
	}
	else if(value<(*current)->value){
		insert(&(*current)->left,value);
	}
	return ;
}		/* -----  end of function insert  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  inOrderTraverse
 *  Description:  中序遍历树
 *  Parameter:　BinaryTree *root 指向二叉搜索树的根结点
 *  Create:15:11 2012-8-14
 *  Lastmodify:15:11 2012-8-14
 *  Author: 	　mang
 *  Version:    　1.0
 * =====================================================================================
 */
	void
inOrderTraverse ( BinaryTree * root)
{

/*
 * 如果根结点为空什么也不做
 * 否则
 * 	　先中序遍历左子树
 * 	　再输出根结点的值
 * 	　再中序遍历右子树
 * 注意有的地方是这样写的：也是对的，但没有处理根结点为空的情况
 * 　如果左子树不空则中序遍历左子树
 * 　再输出根结点的值
 * 	 如果右子树不空则中序遍历右子树　　
 */
	if(root==NULL){
		;
	}
	else {
		inOrderTraverse(root->left);
		printf("%d ",root->value);
		inOrderTraverse(root->right);
	}
	return ;
}		/* -----  end of function inOrderTraverse  ----- */


BinaryTree *find(BinaryTree * tree,TREE_TYPE value );

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  find
 *  Description:  
 *  Parameter:
 *  Create:
 *  Lastmodify:
 *  Author: 	　mang
 *  Version:    　1.0
 * =====================================================================================
 */
	BinaryTree *	
find ( BinaryTree *current,TREE_TYPE value)
{
	if(current==NULL){
		return NULL;
	}
	else {
		if (value==current->value) {
			return current;	
		}
		else if(value>current->value){
			find(current->right,value);
		}
		else if (value<current->value) {
			find(current->left,value);
		}


	}
}		/* -----  end of function find  ----- */
