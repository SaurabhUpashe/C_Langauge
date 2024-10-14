#include <stdio.h>
///------------------1.Simple function---------------------------------------///
/*
#include<stdio.h>
void add();
int main()
{
    printf("\n Main Start ");
    add();
    printf("\n -----");
    add();
    printf("\n main End ");
}
void add()
{
    int a,b,c;
    printf("\n Enter Any TWo Number :- ");
    scanf("%d%d",&a,&b);

    c=a+b;
    printf("\n Addition is %d ",c);
}
*/
///===========================================================================///
///---------------2.Function with Arugment without return type---------------///
/*
#include<stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("\n Enter Any two no :-");
    scanf("%d%d",&a,&b);
    fun(a,b);
}
void fun(int a,int b)
{
    int c;
    c=a+b;
    printf("\n Addition is :- %d",c);
}
*/
///=============================================================================///
///--------------3.Function without Arugment with return type--------------///
/*
#include<stdio.h>
int add();
int main()
{
    int t;
    t=add();
    printf("\n Addition Is = %d ",t);
    t=add();
    printf("\n Addition Is = %d ",t);
}
int add()
{
    int a,b,c;
    printf("\n Enter Any Two Nos :- ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
*/
///=============================================================================///
///---------------4.Function with Arugment with return type--------------------///
/*
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,n;
    printf("\n Enter Any Two No :- ");
    scanf("%d%d",&a,&b);
    n=add(a,b);
    printf("\n Addition Is = %d",n);
}
int add(int x,int y)
{
    int c;
    c=x+y;
    return c;
}
*/
///=============================================================================///
///-------------------------------Recursion------------------------------------///

///---------WAP to calculate the factrial of no------------------------------///
/*
#include<stdio.h>
int fact(int);
int main()
{
    int no,ans;
    printf("\n Enter the no :- ");
    scanf("%d",&no);
    ans=fact(no);
    printf("\n factroil is :-%d",ans);
}
int fact(int no)
{
    if(no==1)
        return 1;
    else
        return(no*fact(no-1));
}
*/
///=======================================================================================///
///----------------	// Using the functions we can write---------------------------------///
/*
#include<stdio.h>
int reverse(int no);
int main()
{
    int no,ansrev=0;
    printf("\n Enter Any No :- ");
    scanf("%d",&no);
    ansrev=reverse(no);
    printf("\n Reverse No is :- %d",ansrev);
}
int reverse(int no)
{
    int rev=0;//rem;
    while(no!=0)
    {
        //rem=no%10;
        rev=(rev*10)+(no%10);
        no=no/10;
    }
    return rev;
}
*/
///======================================================================================///
///----------check no is palindrome or not using function-------------------------------///
/*
#include<stdio.h>
int palindrome(int);
int main()
{
    int no,ans;
    printf("\n Enter any No :- ");
    scanf("%d",&no);

    ans=palindrome(no);
    if(ans==1)
    {
        printf("\n %d is plaindrome Number",no);
    }
    else
    {
        printf("\n %d is not plaindrome Number",no);
    }
}
int palindrome(int no)
{
    int rev=0,rem=0,tem;
    tem=no;
    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }

    if(rev==tem)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/
///================================================================================///
///----------------    //return rev;
/*
#include<stdio.h>
int reverse(int);
char isplaindrome(int);
int main()
{
    int ansrev=0,no;
    char ch=0;
    printf("\n Enter Any No :- ");
    scanf("%d",&no);

    ansrev=reverse(no);
    ch=isplaindrome(no);
    if(ch=='y')
    {
        printf("\n No is plaindrome");
    }
    else
    {
        printf("\n No is not plaindrome");
    }

    printf("\n Reverse no is :- %d",ansrev);
}
int reverse(int no)
{
    int rem=0,rev=0;
    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    return rev;
}
char isplaindrome(int no)
{
    int t;
    t=reverse(no);
    if(t==no)
    {
        return 'y';
    }
    else
    {
        return 'n';
    }
}
*/
///================================================================================///
/*
#include<stdio.h>
int add(int,int);
float div(int,int);
int findmax();
char isprime(int);
int main()
{
    int a,b,ans=0,maxno,no,s,p;
    float ansdiv=0;
    char prime;

    printf("\n Enter Any Two no :- ");
    scanf("%d%d",&a,&b);

    ans=add(a,b);
    printf("\n Addition is:- %d",ans);

    printf("\n Enter Any Two no :- ");
    scanf("%d%d",&s,&p);

    ansdiv=div(s,p);
    printf("\n Division is:- %f",ansdiv);

    maxno=findmax();
    printf("\n Max Non is :- %d",maxno);

    printf("\n Enter Any no :- ");
    scanf("%d",&no);
    prime=isprime(no);
    if(prime=='y')
    {
        printf("\n %d no is prime ",no);
    }
    else
    {
        printf("\n %d no is not prime ",no);
    }
    return 0;
}
int add(int a,int b)
{
    int c=0;
    c=a+b;
    return c;
}
float div(int s,int p)
{
    int d=0;
    d=(float)s/(float)p;//type casting
    return d;
}
int findmax()
{
    int x,y,max;
    printf("\n Enter Any Two No :- ");
    scanf("%d%d",&x,&y);

    max=(x>y)?x:y;
    return max;
}
char isprime(int no)
{
    int d=2,flg=0;

    for(d=2;d<(no/2);d++)
    {
        if(no%d==0)
        {
            flg=1;
            break;
        }
    }
    if(flg==0 || no==2)
    {
        return 'y';
    }
    else
    {
        return 'n';
    }
}
*/
/*
#include<stdio.h>
int fibonacci(int);
void main ()
{
    int n,f;
    printf("Enter the value of n?");
    scanf("%d",&n);
    f = fibonacci(n);
    printf("%d",f);
}
int fibonacci (int n)
{
    if (n==0)
    {
    return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
*/
///===========================================================================================================///
///------// WAP to implement following functions to perform the arithmetic operators and operation expected
/*
#include<stdio.h>
int add(int x,int y)
{
    return (x+y);
}
float div(int x ,int y)
{
    float t;
    t=(float)x/(float)y;
    return t;
}
void findmax(int x,int y)
{
    if(x>y)
    {
        printf("\n X is max");
    }
    else
    {
        printf("\n y is max");
    }
}
char isprime(int no)
{
    int d;
    char flg='y';

    for(d=2;d<=(no/2);d++)
    {
        if(no%2==0)
        {
            flg='n';
            break;
        }
    }
    return flg;
}
int main()
{
    int a,b,ans=0;
    float ansdiv=0.0;
    char prm;

    printf("\n Enter any two number :- ");
    scanf("%d%d",&a,&b);
    ans=add(a,b);
    printf("\n Addition is :- %d",ans);

    ansdiv=div(a,b);
    printf("\n Divisin is :- %f",ansdiv);

    findmax(a,b);

    prm=isprime(a);
    if(prm=='y')
    {
        printf("\n no is prime");
    }
    else
    {
        printf("\n no is not prime");
    }
    return 0;
}
*/
///============================================================================///
///----------------call by value----------------------------------------------///
/*
#include<stdio.h>
void swap(int ,int);
int main()
{
    int a,b;
    printf("\n Entetr the value of a and b :- ");
    scanf("%d %d",&a,&b);
    printf("\n Before swap value A :- %d \t B:- %d",a,b);
    swap(a,b);
    printf("\n After swap value A :- %d \t B:- %d",a,b);

}
void swap(int a,int b)
{
    int tem;
    tem=a;
    a=b;
    b=tem;
}
*/
///=============================================================================///
///------------------call by reference-----------------------------------------///
/*
#include<stdio.h>
void swap(int*,int*);//don't write only data type (int,int)beacuse they  store address of veriable

int main()
{
    int a,b;
    printf("\n Enter the value of a and b :- ");
    scanf("%d %d",&a,&b);
    printf("\n Before swap value A :- %d \t B:- %d",a,b);
    swap(&a,&b);
    printf("\n After swap value A :- %d \t B:- %d",a,b);

}
void swap(int*x,int*y)
{
    int tem=0;
    tem=*x;
    *x=*y;
    *y=tem;
}
*/
///========================================================================///
///----------------// Passing the array as a argument---------------------///
/*
#include<stdio.h>
void display(int []);
int main()
{
    int x[10],i;
    printf("\n Enter The Array element :- ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    display(x);
}
void display(int x[])
{
    int i;
    printf("\n Array element Are :- ");
    for(i=0;i<10;i++)
    {
        printf("\t %d",x[i]);
    }
}
*/
///===========================================================================///
///-----------Now lets see the array is passed by reference or by the value--///
/*
#include<stdio.h>
void incr100(int []);
void display(int []);
int main()
{
    int i,x[5];
    printf("\n Eneter the array Element :- ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Before processing Array ");
    display(x);

    incr100(x);

    printf("\n Before processing Array ");
    display(x);
}
void incr100(int y[])//or (int y[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        y[i]=y[i]+100;
    }
}
void display(int z[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\t %d",z[i]);
    }
}
*/
///==========================================================================///
///-------------- You can write the iO methods as..-------------------------///
/*
#include<stdio.h>
void input(int []);
void display (int []);
int main()
{
    int x[5];

    printf("\n Enter The Arry Element :- ");
    input(x);

    printf("\n Array element Are :- ");
    display(x);
}
void input(int y[])
{
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }
}
void display(int z[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\t %d",z[i]);
    }
}
*/
///============================================================================================================///
///- We know the array is always passed by reference, means it can be collected in the pointer variable also.
///--------Then above program can be written as...
/*
#include<stdio.h>
void input(int *);
void display (int *);

int main()
{
    int x[5];
    printf("\n Enter the Array Element ;- ");
    input(x);

    printf("\n Array Ellement Are :- ");
    display(x);
}
void input(int *p)
{
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
}
void display(int *s)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\t %d ",*(s+i));

    }
}
*/
///=============================================================================================///
///-WAP to get the array of even values from function when an array is passed as a argument----///
/*
#include<stdio.h>
void geteven(int []);
int main()
{
    int x[10],i;
    printf("\ enter the Array Element :- ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    geteven(x);

    printf("\n orignal Array Elements :- ");
    for(i=0;i<10;i++)
    {
        printf("\t %d",x[i]);
    }
}
void geteven(int y[])
{
    int i,ev[10],cnt=0;
    for(i=0;i<10;i++)
    {
        if(y[i]%2==0)
        {
            ev[cnt]=y[i];
            cnt++;
        }
    }

    printf("\n Even Array is :- ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",ev[i]);
    }
}
*/
///========================================================================///
///------Now i want to display the array of even numbers in main( )-------///
///-----------------There are different ways---------------------------///


///----1a - passing the all arguments by reference
/*
#include<stdio.h>
void geteven(int y[],int t[],int *cn)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(y[i]%2==0)
        {
            t[*cn]=y[i];
            (*cn)++;
        }
    }
}
int main()
{
    int x[10],ev[10],i,cnt=0;
    printf("\n Enter the array element :- ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
     geteven(x,ev,&cnt);

     printf("\n Oringnal Array is :- ");
     for(i=0;i<10;i++)
     {
         printf("\t %d",x[i]);
     }

     printf("\n even Array is :- ");
     for(i=0;i<cnt;i++)
     {
         printf("\t %d",ev[i]);
     }
}
*/
///====================================================================================================///
///----------1b - passing the array (by default by reference) as argument and returning the count
/*
#include<stdio.h>
int geteven(int y[],int t[])
{
    int i,cn=0;
    for(i=0;i<10;i++)
    {
        if(y[i]%2==0)
        {
            t[cn]=y[i];
            cn++;
        }
    }
    return cn;
}
int main()
{
    int i,x[10],ev[10],cnt=0;
    printf("\n Enter the Array Element :- ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    cnt=geteven(x,ev);

    printf("\t even Count is :- %d",cnt);
    printf("\n orignal Array :- ");
    for(i=0;i<10;i++)
    {
        printf("\t %d",x[i]);
    }

    printf("\n Even Array :- ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",ev[i]);
    }
}
*/
///==============================================================================///
///=====================using static=========================================///
///-----Returning the array function=======================================///
/*
#include<stdio.h>
int* geteven(int y[],int *cn)///(int*)cause return array so another word using type cast
{
    int i;
    static int ev[10];
    for(i=0;i<10;i++)
    {
        if(y[i]%2==0)
        {
            ev[*cn]=y[i];
            (*cn)++;
        }
    }
    return ev;
}
int main()
{
    int i,x[10],*p,cnt=0;
    printf("\n Enter the Array Element :- ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    p=geteven(x,&cnt);    // <------------------------|
                                                  //  |
    printf("\n Orignal Array is :- ");              //|
    for(i=0;i<10;i++)                               //|
    {                                               //|
        printf("\t %d",x[i]);                       //|
    }                                               //|
    printf("\n Even Array is :- ");                 //|
    for(i=0;i<cnt;i++)                              //|
    {                                               //|
        printf("\t %d",*(p+i));///because the array element store th pointer
    }
}
*/
///==================================================================================///
///-------using global declared-----------------------------------------------------///
/*
#include<stdio.h>
int cnt=0,ev[10],i,x[10];
void geteven(int y[])
{
    for(i=0;i<10;i++)
    {
        if(y[i]%2==0)
        {
            ev[cnt]=y[i];
            cnt++;
        }
    }
}
int main()
{

    printf("\n Enter Array Element :- ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    geteven(x);

    printf("\n Orignala Array is :-  ");
    for(i=0;i<10;i++)
    {
        printf("\t %d",x[i]);
    }
    printf("\n Even Array is :-  ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",ev[i]);
    }

}
*/
///====================================================================================///
/// Passing the pointer to function and return the pointer----------------------------///
/// Enter the N numbers and display the list of even number using function.----------///
/*
#include<stdio.h>
int ec=0;
int* geteven(int *t,int cn)
{
    int i,*r,j;
    for(i=0;i<cn;i++)
    {
        if(*(t+i)%2==0)
        {
            ec++;
        }
    }
    r=(int*)malloc(ec*sizeof(int));

    for(i=0,j=0;i<cn;i++)
    {
        if(*(t+i)%2==0)
        {
            *(r+j)=*(t+i);
            j++;
        }
    }

    return r;
}
int main()
{
    int *p,*q,i,cnt;

    printf("\n Enter the Elememt count :-");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter the Count time Element :-");
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    q=geteven(p,cnt);

    printf("\n Display the original Element :- ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }
    printf("\n Display the Even Element :- ");
    for(i=0;i<ec;i++)
    {
        printf("\t %d",*(q+i));
    }

}
*/
///=================================================================================================///
///----------------------------function pointer-----------------------------------------------///
/*
#include<stdio.h>
void Add(int a,int b)
{
    int c;
    c=a+b;
    printf("\n Sum is :- %d",c);
}
void multi(int a,int b)
{
    int c;
    c=a*b;
    printf("\n Multiplication is :- %d",c);
}
int main()
{
    int x,y;

    void(*fptr)(int ,int );/// that is

    printf("\n Enter the X and Y ;- ");
    scanf("%d%d",&x,&y);

    Add(x,y);
    multi(x,y);

    fptr=&Add;
    fptr(x,y);

    fptr=&multi;
    fptr(x,y);
}
*/
///========================================================================================///
///--------calling the function from the function call: (nested call to function)---------///
///----------------find the max in 3 veriable--------------------------------------------///
/*
#include<stdio.h>
int findmax(int,int);
int main()
{
    int a,b,c,max;
    printf("\n Enter The value for a ,b And c:- ");
    scanf("%d%d%d",&a,&b,&c);

    max=findmax(findmax(a,b),c);

    printf("\n Max no is :- %d",max);

}
int findmax(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
//*/
/////========================
//void display(int);
//int main()
//{
//     int i,a;
//    for(i=0;i<3;i++)
//
//        display(a);
//
//}
//void display(a)
//{
//    static int x=5;
//    int y=5;
//    x++;
//    y++;
//    printf("\n x=%d",x);
//    printf("\n y=%d",y);
//}
//
///========================================================================================///
///-------------1. Write a C program to find cube of any number using function.-----------///
/*
#include<stdio.h>
void cube(int);
int main()
{
    int no;
    printf("\n Enter The Any No :- ");
    scanf("%d",&no);
    cube(no);

}
void cube(int no)
{
    printf("Cube is %d",no*no*no);
}
*/
///==============================================================================================///
///-------2. Write a C program to find diameter, circumference and area of circle using functions.
/*
void diameter();
void Circum();
void area();
int main()
{
    int r;
    printf("\n Enter Radius :- ");
    scanf("%d",&r);
    diameter(r);
    circum(r);
    area(r);
}
void diameter(int y)
{
    float d;
    d=2*y;
    printf("\n Diameter Is :-%f ",d);
}
void circum(int z)
{
    float c;
    c=2*3.14*z;
    printf("\n circumference Is :- %f",c);
}
void area(int x)
{
    float a;
    a=3.14*x*x;
    printf("\n Area is :- %f",a);
}
*/
///=======================================================================================///
///----3. Write a C program to find maximum and minimum between two numbers using functions
/*
#include<stdio.h>
void max(int a,int b)
{
    (a>b)?printf("\n Max no is %d",a):printf("\n %d is max",b);
}
void min(int a,int b)
{
    (a<b)?printf("\n Min no is %d",a):printf("\n %d is min",b);
}
int main()
{
    int a,b,nmin,nmax;
    printf("\n Enter Any Two No ");
    scanf("%d%d",&a,&b);
    max(a,b);
    min(a,b);
}
*/
///============================================================================================///
///-----------4. Write a C program to check whether a number is even or odd using functions.
/*
#include<stdio.h>
void even(int x,int y)
{
   (x%2==0)? printf("\n %d is even no",x):printf("\n %d is odd no",x);
}
void odd(int x,int y)
{
    (y%2==1)? printf("\n %d is odd no",y):printf("\n %d is even no",y);
}
int main()
{
    int a,b;
    printf("\n Enter Any Two no :- ");
    scanf("%d%d",&a,&b);
    even(a,b);
    odd(a,b);
}
*/
///=============================================================================================================///
///-----5. Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
/*
#include<stdio.h>
void prime(int no)
{
    int d=2,flg=0;
    for(d=2;d<(no/2);d++)
    {
        if(no%d==0)
        {
            flg=1;
            break;
        }
    }
    if(flg==0 && d==2)
    {
        printf("\n %d Its prime no\n ",no);
    }
    else
    {
        printf("\n %d Its not prime no\n",no);
    }
}
void armstrong(int no)
{
    int i,cnt=0,tmp,ans=0,sum=0,rem;
    tmp=no;
    while(no!=0)
    {
        cnt++;
        no=no/10;
    }
    while(no!=0)
    {
        rem=no%10;
        ans=1;
        for(i=0;i<cnt;i++)
        {
            ans=ans*rem;

        }
        sum=sum+ans;
        no=no/10;
    }
    no=tmp;
    if(sum==tmp)
    {
        printf("\n %d is armstrong No\n ",tmp);
    }
    else
    {
        printf("\n %d is not armstrong No\n ",tmp);
    }
}
void perfect(int no)
{
    int i,sum=0;
    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==no)
    {
        printf("%d is perfect no\n",no);
    }
    else
    {
        printf("%d is not perfect no\n",no);
    }
}
int main()
{
    int no;
    printf("\b Enter Any No :- ");
    scanf("%d",&no);
    prime(no);
    armstrong(no);
    perfect(no);
}
*/
///==============================================================================================///
///----6. Write a C program to find all prime numbers between given interval using functions.---///
/*
#include<stdio.h>
void prime(int n)
{
    int i,no,d,flg=0;
    for(i=1;i<=n;i++)
    {
        no=i;
        d=2;
        flg=0;
        for(d=2;d<=(no/2);d++)
        {
            if(no%d==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0 && no!=1 || no==2)
        {
            printf("\n %d",no);
        }
    }
}
int main()
{
    int i,n;
    printf("\n Enter N Numbers :- ");
    scanf("%d",&n);
    prime(n);
}
*/
///======================================================================================================///
///------------7. Write a C program to print all strong numbers between given interval using functions.
/*
#include<stdio.h>
void strong(int n)
{
    int i,j,no,rem,fact,sum=0,temp;

    for(j=1;j<=n;j++)
    {
        no=j;
        sum=0;
        while(no!=0)
        {
            rem=no%10;
            fact=1;
            for(i=1;i<rem;i++)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            no=no/10;
        }
        if(sum==j)
        {
            printf("\n %d",j);
        }
    }
}

int main()
{
    int n;
    printf("\n Enter N Number :- ");
    scanf("%d",&n);
    strong(n);
}
*/
///======================================================================================================///
///------------8. Write a C program to print all Armstrong numbers between given interval using functions.
/*
#include<stdio.h>
void armstrong(int n)
{
    int i,j,cnt=0,rem,no,temp,sum,fact;
    for(j=1;j<=n;j++)
    {
        no=j;
        cnt=0;
        while(no!=0)
        {
            cnt++;
            no=no/10;
        }
        no=j;
        sum=0;
        while(no!=0)
        {
            rem=no%10;
            fact=1;
            for(i=0;i<cnt;i++)
            {
                fact=fact*rem;
            }
            sum=sum+fact;
            no=no/10;
        }
        no=j;
        if(sum==j)
        {
            printf("\n %d",j);
        }
    }
}
int main()
{
    int n;
    printf("\n Enter N Number :- ");
    scanf("%d",&n);
    armstrong(n);
}
*/
///========================================================================================///
///----9. Write a C program to print all perfect numbers between given interval using functions.
/*
#include<stdio.h>
void perfect(int n)
{
    int i,j,no,sum=0;
    for(j=1;j<=n;j++)
    {
        no=j;
        sum=0;
        for(i=1;i<=(no/2);i++)
        {
            if(no%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==j)
        {
            printf("\n %d",j);
        }
    }
}
int main()
{
    int n;
    printf("\n Enter N Number :- ");
    scanf("%d",&n);
    perfect(n);
}
*/
///=====================================================================================///
///---10.Write a C program to find power of any number using recursion.
/*
#include<stdio.h>
int power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else
    {
        return x*power(x,y-1);
    }
}
int main()
{
    int x,y,pans;
    printf("\n Enter x and y :- ");
    scanf("%d%d",&x,&y);
    pans=power(x,y);
    printf("\n Ans is :- %d",pans);
}

///=============================================================================================///
///--------12.Write a C program to print all even or odd numbers in given range using recursion.
/*
#include<stdio.h>
int even(int i,int n)
{

    if(i>n)
    {
        return ;
    }
     if(i%2==0)
        printf("%5d",i);

        even(i+1,n);
}
int odd(int i,int n)
{
    if(i>n)
    {
        return;
    }
    if(i%2==1)
    {
        printf("===%3d",i);
        odd(i+i,n);
    }
}
int main()
{
    int n,evenno,i=1,oddno;
    printf("\n Enter N Number :- ");
    scanf("%d",&n);
    evenno=even(i,n);
    oddno=odd(i,n);
    return 0;
}
*/
///============================================================================================///
///--------15.Write a C program to find reverse of any number using recursion.----------------
/*
#include<stdio.h>
int rev(int no,int rev)
{
    if(no==0)
    {
        return rev;
    }
    else
    {
        rev = rev*10 + (no % 10);
        return rev(no/10,rev);
    }
}
int main()
{
    int no,revno;
    printf("\n Enter Any NO :- ");
    scanf("%d",&no);

    revno=rev(no,0);
    printf("\n %d and reverse is %d",no,revno);
}
*/

void incr()
{
    static int i=5;		// see the output with and without static
    printf("\n i=%d",i++);

}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        incr();
    }
    return 0;
}


















