
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

	for (i = 0; i < N; i++) {
		insert(&tree,a[i]);
	}

	inOrderTraverse(tree);


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
