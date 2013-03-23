/* ���ܣ�ʵ�ֵ�����Ĳ��롡ֱ�Ӳ������򡡷�ת���������
 * Author:mang
 * create:15:20 2012-10-18
 * last modify:15:21 2012-10-18
 * version:1.0
 */
#include <stdio.h>
#include <malloc.h>

typedef struct node{
	int value;
	struct node *next;
}Node;
/* 
 *
 *���ܣ���������
 */
main()
{
	Node * create(Node * head);
	void print(Node * head);
	Node * inverse(Node * head);
	Node * insert1(Node * head, int  value );
	void insert2(Node **head, int value);
	void insert3(Node **head, int value);
	Node* sortList(Node *head);

	Node * head=NULL;
	int x;

	
	head=create(head);
	print(head);


	puts("����ʾ��");
	head=sortList(head);
	print(head);


	puts("\n\nʹ�÷���1���в������ʾ��(ͨ����������root���)");
	printf("������Ҫ�����ֵ,0��ʾ����:");
	scanf("%d",&x);
	while(x)
	{
		head=insert1(head,x);
		print(head);
		printf("������Ҫ�����ֵ,0��ʾ����:");
		scanf("%d",&x);
	}

	puts("\n\nʹ�÷���2���в������ʾ��(����ָ���ָ�����޸�root������Ҫ�ж��Ƿ���ڵ�һ�����֮ǰ)");
	printf("������Ҫ�����ֵ,0��ʾ����:");
	scanf("%d",&x);
	while(x)
	{
		insert2(&head,x);
		print(head);
		printf("������Ҫ�����ֵ,0��ʾ����:");
		scanf("%d",&x);
	}

	puts("\n\nʹ�÷���3���в������ʾ��(����ָ���ָ�����޸�root������Ҫ�ж��Ƿ���ڵ�һ�����֮ǰ)");
	printf("������Ҫ�����ֵ,0��ʾ����:");
	scanf("%d",&x);
	while(x)
	{
		insert3(&head,x);
		print(head);
		printf("������Ҫ�����ֵ,0��ʾ����:");
		scanf("%d",&x);
	}


	puts("\n\n������ת��ʾ��");
	printf("���ú�\n");
	head=inverse(head);
	print(head);

}
/* 
 * ���ܣ�����������������ʾ��������
 */
Node * create(Node * head)
{
	Node * p=head,*current;
	int x;                                      /* ��ʱ�������������� */
	printf("Ŀǰ���ڴ�������������x��ֵ��0��ʾ����");
	scanf("%d",&x);
	while(x)
	{
		current=(Node *)malloc(sizeof(Node));
		if (current!=NULL)                      /* �ж��Ƿ񴴽����ɹ������ɹ����и�ֵ���� */
		{
			current->value=x;
			current->next=NULL;
/*
 * �������
 */
			if(head==NULL){p=head=current;}     /* ����ͷ���֮ǰ */
			else {p->next=current;p=current;}   /* һ��Ĳ��� */
		
		}
		else 
		{
			printf("�������");
		}
	printf("Ŀǰ���ڴ�������������x��ֵ��0��ʾ����");
	scanf("%d",&x);
	
	}

	return head;


}


/* 
 * ���ܣ����������
 */
void print(Node * head)
{
	Node * p=head;
	if(p==NULL) {printf("����Ϊ��") ; return;}
	while(p)
	{
		printf("%d->",p->value);
		p=p->next;
	
	}
	printf("NULL\n");

}

/* 
 * ���ܣ���ת��������1->2->3�������3->2->1
 */
Node * inverse(Node * head)
{
	Node * p1,*p2,*p3;
/* 
 * ����Ϊ�ջ���ֻ��һ���������
 */
	if(head==NULL||head->next==NULL) return head; 

	p1=head;p2=p1->next;p3=p2;

	p1->next=NULL;                              /* �������Ҫ��ʹ��һ�����ָ��NULL,����ת����������һ����㲻ָ��� */
	while(p3)
	{
		p3=p3->next;
		p2->next=p1;
		p1=p2;
		p2=p3;	
	}
	return p1;

}
/*
 * ���ܣ����롣�����ú�������ֵ����ͷ���
 */
Node * insert1(Node * head, int  value )
{
	
	Node * previous,*current,*newNode;
	previous =NULL; current=head;

/* 	
 * ��Ҫ�����λ��
 */
	while(current!=NULL && current->value<value)
	{
		previous=current;
		current=current->next;
	}
/* 
 * �½���㲢��ֵ
 */
	newNode=(Node *)malloc(sizeof(Node));
	if(newNode!=NULL)
	{
		newNode->value=value;
		newNode->next=current;
	}
	else
	{
		printf("��������ִ���");
	
	}
	
/* 
 * ����
 */
	if(previous==NULL)                          /* ����λ����ͷ������� */
		head=newNode;
	else                                        /* ����λ�ò���ͷ��������������м��β����������������������һ�� */
	{
		previous->next=newNode;
		
	}
	
	return head;

}

/* 
 * ���ܣ����롣��ͨ������ָ���ָ������ɣ��Ը������޸ġ�����Ҫ����ֵ
 */
void insert2(Node **headp, int value)
{
	Node * previous,*current,*newNode;
	previous=NULL;current=*headp;

	while(current!=NULL && current->value<value)
	{
		previous=current;
		current=current->next;
	}

	newNode=(Node *)malloc(sizeof(Node));
	if(newNode!=NULL)
	{
		newNode->value=value;
		newNode->next=current;
	}
	else
	{
		printf("��������ִ���");
	}

/* 
 * ����
 */
	if(previous==NULL)                          /* ����λ����ͷ������� */
		*headp=newNode;
	else                                        /* ����λ�ò���ͷ����������������м��β�������������������һ�� */
	{
		previous->next=newNode;
	}


}

/* 
 * ���ܣ����롣ͨ������ָ���ָ�����޸ĸ��������ﲻ��Ҫ�жϲ���λ���Ƿ���ͷ���Ϳ���ɡ�
 * ˵���������˼�������ڡ���c��ָ�롷243ҳ
 */
void insert3(Node **headp,int value)
{
	Node **previous,*current,*newNode;
	previous=headp;                             /* ע������previous��ָ���ָ�� */
	current=*headp;
	
/* 	
 * ��Ҫ�����λ��
 */
	while(current!=NULL && current->value<value)
	{
		previous=&current->next;                /* ע������previous��ָ���ָ�� */
		current=current->next;
	}
/* 
 * �½����
 */
	newNode=(Node *)malloc(sizeof(Node));
	if(newNode!=NULL)
	{
		newNode->value=value;
		newNode->next=current;
	}
	else
	{
		printf("��������ִ���");
	}
	
/* 
 * ֱ�Ӳ��벻��Ҫ�жϲ���λ���Ƿ���ͷ��
 */
	*previous=newNode;
		

}
/* 
 * ���ܣ��Ե��������򡣰��ɴ�С��˳�򡣲���ֱ�Ӳ��뷨����
 * ����˼�룺�ȵ���һ����㣬Ȼ����insert2()������˼��һ��һ�����롣ֻ�����ﲻ��Ҫ�½�����ˡ�
 */
Node * sortList(Node *head)
{
	Node *previous,*p,*rest,*current;
	rest=head->next;
	head->next=NULL;                            /* ���ó�һ������Գ�һ������������һ���������������Ժ�ÿһ���ó�һ�������뵽�������ĺ���λ�ü��� */

	while(rest!=NULL)
	{
		p=head;
		current=rest;rest=rest->next;
		previous=NULL;
/* 
 * �Ҳ���λ��
 */
		while(p!=NULL && p->value<current->value)
		{
			previous=p;
			p=p->next;		
		}
		
			if(previous==NULL)                  /* ����λ���ڲ�������� */
			{
				head=current;
				current->next=p;			
			}
			else                                /* ����λ�ò���ͷ������� */
			{
				previous->next=current;
				current->next=p;
			
			}
	
	}

	return head;
}
