#include <stdlib.h>
#include <stdio.h>
#include "binaryTree.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert
 *  Description:  
 *  Parameter:
 *  Create:
 *  Lastmodify:
 *  Author: 	　mang
 *  Version:    　1.0
 * =====================================================================================
 */
	void
insert (BinaryTree **current,TREE_TYPE value)
{
	if (*current==NULL) {
		*current=(BinaryTree*)malloc(sizeof(BinaryTree));
//这里加入创建不合适判断的语句		
		(*current)->value=value;
		(*current)->left=NULL;
		(*current)->right=NULL;

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
 *  Description:  
 *  Parameter:
 *  Create:
 *  Lastmodify:
 *  Author: 	　mang
 *  Version:    　1.0
 * =====================================================================================
 */
	void
inOrderTraverse ( BinaryTree * root)
{
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
