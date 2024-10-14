#include <stdio.h>
/*
#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5;
    printf("\n Enter The marks:-");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m4);

    printf("\n M1 mark is %f",m1);

    printf("\n M2 mark is %f",m2);

    printf("\n M3 mark is %f",m3);

    printf("\n M4 mark is %f",m4);

    printf("\n M5 mark is %f",m5);

}
*/
///=====================(not using loop)==========================================================///
/*
#include<stdio.h>
int main()
{
    float mrk[5];
    printf("\n Enter The Marks :-");
    scanf("%f",&mrk[0]);
    scanf("%f",&mrk[1]);
    scanf("%f",&mrk[2]);
    scanf("%f",&mrk[3]);
    scanf("%f",&mrk[4]);

    printf("***Display The Mark***");

    printf("\n M1 marks is %f",mrk[0]);

    printf("\n M2 marks is %f",mrk[1]);

    printf("\n M3 marks is %f",mrk[2]);

    printf("\n M4 marks is %f",mrk[3]);

    printf("\n M5 marks is %f",mrk[4]);
}
*/
///=========================(using Loop)=================================================///
/*
#include<stdio.h>
int main()
{
    float m[5];
    int i;
    printf("\n Enter The 5 Sub marks :-");
    for(i=0;i<5;i++)
    {
        scanf("%f",&m[i]);
    }
    printf("\n Display Marks");
    for(i=0;i<5;i++)
    {
        printf("\n Marks is %f",m[i]);
    }
    return 0;
}
*/
///================================================================================///
/*
#include<stdio.h>
int main()
{
    int x[5]={96,65,45,98,65},i;

    printf("\n The Value is ");
    for(i=0;i<5;i++)
    {
        printf("\n %d",x[i]);
    }
    return 0;
}
*/
///=========================================================================///
/*
#include<stdio.h>
int main()
{
    int x[]={100,56,89,45,65},i;
    printf("\n Display the value");
    for(i=0;i<5;i++)
    {
        printf("\n %d",x[i]);
    }
    return 0;
}
*/
///=================================================================================///
/*
#include<stdio.h>
int main()
{
    int x[10],i,ecnt=0,ocnt=0;
    printf("\n Enter Any 10 Nos:- ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Even No in Array");
    for(i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            printf("\n %d",x[i]);
            ecnt++;
        }
    }
    printf("\n Odd no In array ");
    for(i=0;i<10;i++)
    {
        if(x[i]%2!=0)
        {
            printf("\n %d",x[i]);
            ocnt++;
        }
    }
     printf("\n even count is %d",ecnt);
     printf("\n odd  count is %d",ocnt);
    return 0;
}
*/
///============================================================================///
///------------check the prime no using array---------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,flg,d,no;
    printf("\n Enter any 5 Nos");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        //no=x[i];//
        d=2;
        flg=0;
        for(d=2;d<=(x[i]/2);d++)
        {
           if(x[i]%d==0)
          {
            flg=1;
            break;
          }
        }
        if(flg==0&& x[i]!=1)
        {
           printf("\n %d is prime no",no);
        }
        else
        {
            printf("\n %d is not prime",no);
        }
    }
    return 0;
}
*/
///==============================================================================================================///
///-------------find the frequency of each digit using array-----------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[6],i,dg,cnt=0,rem,temp;
    printf("\n Enter Any 6 nos");
    for(i=0;i<6;i++)
    {
        scanf("%d",&x[i]);
    }
    //temp=x[i];
    for(i=0;i<6;i++)
    {
        //x[i]=temp;
        dg=0;
        cnt=0;
        while(dg<=9)
        {
            while(x[i]!=0)
            {
                rem=x[i]%10;
                if(rem==dg)
                {
                    cnt++;
                }
                x[i]=x[i]/10;
            }
            dg++;
        }
        if(cnt>=1)
        {
            printf("frequeny of %d is %d",x[i],cnt);
        }
    }
    return 0;
}
*/
///=================================================================================================================///
///-------------------check numbers is armstrong or not------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,j,cnt=0,tmp,rem,sum=0,a=1;
    printf("\n Enter any 5 no :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        tmp=x[i];
        sum=0;
        for(cnt=0;x[i]!=0;cnt++,x[i]=x[i]/10);

        x[i]=tmp;
        while(x[i]!=0)
        {
            a=1;
            rem=x[i]%10;
            for(j=1;j<=cnt;j++)
            {
                a=a*rem;
            }
            sum=sum+a;
            x[i]=x[i]/10;
        }
        tmp=x[i];
        if(sum==x[i])
        {
            printf("%d is armstrong ",tmp);
        }
    }
    return 0;
}
*/
///========================================================================================================///
///--------------check no is perfect using array-----------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[4],i,sum,j;
    printf("\n Enter Any 4 no :-");
    for(i=0;i<4;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<4;i++)
    {
        sum=0;
        for(j=1;j<=(x[i]/2);j++)
        {
            if(x[i]%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==x[i])
        {
            printf("\n%d is perfect no",x[i]);
        }
    }
    return 0;
}
*/
///========================================================================================================///
/*
#include<stdio.h>
int main()
{
    int x[4],i,fact,sum=0,rem,j,temp=0,no;
    printf("\n Enter Array Element :-");
    for(i=0;i<4;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<4;i++)
    {
        temp=x[i];
        no=temp;
        sum=0;
        while(no!=0)
        {
            rem=no%10;
            fact=1;
            for(j=1;j<=rem;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            //printf("\n sum is %d",sum);
            no=no/10;
        }
        x[i]=temp;
        if(sum==x[i])
        {
            printf("\n %d is strong no",x[i]);
        }
    }
    return 0;
}
*/
///=======================================================================================///
///----------------- Input array and display it-----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i;
    printf("\n Enter 5  array element :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n **Display the value**");
    for(i=0;i<5;i++)
    {
        printf("\n Value is %d",x[i]);
    }
    return 0;
}
*/
///=========================================================================///
///--- WAP to add all elements from the array of five elements-------------///
/*
#include<stdio.h>
int main()
{
    int no[5],i,tot=0;
    printf("\n Enter Array Element :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&no[i]);
    }
    //printf("\n Display the addition");
    for(i=0;i<5;i++)
    {
        tot=tot+no[i];

    }
    printf("\n Array display ");
    for(i=0;i<5;i++)
    {
        printf(" \n %d",no[i]);
    }
    printf("\n Addition  is :-%d",tot);
    return 0;
}
*/
///==========================================================================================///
///--- Enter the array of 10 integers and count the even elements---------------------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,cnt=0;
    printf("\n Enter 10 array element :-");
    for(i=0;i<10;i++)
    {
        //cnt++;------------------> you can write count here
        scanf("%d",&x[i]);
        //cnt++-------------->  as well as you can write here

    }
    for(i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            printf("\n %d",x[i]);
            cnt++;
        }
    }
    printf("\n Array element");
    for(i=0;i<10;i++)
    {
        printf(" %5d",x[i]);
    }
    printf("\n Even count is %d",cnt);
    return 0;
}
*/
///==========================================================================================///
///---WAP to find max from collection of 10 integers-----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,max=0;
    printf("\n Enter 10 Array Element :-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    printf("\n Max Integers is %d",max);
    return 0;
}
*/
///===========================================================================================///
///-- // Enter the array of 10 nos and find the presence of entered no in an array.
/*
//       0     1     2    3     4     5     6     7      8    9         no	cnt
//     [23]  [45]  [90]  [81]  [72]  [45]  [34]  [67]  [45]  [57]      [45]	 3
//
//        output: 45 is present 3 times in an array

#include<stdio.h>
int main()
{
    int x[10],i,cnt=0,no;
    printf("\n Enter 10 Array Element ");
    for(i=0;i<5;i++)
    {
        scanf("%d",x[i]);
    }
    printf("\n --Enter Search array element--");
    scanf("%d",&no);
    for(i=0;i<10;i++)
    {
        if(x[i]==no)
        {
            cnt++;
        }
    }
    printf("\n Array element is ");
    for(i=0;i<10;i++)
    {
        printf("\n %6d",x[i]);
    }
    printf("\n %d is present in %d in array",no,cnt);
    return 0;
}
*/
///============================(reverse method 1st)=========================================///
///---- WAP to read the array elements in reverse manner.-----------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[6],i;
    printf("\n Enter Any 5 Nos :-");
    for(i=0;i<6;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Original array");
    for(i=0;i<6;i++)
    {
        printf("%5d",x[i]);
    }
    printf("\n reverse Array");
    for(i=0;i<6;i++)
    {
        printf("%5d",x[5-i]);//method is [4-i]
    }
    return 0;
}
*/
///=======================(reverse method 2nd )==================================================================///
/*
#include<stdio.h>
int main()
{
    int x[5],i;
    printf("\n Enter Any 5 Nos :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Original array");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }
    printf("\n reverse Array");
    for(i=4;i>=0;i--)//method second revrse
    {
        printf("%5d",x[i]);
    }
    return 0;
}
*/
///==========================================================================================///
///------ WAP to copy the array elements at another location.--------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],y[5],i;
    printf("\n Enter 5 Array Element ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Original array ");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }
    for(i=0;i<5;i++)
    {
        y[i]=x[i];
    }
    printf("\n Copy Array");
    for(i=0;i<5;i++)
    {
        printf("%5d",y[i]);
    }
    return 0;
}
*/
///===============================================================================================///
///-----WAP to copy the array elements at another location in reverse manner---------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],y[5],i;
    printf("\n Enter Array Element ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Original array");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }
    for(i=0;i<5;i++)
    {
        y[i]=x[i];
    }
    printf("\n Copy Array");
    for(i=0;i<5;i++)
    {
        printf("%5d",y[i]);
    }
    for(i=0;i<5;i++)
    {
        y[i]=x[4-i];
    }
    printf("\n Reverse array");
    for(i=0;i<5;i++)
    {
        printf("%5d",y[i]);
    }
    return 0;
}
*/
///========================================================================================///
///Enter the price of 7 items and find the total bill. the discount is 6% when bill is upto 1000 otherwise 14%
/*
#include<stdio.h>
int main()
{
    float x[7],tot=0,dis=0;
    int i;
    printf("\n Enter 7 Items price :-");
    for(i=0;i<7;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("\n Items in array");
    for(i=0;i<7;i++)
    {
        printf("\n %f",x[i]);
    }
    for(i=0;i<5;i++)
    {
        tot=tot+x[i];
    }
    if(tot<=1000)
    {
           dis=tot*0.06;
    }
    else
    {
           dis=tot*0.14;
    }
    printf("\n TOtal Amount is %.2f",tot);
    printf("\n discount is %0.3f",dis);
    printf("\n Payble Amount is:-%0.3f",(tot-dis));
    return 0;
}
*/
///====================================================================================================================///
///--------Enter any 10 nos and replace all odd number with -3.-------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i;
    printf("\n Enter Any 10 nos :- ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Origanal Array");
    for(i=0;i<10;i++)
    {
        printf("%5d",x[i]);
    }
    for(i=0;i<10;i++)
    {
        if(x[i]%2!=0)
        {
            x[i]=-3;
        }
    }
    printf("\n Replace odd no");
    for(i=0;i<10;i++)
    {
        printf("%5d",x[i]);
    }
    return 0;
}
*/
///=====================================================================/================///
///-------WAP to insert element at last position Without using switch case-------------------///

/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,cnt,opt;

    printf("\n Enter The Count :-");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient Memory ");
    }

    printf("\n Enter The element  ");
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Insert Element \t 2.Display \t 3.stop");
        printf("\n Enter The option:- ");
        scanf("%d",&opt);

        if(opt==1)
        {
            if(cnt>=SIZE)
            {
                printf("\n Array is full.....Unable to insert Element");
            }
            else
            {
                printf("\n Enter The Element :- ");
                scanf("%d",&x[cnt]);
                cnt++;
            }
        }
        else if(opt==2)
        {
            printf("\n Array are ");
            for(i=0;i<cnt;i++)
            {
                printf("%d\t",x[i]);
            }

        }
        else
        {
            printf("\n End The Program ");
            exit(0);
        }
    }
    return 0;
}
*/
///===================================================================================================================///
///-------WAP to insert element at last position((using switch case))------------------------------------------------///
/*
#include<stdio.h>
#define SIZE 15
int main()
{
    int x[SIZE],i,cnt,opt;

    printf("\n Enter The count ");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
         printf("\n Insufficient Memory");
    }
    printf("\n Enter the %d Element ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Insert element \t 2.Display \t 3.stop");
        printf("\n enter your option");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            if(cnt>15)
            {
                printf("\n Array is full...unable to insert element");
            }
            else
            {
                printf("\n Enter The element ");
                scanf("%d",&cnt);
                cnt++;
            }

            break;
        case 2:
            printf("\n Display The Element ");
            for(i=0;i<cnt;i++)
            {
                printf("%d\t",x[i]);
            }
            break;
        case 3:
            printf("\n enter The any key ");
            exit(0);

        }
    }
    return 0;
}
*/
///===========================================================================================================///
///-------WAP to insert element at Start position (using switch case)---------------------------------///
/*
#include<stdio.h>
#define SIZE 15
int main()
{
    int x[SIZE],i,cnt,opt;

    printf("\n Enter The count :-");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient Memory ");
        return 0;
    }
    printf("\n Enter %d element",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Insert Start \t 2.Display \t 3.stop");
        printf("\n Enter Your Option :-");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            if(cnt<SIZE)
            {
                for(i=cnt;i>=1;i--)// shifting the elemnt
                {
                    x[i]=x[i-1];
                }
                printf("\n Enter The Element:- ");
                scanf("%d",&x[0]);
                cnt++;
            }
            else
            {
                printf("\n Array is Full...Unable to insert element ");
            }
            break;
        case 2:
            printf("\n display Array : ");
            for(i=0;i<cnt;i++)
            {
                printf("%d\t",x[i]);
            }
            break;
        case 3:
            printf("\n Press any Key");
            exit(0);
        default:
            printf("\n Incorrect Option");
        }
    }
    return 0;
}
*/
///========================================================================================///
///-------WAP to insert element at last position without using switch case))--------------///

/*
#include<stdio.h>
#define SIZE 15
int main()
{
    int x[SIZE],i,opt,cnt;
    printf("\n Enter The Count :-");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient Memory ");

    }
    else
    {
         printf("\n Enter %d element ",cnt);
        for(i=0;i<cnt;i++)
        {
            scanf("%d",&x[i]);
        }
    }
    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Insert Start \t 2.Display \t 3.stop");
        printf("\n Enter Your Option");
        scanf("%d",&opt);

        if(opt==1)
        {
            if(cnt<SIZE)
            {
                for(i=cnt;i>=1;i--)
                {
                    x[i]=x[i-1];
                }
                printf("\n Enter Array element ");
                scanf("%d",x[0]);
                cnt++;
            }
            else
            {
                 printf("\n Array is Full...Unable to insert element ");
            }
            break;
        }
        if(opt==2)
        {
            printf("\n Display Array ");
            for(i=0;i<cnt;i++)
            {
                printf("%d",x[i]);
            }
            break;
        }
        if(opt==3)
        {
            printf("\n Enter Any Key ");
            exit(0);
        }

    }
    return 0;

}
*/
///==============================================================================================///
///-------WAP to insert element at any position without using switch case))---------------------///

/*
#include<stdio.h>
#define SIZE 15
int main()
{
    int x[SIZE],i,cnt,pos,opt;

    printf("\n Enter the count :-");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient memory!!!! ");
    }

    printf("\n Enter %d Element :-",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ****Menu****");
        printf("\n 1.Insert at postion \t 2.Display \t 3.stop");
        printf("\n Enter Your Option");
        scanf("%d",&opt);

        if(opt==1)
        {
            printf("\n enter your position :-");
            scanf("%d",&pos);

            if(cnt==SIZE)
            {
                printf("\n Insufficient Memory ");
            }
            else if(pos<0 || pos>cnt)
            {
                printf("\n Incorrect option ");
            }
            else
            {
                if(pos==cnt)
                {
                    printf("\n Enter Your element:- ");
                    scanf("%d",&x[pos]);
                }
                else
                {
                    for(i=cnt;i>pos;i--)
                    {
                        x[i]=x[i-1];
                    }
                    printf("\n Enter your no :-");
                    scanf("%d",&x[pos]);
                    cnt++;
                }
            }
        }
        if(opt==2)
        {
            printf("\n Display Array ");
            for(i=0;i<cnt;i++)
            {
                printf(" %d\t",x[i]);
            }
        }
        if(opt==3)
        {
            printf("\n End The program ");
            exit(0);
        }
    }
    return 0;
}
*/
///=============================================================================================================///
///-------WAP to insert element at any position((using switch case))-------------------------------------------///

/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,opt,cnt,pos;

    printf("\n Enter Your count :-");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficinent Memory!!!");
    }

    printf("\n Enter %d element :-",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ****Menu****");
        printf("\n 1.Insert at postion \t 2.Display \t 3.stop");
        printf("\n Enter Your Option");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            printf("\n Enter your position :-");
            scanf("%d",&pos);

            if(cnt==15)
            {
                printf("\n Insufficient Memory !!!!");
            }
            else if(pos<0 || pos>cnt)
            {
                printf("\n Incorrect Option!!!");
            }
            else
            {
                if(pos==cnt)
                {
                    printf("\n Enter Your Element :-");
                    scanf("%d",&x[pos]);
                }
                else
                {
                    for(i=cnt;i>pos;i--)
                    {
                        x[i]=x[i-1];
                    }
                    printf("\n Enter Your No :-");
                    scanf("%d",&x[pos]);
                    cnt++;
                }
            }
            break;
        case 2:
            printf("\n Display Array ");
            for(i=0;i<cnt;i++)
            {
                printf("%d\t",x[i]);
            }
            break;
        case 3:
            printf("\n End of Program....");
            exit(0);
        }
    }
    return 0;
}
*/
///==============================================================================================///
///---------Insert Element At start ,last & Any Position using Switch case-------------------------///
/*
#include<stdio.h>
#define SIZE 30
int main()
{
    int x[SIZE],i,cnt,opt,pos;

    printf("\n Enter Your Count :-");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient Memory :- ");
    }

    printf("\n Enter %d Element :-",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ****Menu****");
        printf("\n 1.Insert at start \t 2.Insert at end \t 3.Insert position \t 4.display \t 5.stop");
        printf("\n Enter Your Option");
        scanf("%d",&opt);

        switch (opt)
        {

        case 1:
            if(cnt<SIZE)
            {
                for(i=cnt;i>=1;i--)
                {
                    x[i]=x[i-1];
                }
                printf("\n Enter Your Elemnt :-");
                scanf("%d",&x[0]);
                cnt++;
            }
            else if(cnt>SIZE)
            {
                printf("\n Array is full.....Unable to insert Element:-");
            }
            break;
        case 2:
            if(cnt<SIZE)
            {
                printf("\n Enter Your Element:-");
                scanf("%d",&x[cnt]);
                cnt++;
            }
            else
            {
                printf("\n Array is full.....Unable to insert Element:-");
            }
            break;
        case 3:
            printf("\n Enter Your Position :-");
            scanf("%d",&pos);

            if(cnt==SIZE)
            {
                printf("\n Insufficient Memory ");
            }
            else if(pos<0 || pos>cnt)
            {
                printf("\n Incorrect position!!!!");
            }
            else
            {
                if(pos==cnt)
                {
                    printf("\n Enter Your element :-");
                    scanf("%d",&x[pos]);
                }
                else
                {
                    for(i=cnt;i>pos;i--)
                    {
                        x[i]=x[i-1];
                    }
                    printf("\n Enter Your no :-");
                    scanf("%d",&x[pos]);
                    cnt++;
                }
            }
            break;
        case 4:
            printf("\n display array ");
            for(i=0;i<cnt;i++)
            {
                printf(" %d\t",x[i]);
            }
            break;
        case 5:
            printf("\n End Of program ");
            exit(0);
        default:
            printf("\n Choose Right Option ");
            return ;
        }
    }
    return 0;
}
*/
///===========================================================================================///
///-------------------Delete at start position witout using switch case----------------------///
/*
#include<stdio.h>
#define SIZE 15
int main()
{
    int x[SIZE],i,opt,cnt,tem;

    printf("\n Enter the Count :-");
    scanf("%d",&cnt);

    if(cnt>15)
    {
        printf("\n Insufficient Memory !!!!");
    }
    printf("\n Enter %d Elemnt",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Delete Start \t 2. Display \t 3.stop");
        printf("\n Enter Ypur option ");
        scanf("%d",&opt);

        if(opt==1)
        {
            if(cnt<15)
            {
                tem=x[0];
                for(i=0;i<(cnt-1);i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\n Deleted %d",tem);
            }
            else
            {
                printf("\n Array is full.... Unable to insert Element");
            }
        }
        if(opt==2)
        {
            printf("\n Display Array ");
            for(i=0;i<cnt;i++)
            {
                printf("%d\t",x[i]);
            }
        }
        if(opt==3)
        {
            printf("\n Enter Any Key !!!!");
            exit(0);
        }
    }
    return 0;
}
*/
///===========================================================================================///
///--------------Delete At position start using switch case----------------------------------///
/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,tem,opt,cnt;

    printf("\n Enter The Count :-");
    scanf("%d",&cnt);

    printf("\n Enter %d Element ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    while(1)
    {
        printf("\n ***Menu*** ");
        printf("\n 1.Delete Start \t 2. Display \t 3.stop");
        printf("\n Enter Your option ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            if(cnt<10)
            {
                tem=x[0];
                for(i=0;i<(cnt-1);i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\n Delete %d ",tem);
            }
            break;
        case 2:
            printf("\n Display Array Are ");
            for(i=0;i<cnt;i++)
            {
                printf(" %d\t",x[i]);
            }
            break;
        case 3:
            printf("\n enter any key !!!");
            exit(0);
        default:
            printf("\n Choose Correect Option !!!");
        }
    }
    return 0;
}
*/
///===============================================================================================///
///--------------Delete At position end without using switch case----------------------------------///

/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,tem,opt,cnt;

    printf("\n Enter The Count :-");
    scanf("%d",&cnt);

    printf("\n Enter %d Element ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    while(1)
    {
        printf("\n ***Menu*** ");
        printf("\n 1.Delete End \t 2. Display \t 3.stop");
        printf("\n Enter Your option ");
        scanf("%d",&opt);

        if(opt==1)
        {
            if(cnt<SIZE)
            {
                tem=(cnt-1);
                cnt--;
                printf("\t%d",tem);
            }
        }
        if(opt==2)
        {
            printf("\n Display Array ");
            for(i=0;i<cnt;i++)
            {
                printf("%d\t",x[i]);
            }
        }
        if(opt==3)
        {
            printf("\n End Of Program!!!!! ");
            exit(0);
        }
    }
    return 0;
}
*/
///================================================================================================///
///--------------Delete At position End using switch case----------------------------------///

/*
#include<stdio.h>
#define SIZE 15
int main()
{
    int x[SIZE],i,tem,opt,cnt;

    printf("\n Enter Your count :-");
    scanf("%d",&cnt);

    printf("\n Enter %d Element :-",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ***Menu*** ");
        printf("\n 1.Delete End \t 2. Display \t 3.stop");
        printf("\n Enter Your option ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            if(cnt<SIZE)
            {
                tem=(cnt-1);
                cnt--;
            }
            printf("\n Deleted %d",tem);
            break;
        case 2:
            printf("\n Display array ");
            for(i=0;i<cnt;i++)
            {
                printf(" %d\t ",x[i]);
            }
            break;
        case 3:
            printf("\n end of program!!!!! ");
            exit(0);
        default:
            printf("\n Incorrect Option !!!!");
            return ;
        }
    }
    return 0;
}
*/
///============================================================================================///
///------Delete  any Position using Switch case-----------------------------------------------///
/*
#include<stdio.h>
#define SIZE 15
int main()
{
    int x[SIZE],i,cnt,tem,opt,pos;

    printf("\n  Enter Your count :-");
    scanf(" %d",&cnt);

    printf("\n Enter %d Element ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    if(cnt>SIZE)
    {
        printf("\n Insufficient Memory !!!!");
    }
    while(1)
    {
        printf("\n ***Menu*** ");
        printf("\n 1.Delete Any position \t 2. Display \t 3.stop");
        printf("\n Enter Your option ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1 :
            printf("\n Enter Your Position :- ");
            scanf("%d",&pos);
        if(pos<0 && pos>=cnt)
           {
               printf("\n Incorrect Position ");
               break;
           }
           tem=x[pos];
           for(i=pos;i<(cnt-1);i++)
           {
                x[i]=x[i+1];
           }
           cnt--;
           break;
       case 2:
            printf("\n display Array ");
            for(i=0;i<cnt;i++)
            {
                printf(" %d\t",x[i]);
            }
            break;
       case 3 :
            printf("\n End Of Program ");
            exit(0);
       default:
            printf("\n Incorrect Option!!!!");
            return ;

        }
    }
    return 0;
}
*/
///==================================================================================================///
///--------------Delete any position without using switch case--------------------------------------///
/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,pos,cnt,opt,tem;

    printf("\n Enter YOur Count :-");
    scanf("%d",&cnt);

    printf("\n Enter %d Elemnt ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ***Menu*** ");
        printf("\n 1.Delete Any position \t 2. Display \t 3.stop");
        printf("\n Enter Your option ");
        scanf("%d",&opt);

        if(opt==1)
        {
            printf("\n Enter Your Position ");
            scanf("%d",&pos);

            if(pos<0 && pos>=cnt)
            {
                printf("\n Incorrect Position ");
            }
            else
            {
                tem=x[pos];
                for(i=pos;i<(cnt-1);i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\n Delete element %d",tem);
            }
        }
        if(opt==2)
        {
            printf("\n Display Array ");
            for(i=0;i<cnt;i++)
            {
                printf("%d\t",x[i]);
            }
        }
        if(opt==3)
        {
            printf("\n end of program !!!!");
            exit(0);
        }
    }
    return 0;
}
*/
///============================================================================================================///
///----
/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,pos,cnt,opt,temp;

    printf("\n Enter Your Count :-");
    scanf("%d",&cnt);

    printf("\n Enter %d Element :-",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ***Menu*** ");
        printf("\n 1.Delete start position 2.Delete End position 3.Delete Any position\t 4. Display \t 5.stop");
        printf("\n Enter Your option ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            temp=x[0];
            for(i=0;i<(cnt-1);i++)
            {
                x[i]=x[i+1];
            }
            cnt--;
            printf("\n Delete Element %d",temp);
            break;
        case 2:
            temp=(cnt-1);
            cnt--;
            printf("\n Delete Element %d",temp);
            break;
        case 3:

            printf("\n Enter Your Position ");
            scanf("%d",&pos);

            if(pos<0 || pos>=cnt)
            {
                printf("\n incorrect position ");
            }
            else
            {
                temp=x[pos];
                for(i=pos;i<(cnt-1);i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\n Deleted Element %d",temp);
            }
            break;
        case 4:
            printf("\n Display Array ");
            for(i=0;i<cnt;i++)
            {
                printf(" %d\t",x[i]);
            }
            break;
        case 5:
            printf("\n End Of program !!!!!");
            exit(0);
        default:
            printf("\n Incorrect option ");
            return ;
       }
    }
    return 0;
}
*/
///======================================================================================================///
///---Insert Position start,End & any position ---------Delete Position At Start,End,& Any Position------///
/*
#include<stdio.h>
#define SIZE 30
int main()
{
    int x[SIZE],i,cnt,opt,pos,temp;

    printf("\n Enter Your Count :-");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient Memory !!!!!");
        return ;
    }

    printf("\n Enter %d Element ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    while(1)
    {
        printf("\n ***Menu*** ");
        printf("\n 1.Delete start position \n 2.Insert start position \n 3.Delete End position \n 4.Insert End Position");
        printf("\n 5.Delete Any Position \n 6.Insert Any Position \n 7.Display \n 8.Stop");
        printf("\n Enter Your option ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            temp=x[0];
            for(i=0;i<(cnt-1);i++)
            {
                x[i]=x[i+1];
            }
            cnt--;
            printf("\n Delete Element %d ",temp);
            break;
        case 2:
            if(cnt<SIZE)
            {
                for(i=cnt;i>=1;i--)
                {
                    x[i]=x[i-1];
                }
                printf("\n Enter Your Element ");
                scanf("%d",&x[0]);
                cnt++;
            }
            else
            {
                printf("\n Array is full ..... Unable to Insert Element ");
            }
            break;
        case 3:
            temp=(cnt-1);
            cnt--;
            printf("\n Delete Element %d",temp);
            break;
        case 4:
            if(cnt<SIZE)
            {
                printf("\n Enter Your Element ");
                scanf(" %d",&x[cnt]);
                cnt++;
            }
            else
            {
                 printf("\n Array is full ..... Unable to Insert Element ");
            }
            break;
        case 5:
            printf("\n Enter Your Position:- ");
            scanf("%d",&pos);
            if(pos<0&&pos>=cnt)
            {
                printf("\n Incorrect position ");
            }
            else
            {
                temp=x[pos];
                for(i=pos;i<(cnt-1);i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\n Deleted Element %d ",temp);
            }
            break ;
        case 6:
            printf("\n Enter Your Position ");
            scanf("%d",&pos);

            if(cnt==SIZE)
            {
                printf("\n Array is full ..... Unable to Insert Element ");
            }
            else if(pos<0 || pos>cnt)
            {
                printf("\n Incorrect position ");
            }
            else
            {
                if(pos==cnt)
                {
                    printf("\n Enter Your Element ");
                    scanf("%d",&x[pos]);
                }
                else
                {
                    for(i=cnt;i>pos;i--)
                    {
                        x[i]=x[i-1];
                    }
                    printf("\n Enter Your No ");
                    scanf("%d",&x[pos]);
                    cnt++;
                }
            }
            break;
        case 7 :
            printf("\n Display Array ");
            for(i=0;i<cnt;i++)
            {
                printf(" %d\t",x[i]);
            }
            break;
        case 8 :
            printf("\n End Of Program!!!!!!!!! ");
            exit(0);
        default:
            printf("\n Choose Correct Option ");
            return ;
        }
    }
    return 0;
}
*/
///=====================================================================================================///
///----------------WAP to find the no in Array  at which position--------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,no,temp,pos=-1;

    printf("\n Enter 10 Array element :-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Enter No you want to serched :-");
    scanf("%d",&no);

    for(i=0;i<10;i++)
    {
        if(x[i]==no)
        {
            pos=i;
            break;
        }
    }

    printf("\n Array Element ");
    for(i=0;i<10;i++)
    {
        printf(" %d\t ",x[i]);
    }

    if(pos!=-1)//(pos>-1) you can also write this
    {
        printf("\n %d Element present At %d position ",no,pos);
    }
    else
    {
        printf("\n %d element not present in given Array",no);
    }
    return 0;
}
*/
///==================================================================================================///

/*
#include<stdio.h>
int main()
{
    int x[10],i,no,pos=-1,start,mid,end,tmp,j;

    printf("\n Enter 10 Array Elements ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
//    printf("\n sorted array: ");
//    for(i=0;i<9;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]>x[j])
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//    printf("\n Ascending order: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }

    printf("\n Enter no,you want to Serched ");
    scanf("%d",&no);

    start=0;
    end=9;

    while(start<=end)
    {
        mid=(start+end)/2;

        if(x[mid]==no)
        {
            pos=mid;
            break;
        }
        else if(no<x[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }

    printf("\n Array Element  ");
    for(i=0;i<10;i++)
    {
        printf(" %d\t",x[i]);
    }

    if(pos!=-1)
    {
        printf("\n %d Element present at %d position ",no,pos);
    }
    else
    {
        printf("\n %d Element not present in given Array",no);
    }
    return 0;

}
*/
///===================================================================================================///
///------WAP to sorted Array using selection sort----------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,j,temp;

    printf("\n Enter 10 Array element :-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(x[j]<x[i])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }

    printf("\n Sorted Array in Ascending order");
    for(i=0;i<10;i++)
    {
        printf(" %d\t",x[i]);
    }
    return 0;
}
*/
///===================================================================================================///
///---------WAP to sorted array using bubble sort----------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[15],i,j,temp;

    printf("\n Enter 15 Array Element ");
    for(i=0;i<15;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<14;i++)
    {
        for(j=0;j<(14-1);j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("\n Sorted Array in decending ");
    for(i=0;i<15;i++)
    {
        printf("%5d",x[i]);
    }
    return 0;
}
*/
///===================================================================================================///
///-----WAP to find number in array at which position using binary serach(bubble sort)----------------------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,j,no,pos=-1,temp,start,mid,end;

    printf("\n Enter 10 Array element  ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<(9-1);j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }

    printf("\n Sorted Array In Acending order ");
    for(i=0;i<10;i++)
    {
        printf(" %5d",x[i]);
    }

    printf("\n Enter no you want Search ");
    scanf("%d",&no);

    start=0;
    end=9;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(x[mid]==no)
        {
            pos=mid;
            break;
        }
        else if(no<x[mid])
        {
            end=mid-1;
        }
        else //(no>x[mid])
        {
            start=mid+1;
        }
    }
    if(pos!=-1)
    {
        printf("\n %d Element is Present at %d Position ",no,pos);
    }
    else
    {
        printf("\n %d is not present in given array",no);
    }
    return 0;
}
*/
///=============================================================================///
///--------------------Sorted Array Using inSertion Sort-----------------------///
/*
#include<stdio.h>
int main()
{
    int x[7],i,j,temp;
    printf("\n Enter The array :-");
    for(i=0;i<7;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=1;i<7;i++)
    {
        temp=x[i];
        j=i-1;
        while(j>=0 && temp>x[j])
        {
            x[j+1]=x[j];
            j--;
        }
        x[j+1]=temp;
    }

    printf("\n Sorted Array is :-");
    for(i=0;i<7;i++)
    {
        printf(" %5d",x[i]);
    }
    return 0;
}
*/
///=============================================================================================///
///--WAP to collect all negative elements at left and all positive at rh+ side of array--------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,j,temp;

    printf("\n Enter Any 10 Nos :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Orignal Array :- ");
    for(i=0;i<5;i++)
    {
        printf(" %5d",x[i]);
    }

    for(i=0;i<4;i++)
    {
        if(x[i]>0)
        {
            for(j=i+1;j<5;j++)
            {
                if(x[j]<x[i])
                {
                    temp=x[i];
                    x[i]=x[j];
                    x[j]=temp;
                }
            }
        }
    }

    printf("\n Negative Element one side Array is :-  ");
    for(i=0;i<5;i++)
    {
        printf(" %d\t",x[i]);
    }
    return 0;
}
*/
///===============================================================================================///
///---------  WAP to find the intersection of two arrays-----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],y[5],i,j;
    printf("\n Enter 1 st Array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Enter 2nd  Array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }
    printf("\n Intersection Is :- ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(x[i]==y[j])
            {
                printf(" %d\t",x[i]);
            }
        }
    }
    return 0;
}
*/
///=================================================================================================///
///--------WAP to merge the two different arrays in a such way that there should not be any duplicate element.
/*
#include<stdio.h>
int main()
{
    int x[5],y[5],z[10];
    int i,j,cnt=0,flg;

    printf("\n Enter The 1st Array Element :- ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Enter The 2nd Array Element :- ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }

    for(i=0;i<5;i++)
    {
        flg=0;
        for(j=0;j<cnt;j++)
        {
            if(x[i]==z[j])
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            z[cnt]=x[i];
            cnt++;
        }
    }
    for(i=0;i<5;i++)
    {
        flg=0;
        for(j=0;j<cnt;j++)
        {
           if(y[i]==z[j])
           {
               flg=1;
               break;
           }
        }
        if(flg==0)
        {
            z[cnt]=y[i];
            cnt++;
        }
    }
    printf("\n Merging Array");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",z[i]);
    }
    return 0;

}
*/
///=================================================================================================///
///--- Write a program to print the average marks obtained by a student in five tests--------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,tot=0,avr,cnt;
    printf("\n Enter 5 sub Marks :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        cnt++;
    }
    for(i=0;i<5;i++)
    {
        tot=tot+x[i];
    }
    avr=tot/cnt;
    printf("\n Avrage marks is %d",avr);
    return 0;
}
*/
///=================================================================================///
///--- Write a program to find the sum of negative and positive integers-----------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,nsum=0,psum=0;
    printf("\n Enter 10 Array no :-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<10;i++)
    {
        if(x[i]>0)
        {
            psum=psum+x[i];
        }
        else
        {
            nsum=nsum+x[i];
        }
    }
    printf("\n Positivre sum is %d",psum);
    printf("\n Negative sum Is %d",nsum);
    return 0;
}
*/
///=======================================================================================///
///--Write a program to find the sum of N numbers in an array---------------------------///
/*
#include<stdio.h>
#define SIZE 100
int main()
{
    int x[SIZE],i,sum=0,n;

    printf("\n Enter You N number ");
    scanf("%d",&n);

    printf("\n Enter %d element :-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    if(n>SIZE)
    {
        printf("\n Insufficient Memory!!!! ");
    }

    printf("\n Array No ");
    for(i=0;i<n;i++)
    {
        printf(" %5d",x[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }

    printf("\n Sum N nos in Array %d",sum);
    return 0;
}
*/
///======================================================================================///
///---Write a program to find the smallest element in the array-------------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,min;
    printf("\n Enter Array Element :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Array Elements ");
    for(i=0;i<5;i++)
    {
        printf(" %5d",x[i]);
    }
    min=x[0];
    for(i=0;i<5;i++)
    {
        if(min>x[i])
        {
            min=x[i];
        }
    }

    printf("\n smallest No is %d in array ",min);
    return 0;
}
*/
///===========================================================================================///
///------Write a program to find the 2nd smallest element in the array-----------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,min,smin;
    printf("\n Enter Array Element -");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Orignal Array ");
    for(i=0;i<5;i++)
    {
        printf(" %5d",x[i]);
    }
    min=x[0];
    for(i=0;i<5;i++)
    {

        if(min>=x[i])
        {
            smin=min;
            min=x[i];
        }
        else if(smin<x[i])
        {
            smin=x[i];
        }
    }
    printf("\n 2nd Smallest no %d in Array ",smin);
    return 0;
}
*/
///=================================================================================///
///---Write a program to find the largest element in the array---------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,max;
    printf("\n Enter Array Element :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Array Elements ");
    for(i=0;i<5;i++)
    {
        printf(" %5d",x[i]);
    }

    for(i=0;i<5;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }

    printf("\n Largest No is %d in array ",max);
    return 0;
}
*/
///==================================================================================///
///-- Write a program to find the 2nd Largest element in the array-----------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,rem,max=0,smax=0;
    printf("\n Enter Array Element :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Array Elements ");
    for(i=0;i<5;i++)
    {
        printf(" %5d",x[i]);
    }

    for(i=0;i<5;i++)
    {
        if(max<x[i])
        {
            smax=max;
            max=x[i];
        }
        else if(smax<x[i])
        {
            smax=x[i];
        }
    }
    printf("\n  2nd Largest No is %d in array ",smax);
    return 0;
}
*/
///=====================================================================================///
///----Write a program to print array elements in reverse order------------------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i;
    printf("\n Enter Array Element :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Origanal Array ");
    for(i=0;i<5;i++)
    {
        printf(" %5d",x[i]);
    }
    printf("\n Reverse Array ");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[4-i]);
    }
    return 0;
}
*/
///===============================================================================///
///--Write a program to print the frequency of all numbers in an array-----------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,cnt,j;
    printf("\n Enter Any 10 Elements :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<4;i++)
    {
          for(j=i+1;j<5;j++)
          {
//              if(x[j]==x[i])
//              {
                    cnt++;
//              }
          }
         printf("\n %d is present in %d time ",x[i],cnt);
    }
    return 0;
}
*/
///===============================================================================================///
///===============WAP to find the max and second max digit in given no=============================///
/*
#include<stdio.h>
int main()
{
    int no,rem,max=0,smax=0;
    printf("\n Enter your No :-");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        if(max<rem)
        {
            smax=max;
            max=rem;
        }
        else if(smax<rem)
        {
            smax=rem;
        }
        no=no/10;
    }
    printf("\n Smax dg is %d",smax);
    printf("\n max dg is %d",max);
    return 0;
}
*/
///=========================================================================================///
///============================================================================================///
///---Write a program to print array elements in reverse order using the swapping method------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,temp=0,j;
    printf("\n Enter Array Element ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Orignal Array ");
    for(i=0;i<5;i++)
    {
        printf(" %5d",x[i]);
    }
    for(i=0,j=4;i<=j;i++,j--)
    {
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
    printf("\n Reverse Array ");
    for(i=0;i<5;i++)
    {
        printf(" %5d",x[i]);
    }
    return 0;
}
*/
///======================================================================================///
///---Write a program to display list of even and odd numbers separately from array-----///
/*
#include<stdio.h>
int main()
{
    int x[10],i,even,odd;
    printf("\n Enter Array Element :-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            even=x[i];
            printf("\n Even No %d",even);
        }
    }
    for(i=0;i<10;i++)
    {
        if(x[i]%2!=0)
        {
            odd=x[i];
            printf("\n odd No %d",odd);
        }
    }
    return 0;
}
*/
///====================================================================================//
///---Write a program to print the most occurring elements----------------------------//
/*
#include<stdio.h>
int main()
{
    int x[5],i,cnt=0,mocrnt=0,mocrtno=0,j,no;

    printf("\n Enter Array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Elements Are ");
    for(i=0;i<5;i++)
    {
        if(x[i]!=-1)
        {
            no=x[i];
            cnt=0;
            for(j=0;j<5;j++)
            {
                if(x[j]==no)
                {
                    cnt++;
                }
            }
            printf("\n %d is %d times",no,cnt);
            if(cnt>mocrnt)
            {
                mocrnt=cnt;
                mocrtno=no;
            }
        }
    }
    printf("\n %d is %d time Occuring Elment in array ",mocrtno,mocrnt);
    return 0;
}
*/
///=============================================================================///
///---Write a program to separate even and odd position numbers in an array----///
/*
#include<stdio.h>
int main()
{
    int x[10],i,epos ,opos;

    printf("\n Enter Array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Even Position Number:- ");
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            epos=x[i];
            printf("\n%d",x[i]);
        }
    }
    printf("\n Odd Position Number:- ");
    for(i=0;i<10;i++)
    {
        if(i%2!=0)
        {
            opos=x[i];
            printf("\n %d",opos);
        }
    }
    return 0;
}
*/
///====================================================================================///
///-- Write a program to separate positive and negative numbers in an array-----------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,pos,neg;
    printf("\n Enter Array Element\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n orignal Array :-\n");
    for(i=0;i<10;i++)
    {
        printf("\t %d",x[i]);
    }
    printf("\n Positive Element Array:- \n");
    for(i=0;i<10;i++)
    {
        if(x[i]>0)
        {
            printf("\n %d",x[i]);
        }
    }

    printf("\n Negative Element Array:- \n");
    for(i=0;i<10;i++)
    {
        if(x[i]<0)
        {
            printf("\n %d",x[i]);
        }
    }
    return 0;
}
*/
///===================================================================================///
///--Write a program to insert an element into an array at a specified position------///
/*
#include<stdio.h>
#define SIZE 20
int main()
{
    int x[SIZE],i,pos=-1,cnt,opt;

    printf("\n Enter Your Count:- \n");
    scanf("%d",&cnt);

    printf("\n Enter %d Element :-",cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient Memory ");
    }

    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ***Menu***\n");
        printf("\n 1.insert Element Any Position \n 2. display \n 3. Stop");
        printf("\n Enter Your OPtion \n");
        scanf("%d",&opt);

        if(opt==1)
        {
            printf("\n Enter Your Position :-");
            scanf("%d",&pos);
            if(cnt==SIZE)
            {
                printf("\n Insufficient Memory !!!! ");
            }
            else if(pos<0 || pos>cnt)
            {
                printf("\n You Select Incorrect Position!!!!");
            }
            else
            {
                if(pos==cnt)
                {
                    printf("\n Enter your No ");
                    scanf("%d",&x[pos]);
                }
                else
                {
                    for(i=cnt;i>pos;i--)
                    {
                        x[i]=x[i-1];
                    }
                    printf("\n Enter Your No :-");
                    scanf("%d",&x[pos]);
                    cnt++;
                }
            }
        }

        if(opt==2)
        {
            printf("\n Array Is :- \n");
            for(i=0;i<cnt;i++)
            {
                printf("\t %d",x[i]);
            }
        }
        if(opt==3)
        {
            printf("\n End of Program !!!!");
            exit(0);
        }
    }
    return 0;
}
*/
///========================================================================================///
///---Write a program to delete a specified integer in an array---------------------------///
/*
#include<stdio.h>
#define SIZE 20
int main()
{
    int x[SIZE],i,opt,pos=-1,cnt=0,temp;

    printf("\n Enter Your Count:-\n");
    scanf("%d",&cnt);

    printf("\n Enter %d Elemnt:- \n ",cnt);

    if(cnt>20)
    {
        printf("\n Insufficient Memory \n");
    }

    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Delete Element Any Position \n 2. Display \n 3.stop ");
        printf("\n Enter your option \n");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1 :
            printf("\n Enter Your Position \n");
            scanf("%d",&pos);
            if(pos<0&&pos>cnt)
            {
                printf("\n You Select Incorrect Position !!!!!");
            }
            else
            {
                temp=x[pos];
                for(i=pos;i<(cnt-1);i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
            }
            break;

        case 2 :
            printf("\n Array is :-");
            for(i=0;i<cnt;i++)
            {
                printf("\t %d",x[i]);
            }
            break;

        case 3 :
            printf("\n End Of Program !!!!");
            exit (0);

        default :
            printf("\n Choose correct option \n");
            return ;

        }
    }
    return 0;
}
*/
///===============================================================================///
///---C program to print all negative elements in an array-----------------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,neg;

    printf("\n Enter Your Array :-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Orignal Array :-");
    for(i=0;i<10;i++)
    {
        printf("\t %d",x[i]);
    }
    printf("\n Negative Element In Array ");
    for(i=0;i<10;i++)
    {
        if(x[i]<0)
        {
            printf("\n %d",x[i]);
        }
    }
    return 0;
}
*/
///=================================================================================///
///--C Program To find largest and smallest number and their positions-------------///
/*
#include<stdio.h>
int main()
{
    int x[5],i,pos=-1,max,min;

    printf("\n Enter Your Array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n orignal Array \n");
    for(i=0;i<5;i++)
    {
        printf("\t %d",x[i]);
    }

    max=x[0];
    for(i=0;i<5;i++)
    {
        if(max<x[i])
        {
            max=x[i];
            pos=i;
        }
    }
    printf("\n %d is Element present at %d postion ",max,pos+1);

    min=x[0];
    for(i=0;i<5;i++)
    {
        if(min>x[i])
        {
            min=x[i];
            pos=i;
        }
    }

    printf("\n %d is Element present at %d postion ",min,pos+1);
    return 0;
}
*/
///======================================================================================///
///----C program to count total number of negative elements in array--------------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,neg,cnt=0;

    printf("\n Enter your Array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n orignal Array \n");
    for(i=0;i<10;i++)
    {
        printf("\t %d",x[i]);
    }

    printf("\n Negative Element In Array :-\n");
    for(i=0;i<10;i++)
    {
        if(x[i]<0)
        {
            cnt++;
            printf("\n %d",x[i]);
        }
    }
    printf("\n Negative Element In Array is :- %d ",cnt);
    return 0;
}
*/
///===========================================================================///
///----C program to count frequency of each element in an array--------------///
/*
#include<stdio.h>
int main()
{
    int x[10],i,cnt=0,j;

    printf("\n Enter Your Array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<10;i++)
    {
       if(x[i]!=-1)
       {
            cnt=0;
            for(j=0;j<10;j++)
            {
                if(x[i]==x[j])
                {
                    cnt++;
                }
            }
       }
       printf("\n %d is present %d time in array ",x[i],cnt);
    }
    return 0;
}
*/
///=====================================================================================================///
///===========================(2D Array)===============================================================///
/*
#include<stdio.h>
int main()
{
    int x[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}},i,j;
    printf(" \n Display 2D array \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///========================================================================================///
///--------input Array thought keyboard ans print 2D array--------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j;
    printf("\n Enter Array \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n 2D Array \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d\t",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///=======================================================================================///
///--WAP to display 5 student of 3 sub marks ans total of each student marks-------------///
/*
#include<stdio.h>
int main()
{
    int x[5][3],i,j,tot=0;
    printf("\n Enter 5 Studend marks :-");
    for(i=0;i<5;i++)
    {
        printf("\n Enter %d Student Marks \n",i+1);
        for(j=0;j<3;j++)
        {
            printf("\n Enter %d sub Mark \n",j+1);
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        tot=0;
        for(j=0;j<3;j++)
        {
            tot=tot+x[i][j];
            printf("\t %d",x[i][j]);
        }
        printf("\t ---> %d",tot);
        printf("\n");
    }
    return 0;
}
*/
///============================================================================================///
///-------- WAP to add every row of array-----------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][4],i,j,tot=0;
    printf("\n Enter Array elemnt 3*4 \n ");
    for(i=0;i<3;i++)
    {
        printf("\n Enter %d Row Element \n ",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        tot=0;
        for(j=0;j<4;j++)
        {
            tot=tot+x[i][j];
            printf("\t %d",x[i][j]);
        }
        printf("\t ----> %d",tot);
        printf("\n");
    }
    return 0;
}
*/
///================================================================================================///
///-- WAP to store the runs scored by 3 player in 5 matches and display all runs with total-------///
/*
#include<stdio.h>
int main()
{
    int x[3][5],i,j,tot=0;
    printf("\n Enter 5 Matches Score \n");
    for(i=0;i<3;i++)
    {
        printf("\n Enter %d player score \n ",i+1);
        for(j=0;j<5;j++)
        {
            printf("\n Enter %d matches Score \n ",j+1);
            scanf("%d",&x[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        tot=0;
        for(j=0;j<5;j++)
        {
            tot=tot+x[i][j];
            printf("\t %d",x[i][j]);
        }
        printf("\t ---> %d",tot);
        printf("\n");
    }
    return 0;
}
*/
///==================================================================================///
///------WAP to add two arrays------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],i,j,z[3][3];
    printf("\n Enter X array ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enter Y array ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    printf("\n display Add Two Array \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\t + ");
        for(j=0;j<3;j++)
        {
            printf("\t %d",y[i][j]);
        }

        printf("\t ---->");
        for(j=0;j<3;j++)
        {
            printf("\t %d",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///========================================================================================///
///-------- WAP to add muti. arrays-------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],z[3][3];
    int i,j,k;

    printf("\n Enter x Array of 3*3 \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enter x Array of 3*3 \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           z[i][j]=0;
           for(k=0;k<3;k++)
           {
               z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
           }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\t * ");
        for(j=0;j<3;j++)
        {
            printf("\t %d",y[i][j]);
        }

        printf("\t ---->");
        for(j=0;j<3;j++)
        {
            printf("\t %d",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///========================================================================================///
///-------- WAP to display the transpose of matrix----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],i,j;
    printf("\n Enter Array 3*3 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            y[j][i]=x[i][j];
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\t--->");

        for(j=0;j<3;j++)
        {
            printf("\t %d",y[i][j]);

        }
        printf("\n");
    }
    return 0;
}
*/
///=========================================================================================================================================///
///----------C Program to Read and Print a RxC Matrix, R and C must be input by the User
///00This program will read a two dimensional array (Matrix), number of rows (R) and number of columns (C) will be read through the User.////
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j;
    printf("\n Enter The Array 3*3 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);//revse the i ans j

        }
        printf("\n");
    }
    return 0;
}
*/
///=================================================================================================================///
///--C Program to Read a Matrix and find Sum and Product of all elements
///--This program will read a matrix and prints sum and product of all elements of the two dimensional array--------///
/*
#include<stdio.h>
 int main()
 {
     int x[3][3],i,j,sum=0,pro=1;
     printf("\n Enter Array 3*3\n ");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&x[i][j]);
         }
     }

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             sum=sum+x[i][j];
         }
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             pro=pro*x[i][j];
         }
     }
     printf("\n\t\tArray\t\t\t sum  \t\t\t  product\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("\t %d",x[i][j]);
         }
         printf("\t");

         printf("\t Sum of matrix %d",sum);

         printf("\t");

         printf("\t product of matrix %d",pro);

         printf("\n");
     }
     return 0;
 }
*/
///====================================================================================================================================///
///---C Program to find Sum of all elements of each row of a matrix
///-----This C program will read a Matrix (two dimensional arrays) and print the sum of all elements of each row-----------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,sum=0;

    printf("\n Enter Matrix 3*3 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+x[i][j];
            printf("\t %d",x[i][j]);
        }
        printf("\t ----> %d",sum);
        printf("\n");
    }
    return 0;
}
*/
///======================================================================================================================================///
///---------C Program to Transpose a Matrix This C program will read a matrix and print its transpose matrix----------------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],i,j;
    printf("\n Enter matrix 3*3 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            y[j][i]=x[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\t ----> ");

        for(j=0;j<3;j++)
        {
            printf("\t %d",y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///=========================================================================================================///
///-----------C Program to Read a Matrix and Print Diagonals
///This C program will read a matrix of MxN dimensions and prints only diagonal’s elements of the matrix----///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j;

    printf("\n Enter Matrix 3*3 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Digonal Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            if(j<=i)
            {
               if(i==j)
               {
                printf(" %d ",x[i][j]);
               }
               else
               {
                   printf(" ");
               }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///====== ========================================================================================///
///------------C Program to find sum and subtraction of two matrices-----------------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],i,j,sum=0,sub=0;
    printf("\n Enter 1 st matrix \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enter 2 st matrix \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+(x[i][j]+y[i][j]);

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            sub=sub-(x[i][j]- y[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\t ");
        for(j=0;j<3;j++)
        {
            printf("\t %d",y[i][j]);
        }

        printf("\t ---->");
        printf("\t %d\t",sum);

        printf("\t");

        printf("\t %d\t",sub);
        printf("\n");
    }
    printf("\n Sum of Two Matrix  %d\t",sum);
    printf("\n subtraction  of two Matrix  %d\t",sub);
    return 0;
}
*/
///==================================================================================================================================///
///---------C Program to find multiplication of two matrices
///This C program will read two matrices and make a third matrix, which will contain the multiplication of both input matrices------///
/*
#include<stdio.h>
int main()
{
    int x[2][2],y[2][2],z[2][2];
    int i,j,k;

    printf("\n Enter 1st Matrix \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enetr 2nd Matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            z[i][j]=0;
            for(k=0;k<2;k++)
            {
                z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
            }
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\t");
        for(j=0;j<2;j++)
        {
            printf("\t %d",y[i][j]);
        }
        printf("\t ---> ");
        for(j=0;j<2;j++)
        {
            printf("\t %d",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///============================================================================///
///----------C Program to print lower diagonal of a matrix
///This C program will read a square matrix and print its lower diagonal------///
/*
#include<stdio.h>
int main()
{
    int m[3][3],i,j;

    printf("\n Enter Matrix 3*3 \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    printf("\n Orignal Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",m[i][j]);
        }
        printf("\n");
    }

    printf("\n Lower Dignol Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (j<=i)
            {
                printf("\t %d ",m[i][j]);
            }
            else
            {
                printf("\t ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=========================================================================================================///
///---C program to check a given matrix is an identity matrix or not
///Given a matrix, we have to check whether the matrix is an identity matrix or not using C program-------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j;

    printf("\n Enter Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Orignal Matrix :-");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j && i+j==)
            {
                printf("\n Is is Identify Matrix ");
            }
            else
            {
                printf("\n Is is not Identify Matrix ");
            }

        }
    }
    return 0;
}
*/
///=============================================================================================///
///--------C program to interchange the rows in the matrix
///---Given a matrix, and we have to interchange the specified rows in the matrix using C program///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,temp;
    printf("\n Enter Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Orignal Matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n Interchnage Row \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i]< x[i+1])
            {
                printf("\t %d",x[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

///================================================================================================================///
///--C program to find the sum of main and opposite diagonal elements of a matrix
///--Given a matrix, we have to find the sum of main and opposite diagonal elements of a matrix using C program---///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,sum=0,osum=0;
    printf("\n Enter the matrix 3*3 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Matrix :-");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+x[i][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            {
                osum=osum+x[i][j];
            }
        }
    }
    printf("\n main Diagonals Sum %d",sum);

    printf("\n opposite Diagonals Sum %d",osum);

    return 0;
}
*/
///==============================================================================================================================///
///-----C program to find the trace of matrix
///--Trace of a n x n square matrix is sum of diagonal elements. Given a square matrix, we have to find the trace of matrix-----///
/*
#include<stdio.h>
int main()
{
    int s[4][4],i,j,sum=0;
    printf("\n Enter Matrix 4*4 \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    printf("\n Matrix \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",s[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
                sum=sum+s[i][j];
            }
        }
    }
    printf("\n Trace of Matrix is :%d",sum);
    return 0;
}
*/
///=======================================================================================================///
///------C program to print the upper triangular matrix
///Given a 3x3 matrix, we have to print the upper triangular matrix using C program-----------------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j;
    printf("\n Enter Matrix 3*3 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Origanl Matrix:- \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    printf("\n Upper triangular Matrix:- \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<=j)
            {
                printf("\t %d ",x[i][j]);
            }
            else
            {
                printf("\t ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=================================================================================================//
///--C program to find the frequency of even numbers in matrix
///Given a matrix, we have to find the frequency of even numbers in matrix using C program---------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,cnt;
    printf("\n Enter Matrix 3*3 \n ");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\ Matrix is :-\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i][j]%2==0)
            {
                cnt++;
            }
        }
    }

    printf("\n Frequency of Even no is :- %d ",cnt);
    return 0;
}
*/
///===================================================================================================///
///---C program to arrange row elements in ascending order
///Given an array, we have to arrange the row elements in ascending order using C program------------///
/*
#include<stdio.h>
int main()
{
    int s[3][3],i,j,k,temp;
    printf("\n Enter Matrix \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    printf("\n Orignal Matrix :-\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",s[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=j+1;k<3;k++)
            {
                if(s[i][j]>s[i][k])
                {
                    temp = s[i][j];
                    s[i][j] = s[i][k];
                    s[i][k] = temp;
                }
            }
        }
    }
    printf("\n Matrix after rows in Ascending order :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///==================================================================================================///
///---C program to arrange column elements in ascending order
///Given a matrix, we have to arrange column elements in ascending order using C program------------///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,k,tmp;
    printf("\n Enter MAtrix 3*3 \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Orignal MAtrix :- \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=j+1;k<3;k++)
            {
                if(x[j][i]>x[k][i])
                {
                    tmp=x[j][i];
                    x[j][i]=x[k][i];
                    x[k][i]=tmp;
                }
            }
        }
    }
    printf("\n Matrix after colums in Ascending order :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///============================================================================================///
///-C program to interchange the columns in the matrix
///--------Given a matrix, and we have to interchange the specified columns using C program.
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,n1,n2,temp;

    printf("\n Enter The Matrix Element 3*3 :-  ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Before interchnage the Colums :- \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter Interchange Colums :- \n ");
    scanf("%d%d",&n1,&n2);
    for(i=0;i<3;i++)
    {
        temp=x[i][n1-1];
        x[i][n1-1]=x[i][n2-1];
        x[i][n2-1]=temp;
    }
    printf("\n After interchnage the Colums :- \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///===================================================================================================///
///-----------------C program to interchange the rows in the matrix----------------------------------///
///-----Given a matrix, and we have to interchange the specified rows in the matrix using C program-///
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,n1,n2,temp;

    printf("\n Enter The Matrix Element 3*3 :-  ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%i",&x[i][j]);
        }
    }
    printf("\n Before interchnage the Colums :- \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter Interchange Colums :- \n ");
    scanf("%d%d",&n1,&n2);
    for(i=0;i<3;i++)
    {
        temp=x[n1-1][i];
        x[n1-1][i]=x[n2-1][i];
        x[n2-1][i]=temp;
    }
    printf("\n After interchnage the Colums :- \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int x[5],i,sum=0,max=0;
    printf("\n Enter the 5 Element :- ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<5-1;i++)
    {
        sum=x[i]+x[i+1];
        if(max<sum)
        {
            max=sum;
        }
    }
    printf("\n MAx sum is %d",max);
    return 0;
}
*/














