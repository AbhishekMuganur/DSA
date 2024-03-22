#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    char name[20],srn[20];
    int rollno;
    struct node *link;
}*NODE;

NODE create_node()
{
    NODE new_node;
    new_node=(NODE)malloc(sizeof(struct node));
    if(new_node==NULL)
        printf("memory not allocated\n");
    else
    {
        printf("enter the data\n");
        scanf("%s%s%d",new_node->name,new_node->srn,&new_node->rollno);
        new_node->link=NULL;
    }
   return new_node;
}

NODE insert_front(NODE head)
{
    NODE new_node;
    new_node=create_node();
    if(head==NULL)
        head=new_node;
    else
    {
        new_node->link=head;
        head=new_node;
    }
    return head;
}

void display(NODE head)
 NODE cur;
    if(head==NULL){
        printf("list empty\n");
    }
    else
      {
        cur=head;
        while(cur!=NULL)
        {
           printf("%s%s%d\n",head->name,head->srn,head->rollno);
           cur=cur->link;
        }
    }


NODE delete_end(NODE head)
{
    NODE prev,cur;
    if(head==NULL)
        printf("list empty\n");
    else if(head->link==NULL)
    {
        printf("%s%s%d\n",head->name,head->srn,head->rollno);
        free(head);
        head=NULL;
    }
    else
    {
 prev==NULL;
        cur=head;
        while(cur->link!=NULL)
        {
            prev=cur;
            cur=cur->link;
        }
        printf("%s%s%d\n",cur->name,cur->srn,cur->rollno);
        free(cur);
        prev->link=NULL;

    }
    return head;
}

NODE delete_front(NODE head)
{
    NODE cur;
    if(head==NULL)
        printf("list empty\n");
    else if(head->link==NULL)
    {
        printf("%s%s%d",head->name,head->srn,head->rollno);
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        printf("%s%s%d",head->name,head->srn,head->rollno);
        head=head->link;
        free(cur);
    }
    return head;
}

int main()
{
    NODE head=NULL;
     int count;
while(1)
    {
        printf("enter 1.insert 2.display  3.delete_end 4.delete_front 5.exit\n");
        printf("enter your choise\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=insert_front(head);
                   printf("\ninsert end successful\n");
                   break;
            case 2:display(head);
                    break;
            case 3:head=delete_end(head);
                    break;
            case 4:head=delete_front(head);
                    break;
            /*case 5:count=count_nodes(head);
                   printf("the number of nodes are %d",count);
                   break;*/
            case 5:exit(0);
            default:printf("invalid choice\n");
                     break;
        }
    }
    return 0;

