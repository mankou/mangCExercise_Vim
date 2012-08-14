
#include	<stdlib.h>
#include <stdio.h>
#include "binaryTree.h"
#define N 6
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 *  Parameter:
 *  Create:
 *  Lastmodify:
 *  Author:  	  mang
 *  Version: 	  1.0
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	int a[N]={6,4,5,8,2,3};
	int i;	
	BinaryTree *tree=NULL;
	
/*
 * 创建二叉搜索树
 */
	for (i = 0; i < N; i++) {
		insert(&tree,a[i]);
	}

/*
 * 中序遍历二叉搜索树
 */
	inOrderTraverse(tree);


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
