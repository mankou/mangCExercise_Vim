#include <stdlib.h>
#include <stdio.h>
#include "binaryTree.h"                         /* �����˹��ڶ���������ԭ�͵Ľӿ� */
#define N 6
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  ������������ʾ����������
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
	BinaryTree *tree=NULL;                      /*�½�һ��ָ�������������ָ��  */
	BinaryTree *result=NULL;

/*
 * ����������������в�����
 */
	for (i = 0; i < N; i++) {
		insert(&tree,a[i]);                     /* ע���һ��ʵ����&tree ��ָ���ָ�����ָ����������ڴ浥Ԫ�ĵ�ַ */
	}
	printf("�����������������\n");
	inOrderTraverse(tree);                      /* �������������������� */


/* 
 * �����ǹ��ڲ��Ҷ����������Ĵ���
 */
	printf("\n����Ҫ���ҵ�ֵ,����0��ʾ����:");
	scanf("%d",&k);
	while(k!=0){
		if((result=find(tree,k))!=NULL){
			printf("�ҵ���,���ַΪ%d",(int)result); /* ���ص���ָ�룬����ǿ��ת�������� */
			printf("��ֵΪ%d\n",result->value);
		}
		else {
			printf("û���ҵ�\n");
		}
		
		printf("\n����Ҫ���ҵ�ֵ,����0��ʾ����:");
		scanf("%d",&k);
	}

/*
 * ע�������д�������⣬��������k=0ʱ���������һ�� ���ﲻɾ���������Ժ��Ħ
 */
//	do {
//		printf("\n����Ҫ���ҵ�ֵ,����0��ʾ����:");
//		scanf("%d",&k);
//		if((result=find(tree,k))!=NULL){
//			printf("�ҵ���,���ַΪ%d",result);
//			printf("��ֵΪ%d\n",result->value);
//		}
//		else {
//			printf("û���ҵ�\n");
//		}
//	} while (k!=0);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
