#include <stdlib.h>
#include <stdio.h>
#include "binaryTree.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert
 *  Description:������������в���Ԫ�ء������������ʽ��ʾ��㣬�������ﲻ��Ԫ�ظ��������ơ�  
 *  Parameter: BinaryTree **current
 *             TREE_TYPE value  Ҫ�����ֵ������TREE_TYPE��binaryTree.h��defineΪint
 *  Create:15:05 2012-8-14
 *  Lastmodify:15:05 2012-8-14
 *  Author: 	��mang
 *  Version:    ��1.0
 * =====================================================================================
 */
	void
insert (BinaryTree **current,TREE_TYPE value)
{
/* ע�⣺����ΪʲôҪ�á�**current����Ϊ���Ǹı����ָ�������ֵ�����Դ��ݵı�����ָ���ָ�롣�������������������Ҫ�ı�ָ�������ֵ�����Դ��ݵ���ָ�롣
 * ��ʾ�����Ҫ�ں����иı�ָ�롡�����ַ�������һ�֣������β���ָ���ָ�롣�ڶ��֡���������ָ�롣
 */
/* 	
 * ��������Ϊ�գ����½����
 * �������value>�����->value����Ѹ�ֵ������������
 * �������value<�����->value ��Ѹ�ֵ������������
 */
	if (*current==NULL) {
		*current=(BinaryTree*)malloc(sizeof(BinaryTree));
		if((*current)!=NULL){
			(*current)->value=value;
			(*current)->left=NULL;
			(*current)->right=NULL;
		}
		else {
			printf("�½�������\n");
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
 *  Description:  ���������
 *  Parameter:��BinaryTree *root ָ������������ĸ����
 *  Create:15:11 2012-8-14
 *  Lastmodify:15:11 2012-8-14
 *  Author: 	��mang
 *  Version:    ��1.0
 * =====================================================================================
 */
	void
inOrderTraverse ( BinaryTree * root)
{

/*
 * ��������Ϊ��ʲôҲ����
 * ����
 * 	�����������������
 * 	�������������ֵ
 * 	�����������������
 * ע���еĵط�������д�ģ�Ҳ�ǶԵģ���û�д�������Ϊ�յ����
 * ������������������������������
 * �������������ֵ
 * 	 ��������������������������������
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
 *  Author: 	��mang
 *  Version:    ��1.0
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
