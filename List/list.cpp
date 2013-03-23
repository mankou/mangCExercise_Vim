/* 功能：实现单链表的插入　直接插入排序　反转　输出功能
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
 *功能：主调函数
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


	puts("排序示例");
	head=sortList(head);
	print(head);


	puts("\n\n使用方法1进行插入操作示例(通过函数返回root结点)");
	printf("请输入要插入的值,0表示结束:");
	scanf("%d",&x);
	while(x)
	{
		head=insert1(head,x);
		print(head);
		printf("请输入要插入的值,0表示结束:");
		scanf("%d",&x);
	}

	puts("\n\n使用方法2进行插入操作示例(传递指针的指针来修改root，但需要判断是否插在第一个结点之前)");
	printf("请输入要插入的值,0表示结束:");
	scanf("%d",&x);
	while(x)
	{
		insert2(&head,x);
		print(head);
		printf("请输入要插入的值,0表示结束:");
		scanf("%d",&x);
	}

	puts("\n\n使用方法3进行插入操作示例(传递指针的指针来修改root，不需要判断是否插在第一个结点之前)");
	printf("请输入要插入的值,0表示结束:");
	scanf("%d",&x);
	while(x)
	{
		insert3(&head,x);
		print(head);
		printf("请输入要插入的值,0表示结束:");
		scanf("%d",&x);
	}


	puts("\n\n单链表转置示例");
	printf("逆置后\n");
	head=inverse(head);
	print(head);

}
/* 
 * 功能：创建单链表，根据提示进行输入
 */
Node * create(Node * head)
{
	Node * p=head,*current;
	int x;                                      /* 临时变量，用于输入 */
	printf("目前正在创建链表，请输入x的值，0表示结束");
	scanf("%d",&x);
	while(x)
	{
		current=(Node *)malloc(sizeof(Node));
		if (current!=NULL)                      /* 判断是否创建结点成功，若成功进行赋值操作 */
		{
			current->value=x;
			current->next=NULL;
/*
 * 插入操作
 */
			if(head==NULL){p=head=current;}     /* 插在头结点之前 */
			else {p->next=current;p=current;}   /* 一般的插入 */
		
		}
		else 
		{
			printf("申请出错");
		}
	printf("目前正在创建链表，请输入x的值，0表示结束");
	scanf("%d",&x);
	
	}

	return head;


}


/* 
 * 功能：输出单链表
 */
void print(Node * head)
{
	Node * p=head;
	if(p==NULL) {printf("链表为空") ; return;}
	while(p)
	{
		printf("%d->",p->value);
		p=p->next;
	
	}
	printf("NULL\n");

}

/* 
 * 功能：反转单链表。如1->2->3　将变成3->2->1
 */
Node * inverse(Node * head)
{
	Node * p1,*p2,*p3;
/* 
 * 链表为空或者只有一个结点的情况
 */
	if(head==NULL||head->next==NULL) return head; 

	p1=head;p2=p1->next;p3=p2;

	p1->next=NULL;                              /* 这里很重要，使第一个结点指向NULL,否则反转后的链表最后一个结点不指向空 */
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
 * 功能：插入。这里用函数返回值返回头结点
 */
Node * insert1(Node * head, int  value )
{
	
	Node * previous,*current,*newNode;
	previous =NULL; current=head;

/* 	
 * 找要插入的位置
 */
	while(current!=NULL && current->value<value)
	{
		previous=current;
		current=current->next;
	}
/* 
 * 新建结点并赋值
 */
	newNode=(Node *)malloc(sizeof(Node));
	if(newNode!=NULL)
	{
		newNode->value=value;
		newNode->next=current;
	}
	else
	{
		printf("申请结点出现错误");
	
	}
	
/* 
 * 插入
 */
	if(previous==NULL)                          /* 插入位置在头部的情况 */
		head=newNode;
	else                                        /* 插入位置不在头部的情况。即在中间和尾部的情况，这两种情况代码一致 */
	{
		previous->next=newNode;
		
	}
	
	return head;

}

/* 
 * 功能：插入。但通过传递指针的指针来完成，对根结点的修改。不需要返回值
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
		printf("申请结点出现错误");
	}

/* 
 * 插入
 */
	if(previous==NULL)                          /* 插入位置在头部的情况 */
		*headp=newNode;
	else                                        /* 插入位置不在头部的情况。包括在中间和尾部，但这两种情况代码一致 */
	{
		previous->next=newNode;
	}


}

/* 
 * 功能：插入。通过传递指针的指针来修改根。但这里不需要判断插入位置是否在头部就可完成。
 * 说明：其基本思想来自于　《c和指针》243页
 */
void insert3(Node **headp,int value)
{
	Node **previous,*current,*newNode;
	previous=headp;                             /* 注意这里previous是指针的指针 */
	current=*headp;
	
/* 	
 * 找要插入的位置
 */
	while(current!=NULL && current->value<value)
	{
		previous=&current->next;                /* 注意这里previous是指针的指针 */
		current=current->next;
	}
/* 
 * 新建结点
 */
	newNode=(Node *)malloc(sizeof(Node));
	if(newNode!=NULL)
	{
		newNode->value=value;
		newNode->next=current;
	}
	else
	{
		printf("申请结点出现错误");
	}
	
/* 
 * 直接插入不需要判断插入位置是否在头部
 */
	*previous=newNode;
		

}
/* 
 * 功能：对单链表排序。按由大到小的顺序。采用直接插入法排序
 * 基本思想：先当成一个结点，然后按照insert2()函数的思想一个一个插入。只是这里不需要新建结点了。
 */
Node * sortList(Node *head)
{
	Node *previous,*p,*rest,*current;
	rest=head->next;
	head->next=NULL;                            /* 先拿出一个结点自成一个链表，这是有一个结点的有序链表，以后每一次拿出一个结点插入到这个链表的合适位置即可 */

	while(rest!=NULL)
	{
		p=head;
		current=rest;rest=rest->next;
		previous=NULL;
/* 
 * 找插入位置
 */
		while(p!=NULL && p->value<current->value)
		{
			previous=p;
			p=p->next;		
		}
		
			if(previous==NULL)                  /* 插入位置在部部的情况 */
			{
				head=current;
				current->next=p;			
			}
			else                                /* 插入位置不在头部的情况 */
			{
				previous->next=current;
				current->next=p;
			
			}
	
	}

	return head;
}
