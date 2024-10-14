#include <stdio.h>

///====================================================================================================================///
///=================================USING FOR() LOOP ==================================================================///
///---------------WAP TO all natural no from 1 to n-------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter no :-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
     printf("\n %d",i);

    }
    return 0;
}
*/
///==================================================================================================================///
///--WAP TO all natural no reverse from n to 1----------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int r,n;
    printf("\n Enter No :-");
    scanf("%d",&n);

    for(r=n;r>=1;r--)
    {
        printf("\n %d",r);

    }
    return 0;
}
*/
///===============================================================================================================///
///----WAP to print all alphabet from a to z----------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("\n alphabet from a to z :- ");

    for(ch='a';ch<='z';ch++)
    {
        printf("\n %c",ch);
    }
    return 0;
}
*/
///==============================================================================================================///
///---WAP to find sum of all natural no between 1 to n--------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("\n Enter Natural No :-");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum=sum+i;//printf jr curly baracket chya baher asel tr only total sum dhakhavte and ata asel all sum dhavte
    }

    printf("\n %d",sum);

    return 0;
}
*/
///=============================================================================================================///
///---WAP to find sum of all even no between 1 to n-------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("\n Enter no");
    scanf("%d",&n);

    for(i=0;i<n;i=i+2)
    {
        sum=sum+i;
        printf("\n %d",sum);

    }
    return 0;
}
*/
///===========================================================================================================///
///---WAP to find sum of all odd no between 1 to n-------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int o,sum=0,n;
    printf("\n Enter Odd No 1 To N :-");
    scanf("%d",&n);
    for(o=1;o<=n;o=o+2)

        sum=sum+o;// if() one statement in block of code so do not need to curly bracket
                   //but more than one statement curly baracet is compalsary

    printf("\n %d",sum);
    return 0;
}
*/
///=======================================================================================================///
///---WAP to print multipliction table for any number---------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,ans=0;
    printf("\n Enter any No");
    scanf("%d",&no);

    for(i=1;i<=10;i++)//i++=(i=i+1)
    {
        ans=no*i;
        printf("\n %d",ans);
    }

    return 0;
}
*/
///=======================================================================///
///-----------WAP TO ADD 5 TO 15 NOS-------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=5;i<=15;i++)
    {
        sum=sum+i;
    }
    printf("\n %d ",sum);
    return 0;
}
*/
///=========================================================================///
///
/*
#include<stdio.h>
int main()
{
    int no,tot=0,i;

    for(i=1; i<=5; i++)
    {

        printf("\n Enter no");
        scanf("%d",&no);
        tot=tot+no;
    }
    printf("\n total of 5 no %d",tot);
    return 0;
}
*/
///WAP to display hii 7 times --------------------------------------
/*
#include<stdio.h>
int main()
{
    int m;
    for(m=0;m<7;m=m++)
    {
        printf("\n Hii");
    }

    return 0;
}
*/
///WAP to display hii 7 times --------------------------------------
/*
#include<stdio.h>
int main()
{
    int m;
    for(m=10;m<17;m=m+2)
    {
        printf("\n Hii");
    }

    return 0;
}
*/
///WAP to display hii 7 times --------------------------------------
/*
#include<stdio.h>
int main()
{
    int m;
    for(m=10;m<=70;m=m+10)
    {
        printf("\n Hii");
    }

    return 0;
}
*/
///--------------------------------------------------------------
/// WAP to display 21 to 30 nos
/*
int main()
{
    int n;
    for(n=21;n<=30;n++)
    {
        printf("\n %d",n);
    }
    return 0;
}
*/
///===============================================================///
///--WAP TO COUNT NO OF DIGIT IN A NUMBER-------------------------///
/*
#include<stdio.h>
int main()
{
    int no,cnt=0, rem=0;
    printf("\n enter no");
    scanf("%d",&no);

    for( ;no!=0; )
    {
        rem=no%10;
        cnt++;
        no=no/10;

    }
    printf("\n %d is addition",cnt);
    return 0;
}
*/
///======================================================================///
///--WAP to display hii 10 times-----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("\n hii",i);
    }
    return 0;

}
*/
///==========================================================================///
///--WAP to add 1 to 10 nos--------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("\n %d",i);

    }
    return 0;
}
*/
///============================================================================///
///---WAP to add even or odd nos from 1to 10 using loop------------------------///
/*
#include<stdio.h>
int main()
{
    int i,t1=0,t2=0;

    for(i=1;i<=10;i=i+2)
    {
        t1=t1+i;
    }

    printf("\n sum odd numbers: %d ",t1);

    for(i=0;i<=10;i=i+2)
    {
        t2=t2+i;
    }
    printf("\n sum even numbers: %d ",t2);
    return 0;

}
*/
///===================================================================///
///--WAP to add any five nos entered throught keyboard----------------///
/*
#include<stdio.h>
int main()
{
    int no,sum=0,i;


    for(i=1;i<=5;i++)
    {
        printf("\n enter no");
        scanf("%d",&no);
        sum=sum+no;
    }
    printf("\n %d addition of no",sum);
    return 0;
}
*/
///=================================================================================///
///--WAP to add all digit of a number----------------------------------------------//
/*
#include<stdio.h>
int main()
{
    int i,no,ans=0,rem=0;
    printf("\n Enter no");
    scanf("%d",&no);

    for(i=1;no!=0; )
    {
        rem=no%10;
        ans=ans+rem;
        no=no/10;
    }
    printf("\n addition is %d",ans);
    return 0;
}
*/
///================================================================================///
///---WAP to display hii five times-----------------------------------------------//
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("\n hiii");
    }

    return 0;
}
*/
///==================================================================================/
///---WAP to display hii five times-----------------------------------------------//

/*
#include<stdio.h>
int main()
{
    int i;
    for(i=5;i<10;i++)
    {
        printf("\n hii");
    }
    return 0;
}
*/
///==================================================================================///
///---WAP to display hii five times-----------------------------------------------//

/*
#include<stdio.h>
int main()
{
    int i;
    for(i=200;i<250;i=i+10)
    {
        printf("\n hii");
    }
    return 0;
}
*/
///================= Reverese==================================================================///
///---WAP to display hii 10 times-----------------------------------------------//

/*
#include<stdio.h>
int main()
{
    int p;
    for(p=200;p>100;p=p-10)
    {
        printf("\n hello world");
    }
    return 0;

}
*/
///========================================================================================///
///---WAP to display 1 to 10 nos----------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i=i+2)
    {
        printf("\n odd no %d",i);

    }
    return 0;

}
*/
///========================================================================================///
///---WAP to add even and odd nos from seperatly-------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,sum=0,add=0;
    for(i=1;i<=10;i=i+2)
    {
        sum=sum+i;
    }
    for(i=0;i<=10;i=i+2)
    {
        add=add+i;
    }
     printf("\n sum of odd no %d",sum);
     printf("\n add of even no %d",add);
    return 0;
}
*/
///==============================================================///
///----way 2-----------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,sum=0,add=0;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        else
        {
            add=add+i;
        }

    }
     printf("\n sum of even no %d",sum);

     printf("\n sum of odd no %d",add);

    return 0;
}
*/
///==================================================================================================///
///---WAP to display hii 10 times------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("\n HIII");
    }
    return 0;
}
*/
///===============================================================================================///
///--WAP to add 1 to 10 nos----------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
    }
    printf("\n addition of 1 to 10 nos :- %d",sum);
    return 0;
}
*/
///================================================================================================///
///------WAP to add even and odd nos from 1 to 10 using loop---------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,t1=0,t2=0;

    for(i=1;i<=10;i=i+2)
    {
        t1=t1+i;
    }

    printf("\n sum of odd no :-%d",t1);

    for(i=0;i<=10;i=i+2)
    {
        t2=t2+i;
    }

    printf("\n sum of even no :-%d",t2);

    return 0;
}
*/
///===========================================================================================///
///---WAP to add five no entered throught keyboard and add it--------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,sum=0;
    printf("\n Enter five no :-");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&no);
        sum=sum+no;
    }
    printf("\n Addition of five no %d",sum);
    return 0;
}
*/
///=============================================================================================///
///----add even and odd no sperately which are entered throught keyboard------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,s1=0,s2=0;
    printf("\n Enter no :- ");
    for(i=1;i<=12;i++)
    {
        scanf("%d",&no);
        if(no%2==0)
        {
            s1=s1+no;
        }
        else
        {
            s2=s2+no;
        }
    }
    printf("\n addition of even no :-%d",s1);

    printf("\n addition of odd no :-%d",s2);

    return 0;
}
*/
///=============================================================================================///
///----WAP to perform digit count--------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,cnt=0,rem=0;
    printf("\n Enter any no");
    scanf("%d",&no);

    for( ;no!=0;)
    {
      //rem=no%10;
       cnt++;
       no=no/10;
    }
    printf("\n Count of digit %d",cnt);
    return 0;
}
*/
///==================================================================================================///
///---WAP to add all digit of a number---------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no=0,rem=0,ans=0;

    printf("\n Enter no");
    scanf("%d",&no);

    for(i=0;no!=0;i++)
    {
        rem=no%10;
        ans=ans+rem;
        no=no/10;
    }

    printf("\n addition of even no %d",ans);
    return 0;
}
*/
///========================================================================///
///---WAP to add even and odd digit of entered seperatly seperatly (ex.47569==4+6=10;;7+5+9=21)-----///
/*
#include<stdio.h>
int main()
{
    int i,no,rem,esum=0,osum=0;

    printf("\n Enter no");
    scanf("%d",&no);

    for(;no!=0;)
    {   rem=no%10;
        no=no/10;
        if(rem%2==0)
        {

            esum=esum+rem;
        }
        else
        {

            osum=osum+rem;
        }
    }

    printf("\n addition of even no %d",esum);
    printf("\n addition of odd no %d",osum);

    return 0;
}
*/
///============================================================================================///
///----------WAP to calculate x^y-------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i ,x,y,ans=1;
    printf("\n Enter no");
    scanf("%d%d",&x,&y);

    for(i=0;i<y;i++ )
    {
        ans=ans*x;
    }
    printf("\n x^y is :-%d",ans);
    return 0;
}
*/
///================================================================================================///
///----WAP to display multi table of no enter throught keyboard------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,ans=1;
    printf("\n Enter any no");
    scanf("%d",&no);

    for(i=1;i<=10;i++)
    {
        ans=no*i;
        printf("\n %d",ans);
    }
    return 0;
}
*/
///==============================================================================================///
///---Write a C program to find first and last digit of a number---------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,rem,rev=0,last=0,first=0;
    printf("\n Enter No :- ");
    scanf("%d",&no);//1234

    for( ;no!=0; )
    {
        rem=no%10;//4 3  2  1
        rev=(rev*10)+rem;//4 43 432  4321
        if(rem==rev)//4==4 43==4 432==4  4321==4
        {
            last=rev;//4
        }
        no=no/10;//123  12 1 0
        if(no==0)
        {

            first=rem;//1
        }

    }
    printf("\n first digit is %d ",first);

    printf("\n last digit is %d",last);
    return 0;

}
*/
///========================================================================================///
///---WAP to find sum of first and last digit of a number---------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,rev=0,last=0,first=0,ans=0;
    printf("\n Enter No :-");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;

        if(rem==rev)
        {
            last=rev;
        }
         no=no/10;
        if(no==0)
        {
            first=rem;
        }

    }
     ans=last+first;

    printf(" \n Last digit :- %d",last);

    printf(" \n first digit :- %d",first);

    printf(" \n Sum of Last and first digit :- %d",ans);
    return 0;

}
*/
///=======================================================================================///
///--WAP to swap first and last digit of a number----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,rev=0,last=0,first=0;
    printf("\n Enter No");
    scanf("%d",&no);

    for( ;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            last=rev;
        }
        no=no/10;
        if(no==0)
        {
            first=rem;
        }
    }
    printf("\n Before swap digit last:-%d \t first:-%d",last,first);

    last=last+first;
    first=last-first;
    last=last-first;

    printf("\n after swap digit last:-%d \t first:-%d",last,first);
    return 0;
}
*/
///===================================================================================///
///---WAP to calculate sum of digits of a number------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,ans=0,rem;
    printf("\n Enter no");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        ans=ans+rem;
        no=no/10;
    }
    printf("\n Sum of digit %d",ans);
    return 0;
}
*/
///====================================================================================///
///----WAP to calculate product of digit of a number---------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,ans=1;
    printf("\n Enter No :-");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        ans=ans*rem;
        no=no/10;
    }
    printf("\n Product of digit :- %d",ans);
    return 0;
}
*/
///========================================================================================///
///-WAP to enter a number and print its reverse.------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,rev=0,ans=0;
    printf("\n Enter no :-");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    printf("\n Reveres NO:- %d",rev);


    return 0;
}
*/
///========================================================================================///
///---to check whether a number is Prime number or not-------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,flg=0;
    printf("\n Enter no");
    scanf("%d",&no);

    for(i=2;i<=no/2;i++)
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }
    }
    if(flg==0)
    {
        printf("\n Enter no:- %d is prime",no);
    }
    else
    {
        printf("\n Enter no:- %d is Not prime",no);
    }
    return 0;
}
*/
///=====================================================================================///
///--Write a C program to check whether a number is palindrome or not-------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,rev=0,temp;
    printf("\n Enter No :-");
    scanf("%d",&no);

    temp=no;
    for(;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;

    }
    no=temp;
    if(no==rev)
    {
        printf("\n Its palindrome no");
    }
    else
    {
        printf("\n  Its not palindrome no");
    }

    return 0;
}
*/
///==============================================================================///
///--WAP to enter any no and swap first and last digit---(ex;-1234 ,ans=4231)---///
/*
#include<stdio.h>
int main()
{
    int no,i,nn=0,rev=0,rem,fd,ld,cnt=0;

    printf("\n Enter No :-");
    scanf("%d",&no);

    for( ;no!=0;)
    {
        rem=no%10;
        cnt++;
        rev=(rev*10)+rem;

        if(rem==rev)
        {
            ld=rev;
        }
        no=no/10;
        if(no==0)
        {
            fd=rem;
        }
    }
        printf("\n Cnt is %d",cnt);
        printf("\n rev no is %d",rev);

        for(nn=0,i=1;rev!=0;i++)
        {
            rem=rev%10;
            if(rem==fd && i==1)
            {
                nn=(nn*10)+ld;
            }
            else if(rem==ld && cnt==i)
            {
                nn=(nn*10)+fd;
            }
            else
            {
                nn=(nn*10)+rem;
            }
            rev=rev/10;
        }

        printf("\n fd is %d \t ld is %d \t new no is %d",fd,ld,nn);
        return 0;
}
*/
///===========================================================================///
///--Write a C program to display divisible by 3 & 5 from 1 to 100------------///
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0 && i%5==0)
        {
           printf("\n No is divible 3 and 5 :-%d",i);
        }
    }
    return 0;
}
*/
///===============================================================================================///
///--Enter any no find accurance of digit 7 (ex:- 1274717)--------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,cnt=0;
    printf("\n Enter any no");
    scanf("%d",&no);

    for( ;no!=0; )
    {
        rem=no%10;
        if(rem==7)
        {
            cnt++;
        }
        no=no/10;
    }

    printf("\n Accurance of 7 digit %d:-",cnt);
    return 0;
}
*/
///==========================================================================================///
///--WAP to add alternative digit of entered number using flag----------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem ,flg=0,s1=0,s2=0;
    printf("\n Enter any no:-");
    scanf("%d",&no);

    for( ;no!=0;)
    {
        rem=no%10;
        if(flg==0)
        {
            s1=s1+rem;
            flg=1;
        }
        else
        {
            s2=s2+rem;
            flg=0;
        }
        no=no/10;
    }
    printf("\n Addition of Alternative no %d",s1);

    printf("\n Addition of Alternative no %d",s2);

    return 0;
}
*/
///============================================================================================///
///---WAP to enter any no find its digit count and add digit^cnt-------------------------------------///
///--------ex=153 ----> digit cnt=3 ----->1^3+5^3+3^3------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,rem,cnt=0,ans=0,temp,sum;

    printf("\n Enter Any No");
    scanf("%d",&no);

    temp=no;

    for( ; no!=0;cnt++,no=no/10)

    printf("\n Digit of count is %d",cnt);

    no=temp;

    for( ;no!=0;)
    {
        rem=no%10;
        sum=1;

        for(i=1;i<=cnt;i++)
        {
            sum=sum*rem;
        }
        ans=ans+sum;
        no=no/10;

    }
    printf("\n Ans is %d",ans);
    return 0;
}
*/
///==============================================================================================///
///----WAP to enter any no and find maximum digit in number-------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,max=0;
    printf("\n Enter Any No");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        if(max<rem)
        {
            max=rem;
        }
        no=no/10;
    }
    printf("\n Max no is %d",max);
    return 0;
}
*/
///==============================================================================================///
///---WAP to check whether no is armstrong or not------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i, no,rem,cnt=0,a,sum,temp;
    printf("\n Enter Any no");
    scanf("%d",&no);

    temp=no;

    for(;no!=0;cnt++,no=no/10);

    printf("\n count is %d",cnt);

    no=temp;
    for(;no!=0;)
    {
        rem=no%10;
        a=1;
        for(i=1;i<=cnt;i++)
        {
            a=a*rem;//x^y--->a=a*x
        }
        sum=sum+a;
        no=no/10;
    }
    no=temp;
    if(temp==sum)
    {
        printf("\n %d is armstrong no",temp);
    }
    else
    {
        printf("\n %d is not armstrong no",temp);
    }

    return 0;
}
*/
///======================================================================================///
///----Write a C program to print all ASCII character with their values------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    for(;i<256;i++)
    {
        printf("\n %c----> %d",i,i);
    }
    return 0;
}
*/
///=======================================================================================///
///---Write a C program to find power of a number using for loop-------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x,y,ans=1;
    printf("\n Enter No :-");
    scanf("%d%d",&x,&y);
     for(i=1;i<=y;i++)
     {
         ans=ans*x;
     }
     printf(" %d power is %d",x,ans);
     return 0;
}
*/
///=============================================================================================///
///----Write a C program to find all factors of a number----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            printf("\n %d factors is %d",no,i);
        }
    }
    return 0;
}
*/
///=====================================================================================///
///-----Write a C program to calculate factorial of a number---------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,fact=1;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    if(no<0)
    {
        printf("\n Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        for(i=1;i<=no;i++)
        {
            fact=fact*i;
        }
    }
    printf("\n %d factorial is %d",no,fact);
    return 0;
}
*/
///===========================================================================================///
///-------Write a C program to check whether a number is Prime number or not------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,flg=0,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    temp=no;
    for(i=2;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }
    }
    no=temp;
    if(flg==0 && no!=0 || no==2)
    {
         printf("\n %d is prime no",temp);
    }
    else
    {
         printf("\n %d is not prime no",temp);
    }
     return 0;
}
*/
///=========================================================================================///
///----Write a C program to print all Prime numbers between 1 to n-------------------------///
/*
#include<stdio.h>
int main()
{
    int i,d,n,no,flg=0,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        no=i;
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
            printf("\n %d",i);
        }
    }
    return 0;
}
*/
///============================================================================================///
///-----Write a C program to find sum of all prime numbers between 1 to n---------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,n,d,flg=0,sum=0;
    printf("\n Enter Any No :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        no=i;
        flg=0;
        for(d=2;d<=(no/2);d++)
        {
            if(no%d==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0 && no!=1||no==2)
        {
            printf("\n %d",i);
            sum=sum+no;
        }
    }
    printf("\n Sum of All Prime :- %d",sum);
    return 0;
}
*/
///========================================================================================///
///-------Write a C program to check whether a number is Armstrong number or not-----------///
/*
#include<stdio.h>
int main()
{
    int i,no,rem,cnt=0,temp,a,sum=0;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    temp=no;
    for(i=1;no!=0;)
    {
        cnt++;
        no=no/10;
    }
    printf("\n Count is %d",cnt);
    no=temp;
    for(;no!=0;)
    {
        rem=no%10;
        a=1;
        for(i=1;i<=cnt;i++)
        {
            a=a*rem;
        }
        sum=sum+a;
        no=no/10;
    }
    no==temp;
    if(sum==temp)
    {
        printf("\n %d is armstrong no",temp);
    }
    else
    {
        printf("\n %d is not armstrong no",temp);
    }
    return 0;
}
*/
///========================================================================================///
///-----Write a C program to print all Armstrong numbers between 1 to n-------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,rem,n,j,cnt=0,temp,sum=0,a;
    printf("\n Enter Any No :-");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
       no=j;
       cnt=0;
       for(;no!=0;)
       {
           cnt++;
           no=no/10;
       }
      // printf("\n Count is %d",cnt);
       no=j;
       sum=0;
       for(;no!=0;)
       {
           rem=no%10;
           a=1;
           for(i=1;i<=cnt;i++)
           {
               a=a*rem;
           }
           sum=sum+a;
           no=no/10;
       }
       no=j;
       if(sum==no)
       {
           printf("\n %d",j);
       }
    }
    return 0;
}
*/
///===========================================================================================///
///---Write a C program to check whether a number is Perfect number or not--------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,sum=0;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==no)
    {
        printf("\n %d is perfect no ",no);
    }
    else
    {
        printf("\n %d is not perfect no",no);
    }
    return 0;
}
*/
///=========================================================================================///
///-----Write a C program to print all Perfect numbers between 1 to n----------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,n,j,sum=0;
    printf("\n Enter Any No :-");
    scanf("%d",&n);

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
    return 0;
}
*/
///=============================================================================================///
///------Write a C program to check whether a number is Strong number or not-------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,rem,sum=0,fact,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    temp=no;
    for(;no!=0;)
    {
        rem=no%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        no=no/10;
    }
    no=temp;
    if(sum==no)
    {
        printf("\n %d is strong no",no);
    }
    else
    {
        printf("\n %d is not strong no",no);
    }
    return 0;
}
*/
///=============================================================================================///
///---Write a C program to print all Strong numbers between 1 to n------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,j,n,no,rem,sum=0,fact=1,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        no=j;
        sum=0;
        for(;no!=0;)
        {
            rem=no%10;
            fact=1;
            for(i=1;i<=rem;i++)
            {
                fact=fact*i;
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
    return 0;
}
*/
///===========================================================================================///
///===========================USING WHILE() LOOP===============================================///
///---WAP to display 1 to 10  nos-------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    i=1;
    while(i<=10)
    {
        printf("\n %d",i);
        i++;
    }
    return 0;
}
*/
///============================================================================================///
///--WAP to display 1 to 10  nos(reverse)-----------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    i=10;
    while(i>=1)
    {
        printf("\n %d",i);
        i--;
    }
    return 0;
}
*/
///===============================================================================================///
///---WAP to display multiplication table enter no throught keyboard------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,ans=1;
    printf ("\n Enter Any no :-");
    scanf("%d",&no);
    i=1;
    while(i<=10)
    {
        ans=no*i;
        printf("\n %d",ans);
        i++;
    }
    return 0;

}
*/
///-------------------------method second--------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no;
    printf ("\n Enter Any no :-");
    scanf("%d",&no);
    i=1;
    while(i<=10)
    {

        printf("\n %d",(i*no));
        i++;
    }
    return 0;

}
*/
///--------------------------method third--------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no;
    printf ("\n Enter Any no :-");
    scanf("%d",&no);
    i=1;
    while(i<=10)
    {

        printf("\n %d*%d---> %d",no,i,(i*no));
        i++;
    }
    return 0;

}
*/
///------------------------------method four-(using multipliier and itereter seperately)---------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,m;
    printf ("\n Enter Any no :-");
    scanf("%d",&no);
    i=1;
    m=1;
    while(i<=10)
    {

        printf("\n %d*%d---> %d",no,m,(m*no));
        i++;
        m++;
    }
    return 0;

}
*/
///===========================================================================================///
///---WAP to calculate the factroial of entered number--1*2*3*4*5=120--------------------------------------///
/*
#include<stdio.h>
int main()
{
   int i ,no,fact=1;
   printf("\n Enter Any no :-");
   scanf("%d",&no);
   i=1;
   while(i<=no)
   {
       fact=fact*i;
       i++;
   }
   printf("\n factrial of %d is %d",no,fact);
   return 0;

}
*/
///---WAP to calculate the factroial of entered number (reverse)-5*4*3*2*1=120---------------------------------------///
/*
#include<stdio.h>
int main()
{
   int i,no,fact=1;
   printf("\n Enter Any no :-");
   scanf("%d",&no);
   i=no;
   while(i>=1)
   {
       fact=fact*i;
       printf("\n factrrial of %d is %d",no,fact);
       i--;
   }
   return 0;

}
*/
///========================================================================================///
///--WAP to display the n^2 and n^3 where is in range 1 to 10------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    i=1;
    while(i<=10)
    {
        printf("\n %d \t %d \t %d",i,(i*i),(i*i*i));
        i++;
    }
    return 0;
}
*/
///=========================================================================================///
///----WAP to find the missing digit of entered no------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,dg,flg,temp;
    printf("\n Enter Any no :-");
    scanf("%d",&no);

    temp=no;

    dg=0;
    while(dg<=9)
    {
       no=temp;
       flg=0;
       while(no!=0)
       {
           rem=no%10;
           if(rem==dg)
           {
               flg=1;
               break;
           }
           no=no/10;
       }
       if(flg==0)
       {
           printf("\n %d",dg);
       }
       dg++;

    }
    return 0;

}
*/
///==============================================================================================///
///----WAP to find the frequency of each digit or occurance of every digit of entered no--------///
/*
#include<stdio.h>
int main()
{
    int no,rem,cnt=0,flg,temp,dg;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    temp=no;
    dg=0;
    while(dg<=9)
    {
        no=temp;
        cnt=0;
        while(no!=0)
        {
            rem=no%10;

            if(rem==dg)
            {
               cnt++;
            }
            no=no/10;
        }
        if(cnt>=1)
        {
            printf("\n digit %d count is %d",dg,cnt);
        }
        dg++;
    }
    return 0;
}
*/
///===============================================================================================///
///---WAP to check whether no is armstrong or not------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i, no,rem,cnt=0,ans,sum,temp;
    printf("\n Enter Any no");
    scanf("%d",&no);

    temp=no;

    while(no!=0)
    {
        cnt++;
        no=no/10;
    }

    printf("\n count is %d",cnt);

    no=temp;
    while(no!=0)
    {
        rem=no%10;
        sum=1;
        i=1;
        while(i<=cnt)
        {
            sum=sum*rem;
            i++;
        }
        ans=ans+sum;
        no=no/10;

    }
    no=temp;

    if(temp==ans)
    {
        printf("\n %d is armstrong no",temp);
    }
    else
    {
        printf("\n %d is not armstrong no",temp);
    }

    return 0;
}
*/
///============================================================================================///
///---WAP to generate max using the digit of entered no----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int dg,no,rem,max=0,temp;
    printf("\n Enter Any No :- ");
    scanf("%d",&no);

    temp=no;

    dg=9;
    while(dg>=0)
    {
        no=temp;
        while(no!=0)
        {
           rem=no%10;
           if(rem==dg)
          {
            max=(max*10)+rem;
          }
          no=no/10;
        }
        dg--;
    }
    printf("\n Max no is %d",max);
    return 0;
}
*/
///========================================================================================///
///----WAP to generate even max &odd max no entered throught keyboard----------------------///
/*
#include<stdio.h>
int main()
{
    int dg,no,rem,max,temp,emax=0,omax=0;
    printf("\n Enter Any No :- ");
    scanf("%d",&no);
    temp=no;
    dg=9;
    while(dg>=0)
    {
        no=temp;
        while(no!=0)
        {
            rem=no%10;
            if(rem==dg)
            {
                if(rem%2==0)
                {
                    emax=(emax*10)+rem;
                }
                else
                {
                    omax=(omax*10)+rem;
                }
            }
            no=no/10;
        }
        dg--;
    }
    printf("\n Even max no is %d ",emax);
    printf("\n odd max no is %d",omax);
    return 0;
}
*/
///===========================================================================///
///---WAP to generate minmum number using the digit of entered no----------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,min=0,dg,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    temp=no;
    dg=0;
    while(dg<=9)
    {
        no=temp;
        while(no!=0)
        {
            rem=no%10;
            if(rem==dg)
            {
                min=(min*10)+rem;
            }
            no=no/10;
        }
        dg++;
    }
    printf("\n Min no is %d",min);
    return 0;
}
*/
///========================================================================================///
///----WAP to generate even min & odd min no entered throught keyboard----------------------///
/*
#include<stdio.h>
int main()
{
   int no,rem,dg,temp,emin=0,omin=0;
   printf("\n Enter Any No");
   scanf("%d",&no);
   temp=no;
   dg=0;
   while(dg<=9)
   {
       no=temp;
       while(no!=0)
       {
           rem=no%10;
           if(rem==dg)
           {
               if(rem%2==0)
               {
                   emin=(emin*10)+rem;
               }
               else
               {
                   omin=(omin*10)+rem;
               }
           }
           no=no/10;
       }
       dg++;
   }
   printf("\n Even min no is %d ",emin);
   printf("\n odd min no is %d",omin);
   return 0;
}
*/
///========================================================================================///
///---WAP to display factors of entered no throught keyboard-------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i;
    printf("\n Enter Any No");
    scanf("%d",&no);
    i=1;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            printf("\n %d",i);
        }
        i++;
    }
    return 0;
}
*/
///===========================================================================///
///---WAP to check whether number is strong no or not------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,rem,fact,sum=0,temp;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    temp=no;
    while(no!=0)
    {
        rem=no%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        no=no/10;
    }
    no=temp;
    if(temp==sum)
    {
        printf("\n %d is strong no1",temp);
    }
    else
    {
        printf("\n %d is not strong no",temp);
    }
    return 0;
}
*/
///=========================================================================================///
///-------------WAP to check entered no is perfect or not----------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,sum=0,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    temp=no;
    i=1;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    no=temp;
    if(temp==sum)
    {
        printf("\n %d is perfect no",temp);
    }
    else
    {
        printf("\n %d is not perfect no",temp);
    }
    return 0;
}
*/
///====================================================================================================///
///----Write a C program to print all natural numbers from 1 to n--------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter Any no");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n %d",i);
        i++;
    }
    return 0;
}
*/
///==========================================================================================================///
///----Write a C program to print all natural numbers in reverse (from n to 1)-------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter any no");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("\n %d",i);
        i--;
    }
    return 0;
}
*/
///=========================================================================================================///
///-----Write a C program to print all alphabets from a to z------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char ch;
    ch='a';
    while(ch<='z')
    {
        printf("%c \t",ch);
        ch++;
    }
    return 0;
}
*/
///=======================================================================================================///
///---Write a C program to print all even numbers between 1 to 100----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    i=0;
    while(i<=100)
    {
       printf("\n %d",i);
        i=i+2;
    }
    return 0;
}
*/
///======================================================================================================///
///----Write a C program to print all odd numbers between 1 to 100--------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    i=1;
    while(i<=100)
    {
        printf("\n %d",i);
        i=i+2;
    }
    return 0;
}
*/
///======================================================================================================///
///-----Write a C program to find the sum of all natural numbers between 1 to n--------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,ans=0;
    printf("\n Enter any no");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        ans=ans+i;
        i++;
    }
    printf("%d",ans);
    return 0;
}
*/
///=======================================================================================================///
///---Write a C program to find the sum of all even numbers between 1 to n--------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,ans=0;
    printf("\n Enter any no");
    scanf("%d",&n);

    i=0;
    while(i<=n)
    {
        ans=ans+i;
        i=i+2;
    }
    printf("%d",ans);
    return 0;
}
*/
///=============================================================================================================///
///----Write a C program to find sum of all odd numbers between 1 to n-----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,ans=0;
    printf("\n Enter Any no :-");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        ans=ans+i;
        i=i+2;
    }
    printf("\n %d",ans);
    return 0;
}
*/
///========================================================================================///
///--Write a C program to print multiplication table of any number-------------------------///
/*
#include<stdio.h>
int main()
{
    int no,i,ans=1;
    printf("\n Enter any No");
    scanf("%d",&no);
    i=1;
    while(i<=10)
    {
        ans=no*i;
        printf("\n %d",ans);
        i++;
    }
    return 0;
}
*/
///==================================================================================///
///--Write a C program to count number of digits in a number-------------------------///
/*
#include<stdio.h>
int main()
{
    int no,cnt=0;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    while(no!=0)
    {
        cnt++;
        no=no/10;
    }
    printf("\n %d",cnt);
    return 0;
}
*/
///====================================================================================///
///---Write a C program to find first and last digit of a number-----------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,rev=0,ld,fd;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rev;
        }
        no=no/10;
        if(no==0)
        {
            fd=rem;
        }
    }
    printf("\n Last digit is %d",ld);
    printf("\n First digit is %d",fd);
    return 0;
}
*/
///========================================================================================///
///---Write a C program to find sum of first and last digit of a number--------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,rev=0,ld,fd,sum=0;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rev;
        }
        no=no/10;
        if(no==0)
        {
            fd=rem;
        }
    }
    sum=ld+fd;
    printf("\n Last digit is %d",ld);

    printf("\n First digit is %d",fd);

    printf("\n Last and First digit sum is :-%d",sum);
    return 0;
}
*/
///=========================================================================================///
///---Write a C program to swap first and last digits of a number--------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,rev=0,ld,fd,sum=0;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rev;
        }
        no=no/10;
        if(no==0)
        {
            fd=rem;
        }
    }
     printf("\n Before swap digit ld:-%d   fd:-%d",ld,fd);
     ld=ld+fd;
     fd=ld-fd;
     ld=ld-fd;
     printf("\n Before swap digit ld:-%d   fd:-%d",ld,fd);
     return 0;
}
*/
///====================================================================================///
///--Write a C program to calculate sum of digits of a number-------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,ans=0;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        ans=ans+rem;
        no=no/10;
    }
    printf("\n Sum of digit is :-%d",ans);
    return 0;
}
*/
///=====================================================================================///
///--Write a C program to calculate product of digits of a number-----------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,ans=1;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        ans=ans*rem;
        no=no/10;
    }
    printf("\n product of digit is :- %d",ans);
    return 0;
}
*/
///======================================================================================///
///---Write a C program to enter a number and print its reverse--------------------------///
/*
#include<stdio.h>
int main()
{
    int no ,rem,rev=0;
    printf("\nEnter Any no");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;

    }
    printf("\n Reverse no is %d",rev);
    return 0;

}
*/
///==============================================================================///
///---Write a C program to check whether a number is palindrome or not-----------///
/*
#include<stdio.h>
int main()
{
    int no,rem,rev=0,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    temp=no;
    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    no=temp;
    if(temp==rev)
    {
        printf("\n %d is palindrome no",temp);
    }
    else
    {
        printf("\n %d is not palindrome no",temp);

    }
    return 0;
}
*/
///============================================================================///
///---Write a C program to find frequency of each digit in a given integer----///
/*
#include<stdio.h>
int main()
{
    int no,rem,dg,cnt=0,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&no);

    temp=no;
    dg=0;
    while(dg<=9)
    {
        no=temp;
        cnt=0;
        while(no!=0)
        {
            rem=no%10;
            if(rem==dg)
            {
                cnt++;
            }
            no=no/10;

        }
        if(cnt>=1)
        {
           printf("\n digit %d count is %d",dg,cnt);
        }
        dg++;
    }
    return 0;
}
*/
///=======================================================================================///
///---Write a C program to print all ASCII character with their values--------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    while(i<256)
    {
        printf("\n %c -->%d",i,i);
        i++;
    }
    return 0;
}
*/
///======================================================================================///
///---Write a C program to find power of a number using for loop-------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x,y,ans=1;
    printf("\n Enter NO :-");
    scanf("%d%d",&x,&y);
    i=1;
    while(i<=y)
    {
        ans=ans*x;
        printf("\n %d power is %d",i,ans);
        i++;
    }

    return 0;
}
*/
///=======================================================================================///
///---Write a C program to find all factors of a number----------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    i=1;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            printf("\n %d factor is %d",no,i);

        }
        i++;
    }
    return 0;
}
*/
///=====================================================================================///
///---Write a C program to calculate factorial of a number-----------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,i,fact;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        fact=1;
        i=1;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        no=no/10;
    }
    printf("\n %d factorial is %d",rem,fact);
    return 0;
}
*/
///========================================================================================///
///----Write a C program to check whether a number is Prime number or not-----------------///
/*
#include<stdio.h>
int main()
{
    int i,no,flg=0;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    i=2;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }
        i++;
    }
    if(flg==0)
    {
        printf("\n %d is prime no",no);
    }
    else
    {
        printf("\n %d is not prime no",no);
    }
    return 0;
}
*/
///========================================================================================///
///----Write a C program to print all Prime numbers between 1 to n-------------------------///
/*
#include<stdio.h>
int main()
{
    int i,flg=0,d,n,no;
    printf("Enter Any No :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        no=i;
        d=2;
        flg=0;
        do
        {
            if(no%d==0)
            {
                flg=1;
                break;
            }
            d++;
        }while(d<=(no/2));
        if(flg==0 && no!=1 || no==2 )
        {
             printf("\n %d",no);
        }
    }
    return 0;
}
*/
///=============================================================================================///
///---Write a C program to find sum of all prime numbers between 1 to n------------------------///
/*
#include<stdio.h>
int main()
{
    int no,d,i,n,flg=0,sum=0;
    printf("\n Enter Any No :-");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        no=i;
        d=2;
        flg=0;
        while(d<=(no/2))
        {
            if(no%d==0)
            {
                flg=1;
                break;
            }
            d++;
        }
        if(flg==0 && no!=1 ||no==2)
        {
            printf("\n %d",no);
            sum=sum+no;
        }
        i++;

    }
    printf("\n Sum of Prime no :-%d",sum);
    return 0;
}
*/
///========================================================================================///
///---Write a C program to check whether a number is Armstrong number or not---------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,cnt,i,temp,sum,ans=0;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    temp=no;

    while(no!=0)
    {
        rem=no%10;
        cnt++;
        no=no/10;
    }
    printf("\n Count is %d",cnt);
    no=temp;
    while(no!=0)
    {
        rem=no%10;
        sum=1;
        i=1;
        while(i<=cnt)
        {
            sum=sum*rem;
            i++;
        }
        ans=ans+sum;
        no=no/10;
    }
    no=temp;
    if(ans==temp)
    {
        printf("\n %d is armstrong no",temp);
    }
    else
    {
        printf("\n %d is not armstrong no",temp);
    }
    return 0;
}
*/
///==================================================================================================///
///---Write a C program to print all Armstrong numbers between 1 to n -------------------------------///
/*
#include<stdio.h>
int main()
{
    int n,rem,cnt=0,temp,i,j,no,sum,ans=0;
    printf("\n Enter Any no :-");
    scanf("%d",&n);

    j=1;
    while(j<=n)
    {
        no=j;
        cnt=0;
        while(no!=0)
        {
            cnt++;
            no=no/10;
        }
        //printf("\nj = %d cnt = %d",j,cnt);
        no=j;
        ans=0;
        while(no!=0)
        {
            rem=no%10;
            sum=1;
            i=1;
            while(i<=cnt)
            {
                sum=sum*rem;
                i++;
            }
            ans=ans+sum;
            no=no/10;
        }

        if(ans==j)
        {
            printf("\n %d ",j);
        }

       j++;
    }
    return 0;
}
*/
///=======================================================================================///
///---Write a C program to check whether a number is Perfect number or not----------------///
/*
#include<stdio.h>
int main()
{
    int no,i,sum=0;
    printf("\n Enter Any no :-");
    scanf("%d",&no);
    i=1;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(no==sum)
    {
       printf("\n %d is perfect no",no);
    }
    else
    {
       printf("\n %d is not perfect no",no);
    }
    return 0;
}
*/
///============================================================================================///
///----Write a C program to print all Perfect numbers between 1 to n---------------------------///
/*
#include<stdio.h>
int main()
{
    int i,no,n,j,sum=0;
    printf("\n Enter any no :-");
    scanf("%d",&n);
    j=1;
    while(j<=n)
    {
        no=j;
        i=1;
        sum=0;
        while(i<=(no/2))
        {
            if(no%i==0)
            {
                sum=sum+i;
            }
            i++;
           // printf("\n Sum is %d",sum);
        }
        if(sum==no)
        {
            printf("\n %d",j);
        }
        j++;
    }
    return 0;
}
*/
///======================================================================================///
///----Write a C program to check whether a number is Strong number or not---------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,sum,fact,i,temp;
    printf("\n Enter Any No :-");
    scanf("%d",&no);
    temp=no;
    while(no!=0)
    {
        rem=no%10;
        fact=1;
        i=1;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        no=no/10;
    }
    no=temp;
    if(no==sum)
    {
        printf("\n %d is strong no",no);
    }
    else
    {
        printf("\n %d is not strong no",no);
    }
    return 0;
}
*/
///=========================================================================================///
///---Write a C program to print all Strong numbers between 1 to n-------------------------///
/*
#include<stdio.h>
int main()
{
    int no,rem,ans=0,n,j,i,fact;
    printf("\n Enter Any no :- ");
    scanf("%d",&n);
    j=1;
    while(j<=n)
    {
        no=j;
        ans=0;
        while(no!=0)
        {
            rem=no%10;
            i=1;
            fact=1;
            while(i<=rem)
            {
                fact=fact*i;
                i++;
            }

            ans=ans+fact;
            //printf("\n ans %d",ans);
            no=no/10;
        }
        if(ans==j)
        {
            printf("\n %d",j);
        }
        j++;
    }
    return 0;
}
*/
///=========================================================================================///
///-------------------------------------HCF(GCD)-------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x,y,no,fact=1,min=0,max=0;
    printf("\n Enter Any 2 No :-");
    scanf("%d%d",&x,&y);

    min=(x<y)?x:y;

    printf("\n min is %d ",min);

     for(i=1;i<=(min/2);i++)
     {
        if(min%i==0)
        {
            fact=i;
            printf("\n %d",i);
        }
     }
     if(max<fact)
        {
            max=fact;
            printf("\n %d is max divisor",max);
        }
     return 0;
}
*/
///==============================================================================================///
///------------------------LCM(LCF)-------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n1,n2,min=0,max=0 ,lcm=0,fact;
    printf("\n Enter Any No :-");
    scanf("%d%d",&n1,&n2);

    min=(n1<n2)?n1:n2;

    for(i=1;i<=(min/2);i++)
    {
        if(min%i==0)
        {
            fact=i;
            printf("\n %d",i);
        }
    }
    if(max<fact)
    {
        max=fact;
        printf("\n %d is max divisor",max);
    }

    lcm=n1*n2/max;
    printf("\n LCM is %d",lcm);
    return 0;
}
*/
///================================================================================================///
///-----------------------Another way LCM --------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,temp,min=0,max=0,lcm;
    printf("\n Enter any No :-");
    scanf("%d%d",&x,&y);
    min=(x<y)?x:y;
    max=(x>y)?x:y;

    temp=max*2;
    for(; ;temp=temp+max)
    {
        if(temp%min==0)
        {
            lcm=temp;
            break;
        }
    }
    printf("\n LCM is %d",lcm);
    return 0;
}
*/
///===============================================================================================///
///---------------fibonassi series---------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int n1=0,n2=1,nt=0,i,n;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    printf("\n %d is next term",0);
    nt=n1+n2;

    for(i=0;i<=n;i++)
    {
        printf("\n %d is next term",nt);
        n1=n2;
        n2=nt;
        nt=n1+n2;
    }
    return 0;
}

///=======================================================================================///
///----- Write a program to find the sum of series 1+2+3..+N-----------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,sum=0,ans=0;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d \t",sum);
        sum=0;
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\n %d",sum);
    return 0;
}
*/
///=============================================================================================///
///----Write a program to find the sum of series 1+3+5+7..+N-----------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
        printf("%d\t",i);
        sum=0;
    }
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("\n %d",sum);
    return 0;
*/
///=========================================================================================///
///----- Write a Program to find the sum of series 1^2+2^2+3^2...+N^2-----------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\n Enter N term :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=i*i;
        printf("%d\t",sum);
    }
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("\n %d",sum);
    return 0;
}
*/
///========================================================================================///
///--------Write a Program to find the sum of series 1^1+2^2+3^3...+N^N--------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,j,f=1,sum=0;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        f=1;
        for(i=1;i<=j;i++)
        {
            f=f*j;
        }
         printf("%d\t",f);
         sum=sum+f;
    }
    printf("\n Sum is %d",sum);
    return 0;
}
*/
///============================================================================================///
///--------Write a Program to find the sum of series 1/1+1/2+1/3..+1/N-------------------------///
/*
#include<stdio.h>
int main()
{
    float i,n,f=1,sum=0;
    printf("\n Enter Any No :-");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        f=1;
        f=f/i;
        printf("%.3f\t",f);
        sum=sum+f;
    }
    printf("\n sum is :-%.3f",sum);
    return 0;
}
*/
///==============================================================================================///
///-----Write a Program to find the sum of series 1+X+X^3...+X^N---------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,j,n,x,f,sum=0;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    x=2;
    for(j=1;j<=n;j++)
    {
        f=1;
        for(i=1;i<=j;i++)
        {
            f=f*x;
        }
         printf("%d\t",f);
         sum=sum+f;
    }
    printf("\n Sum is :-%d",sum);
    return 0;
}
*/
///=======================================================================================///
///--------Write a Program to find the sum of series 1+X+X^2/2...+X^N/N------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,x,j,a,b,sum=0;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    printf("\n Enter The X value ;-");
    scanf("%d",&x);
    //x=2;
    for(j=1;j<=n;j++)
    {
        a=1;
        for(i=1;i<=j;i++)
        {
            a=a*x;
            b=a/x;
        }
        printf("%d\t",b);
        sum=sum+b;
    }
    printf("\n Sum is:-%d",sum);
    return 0;
}
*/
///========================================================================================///
///-----Write a Program to find the sum of series 1+X+X^2/2!+X^3/3!...+X^N/N!--------------///
/*
#include<stdio.h>
int main()
{
    float a=1,s=0,f,sum=0,b;
    int n,i,j,x;
    printf("\n Enter any no :-");
    scanf("%d",&n);
    printf("\n Enter The x Value  :- ");
    scanf("%d",&x);
    printf("%d\t",1);
    for(j=1;j<=n-1;j++)
    {
        a=1.0;
        f=1.0;
        b=0.0;
        for(i=1;i<=j;i++)
        {
            a=a*x;
            f=f*i;
            b=a/f;
        }
        printf("%.4f\t",b);
        sum=sum+b;

    }
    printf("\n Sum is :- %.2f",sum+1);
    return 0;
}
*/
///==============================================================================================///
///----Write a program to find the sum of series (1+(1+2)+(1+2+3)+...till N)---------------------///
/*
#include<stdio.h>
int main()
{
    int i,j ,n,a,b,sum=0;
    printf("\n Enter n term :-");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        a=0;
        for(i=1;i<=j;i++)
        {
            a=a+i;
        }
        printf("(%d)\t",a);
        sum=sum+a;
    }
    printf("\n Sum is :-%d",sum);
    return 0;
}
*/
///=========================================================================================///
///-------Write a program to find the sum of series (1+(1*2)+(1*2*3)+...till N)-------------///
/*
#include<stdio.h>
int main()
{
    int i,n,j,a,sum=0;
    printf("\n Enter N Term :-");
    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        a=1;
        for(i=1;i<=j;i++)
        {
            a=a*i;
        }
        printf("(%d)\t",a);
        sum=sum+a;
    }
    printf("\n Sum is:-%d",sum);
    return 0;
}
*/
///==============================================================================================///
///------- Write a Program to find the sum of series 1!+2!+3!...+n!-----------------------------///
/*
#include<stdio.h>
int main()
{
    int i,j,n,a,b,sum=0;
    printf("\n Enter N Term:-");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        a=1;
        for(i=1;i<=j;i++)
        {
            a=a*i;
        }
        printf("%d\t",a);
        sum=sum+a;
    }
    printf("\n Sum is :-%d",sum);
    return 0;
}
*/
///================================================================================================///
///-------- Write a program to find the sum of series 1!/1+2!/2+3!/3...+n!/n----------------------///
/*
#include<stdio.h>
int main()
{
    int i,j,sum=0,a,b,n;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        a=1;
        b=1;
        for(i=1;i<=j;i++)
        {
            a=a*i;
            b=a/j;
        }
        printf("%d\t",b);
        sum=sum+b;
    }
    printf("\n Sum is %d",sum);
    return 0;
}
*/
///========================================================================================///
///---------- Write a program to find the sum of series 1^1/1+2^2/2+3^3/3...+n^n/n--------///
/*
#include<stdio.h>
int main()
{
    int j,i,n,a,b,sum=0;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        a=1;
        b=0;
        for(i=1;i<=j;i++)
        {
            a=a*j;
            b=a/j;
        }
        printf("%d\t",b);
        sum=sum+b;
    }
    printf("\n Sum is :-%d",sum);
    return 0;
}
*/
///=====================================================================================///
///------- Write a program to find the sum of series 1^1/1!+2^2/2!+3^3/3!...+n^n/n!-----///
/*
#include<stdio.h>
int main()
{
    int n;
    float f,i,j,a,b,sum=0;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        a=1;
        b=1;
        for(i=1;i<=j;i++)
        {
            a=a*j;
            b=b*i;
            f=a/b;

        }
        printf("%.3f\t",f);
        sum=sum+f;
    }
    printf("\n Sum is :-%.3f",sum);
    return 0;
}
*/
///========================================================================================///
///-----Write a program to find the sum of series 1/2-2/3+3/4-4/5+5/6...+N/N+1------------///
/*
#include<stdio.h>
int main()
{
    float a,sum=0,x,y;
    int n,i;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    x=1;
    y=2;
    for(i=1;i<=n;i++)
    {
       a=x/y;
       x++;
       y++;
       if(i%2!=0)
       {
           sum=sum+a;
       }
        else
       {
           sum=sum-a;

       }

    }
       printf("Sum is :-%.3f",sum);
    return 0;
}
*/
///=======================================================================================///
///---- Write a Program to find sum of series 5^2+10^2+15^2+.....N^2---------------------///
/*
#include<stdio.h>
int main()
{
    int i,j,n,k,a=0,sum=0;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    j=1;
    while(j<=n)
    {
        k=5;
        i=0;
        while(i<j)
        {
           k=k*j;
           a=k*k;
           printf("\t%d",a);
           i=i+5;
        }
        sum=sum+a;
        j++;
    }
    printf("\n Sum is :- %d",sum);
    return 0;
}
*/
///=====================================(incompelete)=====================================///
///----- Write a program to find the sum of series 1+(1+3)+(1+3+5)+....+n----------------///
/*
#include<stdio.h>
int main()
{
    int i,j,n,k,sum=0;
    printf("\n Enter Any No :-");
    scanf("%d",&n);
    j=1;
    while(j<=n)
    {
        for(i=0;i<j;i++)
        {

        }
    }
    return 0;
}
*/
///=============================================================================///
///---Write a program to find the sum of series 1+4-9+16-25+.....+N------------///
/*
#include<stdio.h>
int main()
{
    int i,sum,x,n,ans1=0,ans=0;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=i*i;
        if(x%2==0 || i==1)
        {
            printf("%d\t",x);
            ans=ans+x;
        }
        else
        {
           printf("%d\t",-x);
            ans1=ans1-x;
        }
        sum=ans+ans1;
    }
    printf("\n Sum is : %d ",sum);
    return 0;
}
*/
///=====================================================================================///
///--------- Write a program to find the sum of series 1+1/3+1/5+1/7+.....1/(N+2)------///
/*
#include<stdio.h>
int main()
{
    int i,x,y,n;
    float sum=0,z;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    x=1;
    y=1;
    for(i=1;i<=n;i++)
    {
        z=(float)x/y;
        y=y+2;
        printf("%.3f\t",z);

        sum=sum+z;
    }
    printf("\n Sum is : %.3f",sum);
    return 0;
}
*/
///=================================================================================///
///------- Write a Program to find the sum of series 1+4+9+16+25+.....+N------------///
/*
#include<stdio.h>
int main()
{
    int i,sum=0,n,x;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=i*i;
        printf("%d\t",x);
        sum=sum+x;
    }
    printf("\n Sum is : %d",sum);
    return 0;
}
*/
///===================================================================================///
///------Write a program to find the sum of series 1/2!+2/3!+3/5!+4/6!+.....N/(N+1)!---///
///*
//#include<stdio.h>
//int main()
//{
//    int i,j,x,n;
//    float sum=0,a;
//    printf("\n Enter N Term:-");
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        x=1;
//        for(j=1;j<=i+1;j++)
//        {
//            x=x*j;
//            a=i/x;
//        }
//        printf("%.3f\t",a);
//        sum=sum+a;
//    }
//    printf("\n Sum is : %0.3f",sum);
//    return 0;
//}

///===================================================================================///
///------ Write a Program to Find the sum of series 1-2+3-4+5-6...+N.----------------///
/*
#include<stdio.h>
int main()
{
    int i,n,a=0,a1=0,sum=0;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a=a-i;
            printf("%d\t",-i);
        }
        else
        {
            a1=a1+i;
            printf("%d\t",i);
        }
        sum=a+a1;
    }
    printf("\n Sum is : %d",sum);
    return 0;
}
*/
///========================================================================================///
///-------- Write a Program to Find the sum of series  1/2+2/3+3/4+4/5.....+(N-1)/N.------///
/*
#include<stdio.h>
int main()
{
    int i,x,y,n;
    float sum=0,z=0;
    printf("\n Enter Any No :-");
    scanf("%d",&n);
    x=1;
    y=2;
    for(i=1;i<=n;i++)
    {
        z=(float)x/y;
        printf("%.3f\t",z);
        sum=sum+z;
        x++;
        y++;
    }
    printf("\n Sum is : %.3f",sum);
    return 0;
}
*/
///=============================================================================================///
///---------- Write a Program to Find the sum of series 9+99+999+9999.....+N.------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=0,sum=0,n;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    //printf("%d\t",x);
    for(i=0;i<n;i++)
    {
        x=x*10+9;
        printf("%d\t",x);
        sum=sum+x;
    }
    printf("\n sum is :-%d",sum);
    return 0;
}
*/
///==============================================================================================///
///--- Write a Program to Find the sum of series 1+11+111+1111.....+N.------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=0,sum=0,n;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=x*10+1;
        printf("%d\t",x);
        sum=sum+x;
    }
    printf("\n sum is :-%d",sum);
    return 0;
}
*/
///============================================================================================///
///------- Write a Program to Find the sum of series 3+33+333+3333.....+N.--------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=0,sum=0,n;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=x*10+3;
        printf("%d\t",x);
        sum=sum+x;
    }
    printf("\n sum is :-%d",sum);
    return 0;
}
*/
///==============================================================================///
///------ Write a Program to Find the sum of series 2+4+6+8.....+N.
/*
#include<stdio.h>
int main()
{
    int i,x=0,sum=0,n;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=2*i;
        printf("%d\t",x);
        sum=sum+x;
    }
    printf("\n Sum is :- %d",sum);
    return 0;
}
*/
///=====================================================================================///
///-------- Write a Program to Find the sum of series 3+7+13+21+31.....+N.-------------///
/*
#include<stdio.h>
int main()
{
    int i,sum=0,x,n;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    x=1;
    for(i=1;i<=n;i++)
    {
        x=x+(2*i);
        printf("%d\t",x);
        sum=sum+x;
    }
    printf("\n Sum is :-%d",sum);
    return 0;
}
*/
///=============================================================================///
///----Write a Program to print the Fibonacci series. 1 1 2 3 5 8 13------------///
/*
#include<stdio.h>
int main()
{
    int n1=0,n2=1,nt,n,i;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    printf("%d",1);

//    printf("\n n1:-%d\t n2:-%d",n1,n2);
    nt=n1+n2;

    for(i=0;i<=n-2;i++)
    {
        printf("\t %d",nt);
        n1=n2;
        n2=nt;
        nt=n1+n2;
    }
    return 0;
}
*/
///=================================================================================///
///----- - Write a program to print series 2,15,41,80...n---------------------------///
/*
#include<stdio.h>
int main()
{
    int x=2,y=13,n,i;
    printf("\n Enter N Term :-");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        x=x+(y*i);
        printf("\t%d",x);
    }
    return 0;
}
*/
///=======================================================================================///
///------- Write a program to print series -1 4 -7 10 -13 16 -19...n---------------------///
/*
#include<stdio.h>
int main()
{
    int x=1,y=4,i,n,j;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    printf("-1");
    for(i=1;i<=n-1;i++)
    {
        x=x+3;
        if(i%2==0)
        {
            printf("\t%d",-x);
        }
        else
        {
             printf("\t%d",x);
        }
    }
    return 0;
}
*/
///======================================================================================///
///-----------Write a program to print series 10,5,60,15,110...N------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=0,y=0,n;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    x=10;
    y=5;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("\t%d",x);
            x=x+50;
        }
        else
        {
            printf("\t%d",y);
            y=y+10;
        }
    }
    return 0;
}
*/
///========================================================================================///
///--------	Write a program to print series 0,6,10,17,22,30,36...N------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=0,y=6,n;
    printf("\n Enter N term :-");
    scanf("%d",&n);
    printf("%d\t%d\t",x,y);
    for(i=0;i<n-2;i++)
    {
       if(i%2==0)
       {
           x=x+10+i;
           printf("%d\t",x);
       }
       else
       {
           y=y+10+i;
           printf("%d\t",y);
       }

    }
    return 0;
}
*/
///===============================================================================///
///------- Write a Program to print series 1,2,8,16,32...n.--------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=1,y=2,t,n;
    printf("\n Enter n term :-");
    scanf("%d",&n);
    printf("%d\t%d",x,y);

    t=8;
    for(i=0;i<n-2;i++)
    {

        printf("\t%d",t);
         t=t*2;
    }
    return 0;
}
*/
///=================================================================================================///
///------Write a program to print series 6,9,14,21,30,41,54...N------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=6,y,n,j;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    printf("%d\t",x);

    for(j=0;j<=n-1;j=j+2)
    {
       x=x+j;
       printf("%d\t",x);
    }
    return 0;
}
*/
///=======================================================================================///
///-----Write a Program to print series 1,3,7,15,31...n.---------------------------------////

//#include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=0;i<n;i++)
//    {
//
//    }
//}
//*/
///========================================================================================///
///-------- Write a Program to print series 6,11,21,36,56...n.----------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=6,n;
    printf("\n Enter N Term :-");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        x=x+(5*i);
        printf("%d\t",x);
    }
    return 0;
}
*/
///================================================================================///
///---------Write a Program to print series 2 4 7 12 21 38 71...N.-----------------///
/*
#include<stdio.h>
int main()
{
    int i,n,y,x=2;
    printf("\n Enter N Term :-");
    scanf("%d",&n);
    printf("%d\t",x);

    for(i=0;i<n-1;i++)
    {
        x=(x*2)-i;
        printf("%d\t",x);
    }
    return 0;
}
*/
///================================================================================================///
///------ Write a Program to print series 1 9 17 33 49 73 97 ...N.---------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,x=1,y=1,n;
    printf("\n enter N Term :-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            x=x+(8*i);
            printf("%d\t",x);
        }
        else
        {
            y=y+(8*i);
            printf("%d\t",y);
        }
    }
    return 0;
}
*/
///===============================================================================///
///-- Write a Program to print series 0 2 6 12 20 30 42 ...N.-------------------///
/*
#include<stdio.h>
int main()
{
    int i,n,x=0;
    printf("\n Enter N Term :-");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        x=x+(2*i);
        printf("%d\t",x);
    }
    return 0;
}
*/
///==================================================================================///
///---- Write a Program to Print Square Number series 1 4 9 16...--------------------///
/*
#include<stdio.h>
int main()
{
    int i,j,x=1,n;
    printf("\n Enter Any No :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            x=i*i;
            printf("%d\t",x);

    }
    return 0;
}
*/
///==================================================================================////
///======= Write a Program to print Cube Number series 1 8 27 64...=================////
/*
#include<stdio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=4;i++)
    {
       x=i*i*i;
       printf("%d\t",x);
    }
    return 0;
}
*/
///====================================================================================///
///---









///========================================================================================///
///===========================DO WHILE()LOOP==============================================///
///=======================================================================================///
/*
///-----WAP to display the each character of character set with its ASCII value---------///
#include<stdio.h>
int main()
{
    int i;
    i=0;
    do
    {
        printf("\n %c ---> %d",i,i);
        i++;
    }while(i<256);
    return 0;
}
*/













