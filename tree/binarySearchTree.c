#include <stdlib.h>
#include <stdio.h>
#include "binaryTree.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert
 *  Description:  向二叉搜索树中插入一个值。
 *  Parameter:　BinaryTree **current 　current指向　树指针的指针
 *              TREE_TYPE value 要插入的值
 *  Create:12:25 2012-8-14
 *  Lastmodify:12:25 2012-8-14
 *  Author: 	　mang
 *  Version:    　1.0
 * =====================================================================================
 */
	void
insert (BinaryTree **current,TREE_TYPE value)
{
	if (*current==NULL) {
		*current=(BinaryTree*)malloc(sizeof(BinaryTree));
		if(*current!=NULL){
			(*current)->value=value;
			(*current)->left=NULL;
			(*current)->right=NULL;
		}
		else {
			printf("分配内存错误\n");
			exit(0);
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
