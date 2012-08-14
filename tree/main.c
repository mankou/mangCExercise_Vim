#include <stdlib.h>
#include <stdio.h>
#include "binaryTree.h"                         /* 声明了关于二叉树函数原型的接口 */
#define N 6
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  二叉搜索树　示例主调函数
 *  Parameter:
 *  Create:14:58 2012-8-14
 *  Lastmodify:14:58 2012-8-14
 *  Author:  	  mang
 *  Version: 	  1.0
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	int a[N]={6,4,5,8,2,3};
	int i;	
	BinaryTree *tree=NULL;                      /*新建一个指向二叉搜索树的指针  */

/*
 * 不断向二叉搜索树中插入结点
 */
	for (i = 0; i < N; i++) {
		insert(&tree,a[i]);                     /* 注意第一个实参是&tree 是指针的指针或者指针变量所在内存单元的地址 */
	}

	inOrderTraverse(tree);                      /* 中序遍历输出二叉搜索树 */


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
