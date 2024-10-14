#include<stdio.h>
/*
struct Student
{
    int id;
    float per;
    int rno;
    struct Student *next;
};
int main()
{
    struct Student *start=NULL,*last,*tmp;

    int opt;

    while(1)
    {
        printf("\n ***Menu*** ");
        printf("\n 1.Input \t 2.Output \t 3.Stop");
        printf("\n Enter Your Option :- ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            tmp=(struct Student*)malloc(sizeof(struct Student));
            printf("\n Enter the Id ,Persentage and Roll No ");
            scanf("%d %f %d",&tmp->id,&tmp->per,&tmp->rno);
            tmp->next=NULL;

            if(start==NULL)
            {
                start=tmp;
                last=tmp;
            }
            else
            {
                last->next=tmp;
                last=tmp;
            }
            break;

        case 2:
            tmp=start;
            while(tmp)
            {
                printf("\n %d %f %d",tmp->id,tmp->per,tmp->rno);
                tmp=tmp->next;
            }
            break;
        case 3:
            exit(0);

        }
    }
}
*/
///============================================================================================///
///-----------------------using Push and Pop--------------------------------------------------///
/*
#include<stdio.h>
struct Student
{
    int id;
    float per;
    struct Student *next;
};
int main()
{
    struct Student *start=NULL,*last,*tmp;
    int opt;

    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Push\t 2.Pop\t 3.Stop");
        printf("\n Enter Your Option :- ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            tmp=(struct Student*)malloc(sizeof(struct Student));
            printf("\n Enter Id And percentage:- ");
            scanf("%d %f",&tmp->id,&tmp->per);
            tmp->next=NULL;

            if(start==NULL)
            {
                start=tmp;
                last=tmp;
            }
            else
            {
                last->next=tmp;
                last=tmp;
            }
            break;
        case 2:
            tmp=start;
            if(start==NULL)
            {
                printf("\n Stack is empty !!!!!!!!!!!!!");
            }
            else if(tmp->next==NULL)
            {
                start=NULL;
                printf("\n %d and %f is poped ",last->id,last->per);
            }
            else
            {
                while(tmp->next!=last)
                {
                    tmp=tmp->next;
                }
                tmp->next=NULL;
                printf("\n %d and %f is poped ",last->id,last->per);
                free(last);
                last=tmp;
            }
            break;
        case 3:
            exit(0);
        }

    }
}
*/
///=====================================================================================================///
///----------Doubly Linked list------------------------------------------------------------------------///
/*
#include<stdio.h>
struct Student
{
    int data;
    struct Student *prv;
    struct Student *next;
};
int main()
{
    struct Student *start=NULL,*last,*tmp;
    int opt;

    while(1)
    {
        printf("\n 1.Insert\t 2.Display\t 3.Stop");
        printf("\n Enter Your Option:- ");
        scanf("%d",&opt);

        switch(opt)
        {
         case 1:

            tmp=(struct Student*)malloc(sizeof(struct Student));
            printf("\n Enter The data :- ");
            scanf("%d",&tmp->data);
            tmp->next=NULL;
            tmp->prv=NULL;

            if(start==NULL)
            {
                start=tmp;
                last=tmp;
            }
            else
            {
                last->next=tmp;
                tmp->prv=last;
                last=tmp;
            }
            break;

         case 2:
            tmp=start;
            printf("\n Forword Direction :- ");
            while(tmp)
            {
                printf("\n %d",tmp->data);
                tmp=tmp->next;
            }

            tmp=last;
            printf("\n Rev Direction :- ");
            while(tmp)
            {
                printf("\n %d",tmp->data);
                tmp=tmp->prv;
            }
            break;
         case 3:
            exit(0);
        }
    }

}
*/
///=========================================================================================///
///-------------singly Circular list-------------------------------------------------------///
/*
#include<stdio.h>
struct Student
{
    int data;
    struct Student *next;
};
int main()
{
    struct Student *start=NULL,*last,*tmp;
    int opt,cnt=0;

    while(1)
    {
        printf("\n 1.Insert\t 2.Display\t 3.Stop");
        printf("\n Enter Your Option:- ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            tmp=(struct Student*)malloc(sizeof(struct Student));
            printf("\n Enter The Data :- ");
            scanf("%d",&tmp->data);
            tmp->next=start;

            if(start==NULL)
            {
                start=NULL;
                last=NULL;
            }
            else
            {
                last->next=tmp;
                last=tmp;
                tmp->next=start;
            }
            cnt++;
            break;
        case 2:
            tmp=start;
            int i=0;
            while(i<cnt)
            {
               printf("\n %d",tmp->data);
               tmp=tmp->next;
               i++;
            }
            break;
        case 3:
            exit(0);

        }
    }
}
*/
///====================================================================================================///
///---------------doubly linked list-----------------------------------------------------------------////
/*
#include<stdio.h>
struct Student
{
    int data;
    struct Student *prv;
    struct Student *next;
};
int main()
{
    struct Student *start=NULL,*last=NULL,*temp;
    int opt;
    while(1)
    {
        printf("\n ***menu*** ");
        printf("\n 1.Insert\t 2.display\t 3.stop");
        printf("\n Enter Your option :- ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
            temp=(struct Student*)malloc(sizeof(struct Student));
            printf("\n Enter Yor Data :- ");
            scanf("%d",&temp->data);
            temp->next=start;
            temp->prv=last;

            if(start==NULL)
            {
                start=temp;
                last=temp;
                temp->next=start;
                temp->prv=last;
            }
            else
            {
                last->next=temp;
                temp->prv=last;
                last=temp;
                start->prv=last;
            }
            break;
        case 2:
            temp=start;
            printf("\n Forword Direction :- ");
            while(temp)
            {
                printf("\n %d",temp->data);
                temp=temp->next;
            }

            temp=last;
            printf("\n Rev Direction :- ");
            while(temp)
            {
                 printf("\n %d",temp->data);
                 temp=temp->prv;
            }
            break;
        case 3:
            exit(0);
        }
    }
}
*/





























