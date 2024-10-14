#include<stdio.h>
/*
int main()
{
    int *p;
    char *ch;
    float *ft;
    double *db;

    ///its find the size of pointer)
    printf("\n size of p %u",sizeof(p));
    printf("\n size of ch %u",sizeof(ch));
    printf("\n size of ft %u",sizeof(ft));
    printf("\n size of db %u",sizeof(db));

    printf("\n ---------------------");
    ///its find the size of data type)
    printf("\n Size of p %u",sizeof(*p));
    printf("\n size of ch %u",sizeof(*ch));
    printf("\n size of ft %u",sizeof(*ft));
    printf("\n size of db %u",sizeof(*db));

    printf("\n ------------------------------");
    printf("\n int pointer %u",sizeof(int*));
    printf("\n double pointer %u",sizeof(double*));

}
*/
///==========================================================================================///
/*
int main()
{
    int x=10;
    int *p;

    p=&x;
    printf("\n Add of X :%u \t value of x:%d",&x,x);
    printf("\n Add of p :%u \t Value of p :%d",&p,p);

    printf("\n Value of x using p :%d",*p);

    return 0;
}
*/
///=======================================================================================///
/*
#include<stdio.h>
int main()
{
    int x=10;
    int *p;///pointer to int value
    int **q;///pointer to int pointer

    p=&x;
    q=&p;

    printf("\n add of x:%u \t value of x:%d",&x,x);

    printf("\n Add of p :%u \t Value of p :%u",&p,p);

    printf("\n Value of x using p(*p):%d \t address of p :%u",*p,p);

    printf("\n value of q:%u \t value of *q :%u \t value of **q(*p And x):%d",q,*q,**q);

    printf("\n add of q :%u",&q);

    return 0;

}
*/
///=================================================================================================///
///------------------how to Display array using pointer *(s+i)-------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[]={12,5,48,9,6};
    int i;
    int *s;

    s=&x[0];
    printf("\n Array Elemnt Are :-");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(s+i));
    }
    return 0;
}
*/
///======================================================================================================///
///---------How to input array And Display-------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,*p;
    printf("\n Enter 5 Array Element :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Display Array :-");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(p+i));
    }
    return 0;
}
*/
///==========================================================================================///
///--------which time malloc,calloc,realloc are used----------------------------------------///
///----------------using mallaoc-----------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int *p,i,cnt;

    printf("\n Enter the Count :-");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter %d Array Element :-",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Display Array :-");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }
    return 0;
}
*/
///=====================================================================================================///
///---------------------using calloc--------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int *p,i,cnt;

    printf("\n Enter The Count :-");
    scanf("%d",&cnt);

    p=(int*)calloc(cnt,sizeof(int));

    printf("\n Enter The Array :-");
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Display Array :-");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }
    return 0;
}
*/
///===================================================================================================///
///--------------WAP to find even no and copy its another pointer------------------------------------///
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q;
    int i,ecnt=0,cnt,j;

    printf("\n Enter Your Count :-");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter %d Array Element :-",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Array Element :-");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }

    for(i=0;i<cnt;i++)
    {
        if(*(p+i)%2==0)
        {
            ecnt++;
        }
    }

    q=(int*)calloc(ecnt,sizeof(int));

    for(i=0,j=0;i<cnt;i++)
    {
        if(*(p+i)%2==0)
        {
            *(q+j)=*(p+i);
            j++;
        }
    }

    printf("\n Array Element :-");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }

    printf("\n Copy Even Element :-");
    for(i=0;i<ecnt;i++)
    {
        printf("\t %d",*(q+i));
    }
    return 0;
}
*/
///======================================================================///
///-------Eneter the N mubers and copy to another location---------------///
/*
#include<stdio.h>
int main()
{
    int *p,*q;
    int i,j,cnt;

    printf("\n Enter The Count :-");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter %d Element:-",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    q=(int*)calloc(cnt,sizeof(int));

    for(i=0;i<cnt;i++)
    {
        *(q+i)=*(p+i);
    }

    printf("\n Display Array P :-");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }

    printf("\n Copied Array q :-");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(q+i));
    }
    return 0;
}
*/
///========================================================================///
///-------------Enter N numbers and disply prime number-------------------///
/*
#include<stdio.h>
int main()
{
    int *p,i,cnt,d,flg=0;;

    printf("\n Enter The Count :-");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter %d Number :- ",cnt);

    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Prime No Is :- \n");
    for(i=0;i<cnt;i++)
    {
        d=2;
        flg=0;
        for(d=2;d<(*(p+i)/2);d++)
        {
            if(*(p+i)%d==0)
            {
                flg=1;
                break;
            }
        }

        if(flg==0||*(p+i)==2)
        {
            printf("\n%d",*(p+i));
        }
    }

    return 0;
}
*/
///===========================================================================================///
///----------// WAP to find out total bill, discount and payable amount----------------------///
///-----------(There are N items and discount 5% till bill less than 500 otherwise 14%)------///
/*
#include<stdio.h>
int main()
{
    int i,*p,tot=0,icnt;
    float dis=0.0;

    printf("\n Enter The Items Count :-  ");
    scanf("%d",&icnt);

    p=(int*)malloc(icnt*sizeof(int));

    printf("\n Address of P :-  %u",p);

    printf("\n Enter %d Items :- ",icnt);

    for(i=0;i<icnt;i++)
    {
        scanf("%d",(p+i));
    }

    for(i=0;i<icnt;i++)
    {
        tot=tot+*(p+i);

        if(tot<500)
        {
            dis=tot*0.5;
        }
        else
        {
            dis=tot*0.14;
        }
    }
    printf("\n Total Bill :-  %d",tot);

    printf("\n Discount is :- %f",dis);

    printf("\n Payble amount Is :-  %f",(tot-dis));

    return 0;
}
*/
///========================================================================================///
///----------- Write a same program for 4 buyers----------------------------------------///
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p[4],icnt[4],i,j,tot=0;
    float dis=0.0;

    for(i=0;i<4;i++)
    {
        printf("\n Enter The Items Count Of %d Buyer :- ",i+1);
        scanf("%d",&icnt[i]);
        //printf("\n Address of %u ",icnt);

        p[i]=(int*)malloc(icnt[i]*sizeof(int));
       //printf("\n Address of p :-%u",p[i]);

        printf("\n Enter %d items :-  ",icnt[i]);
        for(j=0;j<icnt[i];j++)
        {
            scanf("%d",*(p+i)+j);
            printf(" Address of  %u \n",*(p+i)+j);
        }
    }

    for(i=0;i<4;i++)
    {
        tot=0;
        dis=0.0;
        printf("\n Buyer %d",i+1);
        for(j=0;j<icnt[i];j++)
        {
            printf("\n %d",*(*(p+i)+j));
            tot=tot+*(*(p+i)+j);
        }

        if(tot<500)
        {
            dis=(float)tot*0.05;
        }
        else
        {
            dis=(float)tot*0.14;
        }
        printf("\n Total Bill :-  %d",tot);

        printf("\n Discount is :- %f",dis);

        printf("\n Payble amount Is :-  %f",(tot-dis));
    }


    return 0;
}
*/
///========================================================================================///
///----------// 3 students and N subjects --> Array of Pointers
/*
//
//                   *p[3]                               sub[3]
//              [400][900][500]                         [5][3][2]
//
//
//    [11][22][33][44][55]          [45][56][67]              [90][100]
//            400                       900                      500
//

#include<stdio.h>
int main()
{
    int *p[3],sub[3];
    int i,j;

    for(i=0;i<3;i++)
    {
        printf("\n Enter The subjects of %d student :-  ",i+1);
        scanf("%d",&sub[i]);

        p[i]=(int*)malloc(sub[i]*sizeof(int));
        printf("\n Address of Student %u \n",p[i]);

        printf("\n Enter %d subject Marks ",sub[i]);
        for(j=0;j<sub[i];j++)
        {
            scanf("%d",*(p+i)+j);
            printf("\n Address of sub %u \n",*(p+i));
        }
    }

    printf("\n Display the Marks of Student");
    for(i=0;i<3;i++)
    {
        printf("\n %d student Marks ",i+1);
        for(j=0;j<sub[i];j++)
        {
            printf("\n %d",*(*(p+i)+j));
        }
    }
    return 0;
}
*/
///=======================================================================================================///
///--------------N students and 4 subjects --> Block Pointer---------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int (*p)[4];
    int i,j,scnt;

    printf("\n Enter The Student Count ");
    scanf("%d",&scnt);

    p=(int(*)[])malloc(scnt*4*sizeof(int));
   // printf("\n Address Of *p :- %u",*p);

    printf("\n The the Marks of %d Student in 4 Subject  ",scnt);

    for(i=0;i<scnt;i++)
    {
        for(j=0;j<4;j++)
        {
           // printf("\n Addrees of sub \n:- %u",*(p+i));
            printf("\n Student %d  ",i+1);
            scanf("%d",*(p+i)+j);
        }
    }
    printf("\n Student Details \n ");
    for(i=0;i<scnt;i++)
    {
        printf("\n Student %d",i+1);
        for(j=0;j<4;j++)
        {
            printf("\n %d",*(*(p+i)+j));
        }
    }
    return 0;
}
*/
///=======================================================================================================///
///---------- There are N student and M subjects ( M may be different for every student )----------------///
/*
#include<stdio.h>
int main()
{
    int **p,*sub;
    int i,j,stdcnt;

    printf("\n Enter The Student Count :-  ");
    scanf("%d",&stdcnt);

    p=(int**)malloc(stdcnt*sizeof(int*));
    //printf("\n Address of p %u",**p);
    sub=(int*)malloc(stdcnt*sizeof(int));

    for(i=0;i<stdcnt;i++)
    {
        printf("\n Enter The Subject count of %d student :-  ",i+1);
        scanf("%d",(sub+i));

        *(p+i)=(int*)malloc(*(sub+i)*sizeof(int));
        printf("\n Address of Sub %u",*(p+i));

        printf("\n Enter The Marks of %d subject :- ",*(sub+i));
        for(j=0;j<*(sub+i);j++)
        {
            printf("\n sub %d :",j+1);
            scanf("%d",*(p+i)+j);
        }
    }

    printf("\n Student Subject Marks");
    for(i=0;i<stdcnt;i++)
    {
        printf("\n Student %d ",i+1);
        for(j=0;j<*(sub+i);j++)
        {
            printf("%6d",*(*(p+i)+j));
        }
    }
    return 0;
}
*/
///==============================================================================================================///
///--------------// WAP to display runs scored by 3 different players in N matches
///-------------------------( N may be different for each player )----------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int *p[3],mcnt[3];
    int i,j;

    for(i=0;i<3;i++)
    {
        printf("\n Enter the matches of %d player :- ",i+1);
        scanf("%d",&mcnt[i]);

        p[i]=(int*)malloc(mcnt[i]*sizeof(int));

        printf("\n Enter the %d match score :- ",mcnt[i]);
        for(j=0;j<mcnt[i];j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
    printf("\n Disply the matches score:- \n");
    for(i=0;i<3;i++)
    {
       printf("\n matches scores of %d player :- ",i+1);
       for(j=0;j<mcnt[i];j++)
       {
           printf("\n %d",*(*(p+i)+j));
       }
    }
    return 0;

}
*/
///=====================================================================================================///
///-------------2.Write a C program to add two numbers using pointers.--------------------------------///
/*
#include<stdio.h>
int main()
{
    int *p,i,a=0;
    printf("\n Enter Any Two No :-  ");
    for(i=0;i<2;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<2;i++)
    {
        a=a+*(p+i);
    }
    printf("\n Sum of Two No is :- %d",a);
    return 0;
}
*/
///=================================================================================================///
///-------------4. Write a C program to input and print array elements using pointer.--------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i;
    int *p;
    p=&x;
    printf("\n Enter The Array Element :-  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Display The Array Element :- ");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(p+i));
    }
    return 0;
}
*/
///==================================================================================================///
///-----------5.Write a C program to copy one array to another using pointers.---------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],k[5],i;
    int *p,*q;
    p=x;
    q=k;
    printf("\n Enter The Array Element :-  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    ///processs
    for(i=0;i<5;i++)
    {
        *(q+i)=*(p+i);
    }
    printf("\n Origanl Array Is :-  ");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(p+i));
    }
    printf("\n Copy Array Element using Pointer :- ");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(q+i));
    }
    return 0;
}
*/
///====================================================================================================///
///-------------6.Write a C program to swap two arrays using pointers.--------------------------------///
/*
#include<stdio.h>
int main()
{
    int *p,*q,x[5],y[5];
    int i,cnt=0,temp;
    p=&x;
    q=&y;

    printf("\n Enter The First Array Element :-  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Enter The Second Array Element :-  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",(q+i));
    }
    printf("\n Orignal First Array :- ");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(p+i));
    }
    printf("\n Orignal Second Array :- ");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(q+i));
    }
    for(i=0;i<5;i++)
    {
        temp=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=temp;

    }
    printf("\n Swap Array 1 :- ");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(p+i));
    }
    printf("\n Swap Array 2 :- ");
    for(i=0;i<5;i++)
    {
        printf("\t %d",*(q+i));
    }
    return 0;
}
*/
///======================================================================================================///
///--------------7. Write a C program to reverse an array using pointers.-------------------------------///
/*
#include<stdio.h>
int main()
{
    int *p;
    int i,cnt;
    printf("\n Enter Your Count :- ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter The %d Array Element :- ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Origanal Array :- ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }
    printf("\n Reverse Array :- ");
    for(i=(cnt-1);i>=0;i--)
    {
        printf("\t %d",*(p+i));
    }
    return 0;
}
*/
///===============================================================================================///
///----------------8. Write a C program to search an element in array using pointers.------------///
/*
#include<stdio.h>
int main()
{
    int *p,i,cnt,no,pos,flg;

    printf("\n Enter Your COunt :- ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter %d Array Elemnt :- ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Enter The Element you Want to be Search :- ");
    scanf("%d",&no);

    for(i=0;i<cnt;i++)
    {
        flg=0;
        if(*(p+i)==no)
        {
            pos=i;
            flg=1;
            break;
        }
    }
    if(flg==1)
    {
        printf("\n %d is presnet at %d position in array  ",*(p+i),i+1);
    }
    else
    {
        printf("\n %d Element Not Present in Array ",*(p+i));
    }
    return 0;
}
*/
///============================================================================================///
///------------10.Write a C program to add two matrix using pointers.-------------------------///
/*
#include<stdio.h>
int main()
{
    int *p,*q,*s;
    int x[3][3],y[3][3],z[3][3];
    int i,j,cnt;

    printf("\n Enter The Count of Row :- ");
    scanf("%d",&cnt);



}
*/
///==========================================================================================///
///----------12.Write a C program to find length of string using pointers.------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],i,cnt,*ptr;

    ptr=&str;

    printf("\n Enter The string :- ");
    gets(ptr);

    for(i=0;ptr[i]!='\0';i++)
    {
         if(ptr[i]!=32)
         {
             cnt++;
         }
    }
    printf("\n The lenght of Given String is %d ",cnt);
    return 0;
}
*/
///========================================================================================================///
///----------------13.Write a C program to copy one string to another using pointers.---------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],sd[50];
    char *ptr;
    int i;

    ptr=&str;

    printf("\n Enter Your String :- ");
    gets(ptr);
    printf("\n oringnal String :- ");
    puts(ptr);

    for(i=0;ptr[i]!='\0';i++)
    {
        *(sd+i)=*(ptr+i);
    }

    printf("\n copy string using pointer :- ");
    puts(sd);
    return 0;
}
*/
///==========================================================================================================///
///-------------------14.Write a C program to concatenate two strings using pointers.-----------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],sd[50];
    char *ptr,*qtr;
    int i,j;

    ptr=&str;
    qtr=&sd;

    printf("\n Enter The First String :- ");
    gets(ptr);

    printf("\n Enter the Second String :- ");
    gets(qtr);

    printf("\n orignal First String :- ");
    puts(ptr);

    printf("\n orignal second String :- ");
    puts(qtr);

    for(i=0;ptr[i]!='\0';i++);
    for(j=0;qtr[j]!='\0';j++)
    {
        *(ptr+i)=*(qtr+j);
        i++;
    }

    printf("\n Concantenate String is :- ");
    puts(ptr);

    return 0;
}
*/
///===============================================================================================///
///------------------15.Write a C program to compare two strings using pointers.-----------------///
/*
#include<stdio.h>
int main()
{
    char str[50],sd[50];
    char *ptr,*qtr;
    int i,j,l1,l2,flg=0;
    ptr=&str;
    qtr=&sd;

    printf("\n Enter First String :- ");
    gets(ptr);

    printf("\n Enter Second String :- ");
    gets(qtr);

    for(l1=0;ptr[l1]!='\0';l1++);

    for(l2=0;qtr[l2]!='\0';l2++);

    if(l1==l2)
    {
        for(i=0;i<l2;i++)
        {
            if(ptr[i]!=qtr[i])
            {
                flg=1;
                break;
            }
        }
    }
    else
    {
        flg=1;
    }
    if(flg==0)
    {
        printf("\n It is matching String");
    }
    else
    {
        printf("\n It is not matching string ");
    }
    return 0;
}
*/
///===========================================================================================================///
///--------------------Write a C program to find reverse of a string using pointers--------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    char *ptr;
    int i,j,temp;

    ptr=&str;

    printf("\n Enter Your String :- ");
    gets(ptr);

    printf("\n Orignal String :-");
    puts(ptr);

    for(i=0;ptr[i]!='\0';i++);
    for(i--,j=0;j<=i;i--,j++)
    {
        temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
    }
    printf("\n Reverse String is :- ");
    puts(ptr);
    return 0;
}
*/
///===================================================================================================///
///-------------17.Write a C program to sort array using pointers.-----------------------------------///
/*
#include<stdio.h>
int main()
{
    int *p,i,j,temp,cnt=0;

    printf("\n Enter Your Count :- ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter %d Array Element :- ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Orignal Array is :- ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }

    for(i=0;i<cnt;i++)
    {
        for(j=0;j<cnt;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    printf("\n Sortes Array Using Pointer :- ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }
    return 0;
}
*/
///============================================================================================================///
///----------------------arithmatic of array----------------------------------------------------------

#include<stdio.h>
int main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("\t%d",p);
    q=a+3;
    printf("\t===%d",q);
    printf("\n %d %d %d",(*p)++,(*p)++,*(++p));
    printf("\n %d",*p);
    printf("\n %d",(*p)++);
    printf("\n %d",(*p)++);
    q--;
    printf("\n %d",(*(q+2))--);
   // printf("\n ==== %d",*);
    printf("\n=== %d",*q);
    printf("\n %d",*(p+2)-2);

    printf("\n %d",*(p++ -2)-1);
    printf("\n---  %d",*p);
    return 0;
}

///================================================================================================///
///--------------arithmatic of string-----------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[]="welcome to saurabh upashe";
    char *ptr;
    ptr=str;

    printf("\n %c",*ptr);
    printf("\n %c",*(++ptr +2));
    printf("\n %c",*((--ptr +8)+3)+2);
    printf("\n %c",*(++ptr +10)-32);
    printf("\t %c %c %c ",*++ptr,*ptr++,*--ptr);
    return 0;
}
*/
///==================================void [pointer]=============================///
/*
#include <stdio.h>
int main( )
{
    void *p = NULL; 	//void pointer
    int x=10;
    double db=34.45;

    printf("The size of pointer is:%d\n",sizeof(p));

    p=&x;
    printf("\n value of x is: %d",*(int*)p);

    p=&db;
    printf("\n value of db is: %lf",*(double*)p);
    return 0;
}
/*
int main( )
{
    int *p,cnt,i;

	printf("\n Enter the element count: ");
	scanf("%d",&cnt);

	p=(int*)malloc(cnt*sizeof(int));      // allocates the memory for pointer

	printf("\n Enter the %d Nos: ",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",(p+i));
	}

	printf("\n Elements are: ");
	for(i=0;i<cnt;i++)
	{
		printf("%5d",*(p+i));
	}
    free(p);    // Releases the allocated location,
                // After the releasing pointer becomes the Dangling pointer.
	return 0;
}
*/





