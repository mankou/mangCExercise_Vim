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
	int i,k;	
	BinaryTree *tree=NULL;                      /*新建一个指向二叉搜索树的指针  */
	BinaryTree *result=NULL;

/*
 * 不断向二叉搜索树中插入结点
 */
	for (i = 0; i < N; i++) {
		insert(&tree,a[i]);                     /* 注意第一个实参是&tree 是指针的指针或者指针变量所在内存单元的地址 */
	}
	printf("中序遍历二叉搜索树\n");
	inOrderTraverse(tree);                      /* 中序遍历输出二叉搜索树 */


/* 
 * 下面是关于查找二叉排序树的代码
 */
	printf("\n输入要查找的值,输入0表示结束:");
	scanf("%d",&k);
	while(k!=0){
		if((result=find(tree,k))!=NULL){
			printf("找到啦,其地址为%d",(int)result); /* 返回的是指针，这里强制转换成整型 */
			printf("其值为%d\n",result->value);
		}
		else {
			printf("没有找到\n");
		}
		
		printf("\n输入要查找的值,输入0表示结束:");
		scanf("%d",&k);
	}

/*
 * 注意下面的写法有问题，当你输入k=0时　还会查找一遍 这里不删除，留着以后观摩
 */
//	do {
//		printf("\n输入要查找的值,输入0表示结束:");
//		scanf("%d",&k);
//		if((result=find(tree,k))!=NULL){
//			printf("找到啦,其地址为%d",result);
//			printf("其值为%d\n",result->value);
//		}
//		else {
//			printf("没有找到\n");
//		}
//	} while (k!=0);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
