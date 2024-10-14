
///------WAP to enter two numbers and find thiers sum----------------///
/*
#include <stdio.h>
int main()

{
    int x,y,z;

    printf("\n enter any two number");
    scanf("%d %d",&x,&y);

    z=x+y;

    printf("\n sum of z %d",z);
    return 0;
}
*/
///======================================================================////
///----WAP to enter two numbers and perform all arthimatic operation---////
/*
#include<stdio.h>
int main()
{
    int x=10,y=20,z;
    printf("\n Enter two no");
    scanf("%d%d",&x,&y);

    z=x+y;
    printf("\n ans of z %d",z);

    printf("\n value for addition:-");
    printf("\n x:%d \t y:%d",x,y);

    z=x-y;

    printf("\n ans of z %d",z);

    printf("\n  value for substraction:-");
    printf("\n x:%d \t y:%d",x,y);


    z=x*y;

    printf("\n ans of z %d",z);

    printf("\n value for multification:-");
    printf("\n x:%d \t y:%d",x,y);


    z=x/y;

    printf("\n ans of z %d",z);

    printf("\n value for division:-");
    printf("\n x:%d \t y:%d",x,y);


    z=x/y;

    printf(" ans of z %d",z);
    printf("\n value for division:-");
    printf("\n x:%d \t y:%d",x,y);

    return 0;

}
*/
///====================================================================================////
///----WAP to enter lenght and breadth of a rectangle and find its perimeter----------////
/*
#include<stdio.h>
int main()
{
    int len,bre,peri;

    printf("\n Enter the value of lenght and breadth:-");
    scanf("%d%d",&len,&bre);

    peri=2*(len+bre);

    printf("\n perimeter of rectangal :-%d",peri);
    return 0;

}
*/
///===================================================================================///
///----WAP to enter lenght and breadth of a rectangle and find its area----------////
/*
#include<stdio.h>
int main()
{
    int len,area,bre;

    printf("\n Enter the value of lenght and breadth:-");
    scanf("%d%d",&len,&bre);

    area=len*bre;

    printf("\n Area of reactangle is :- %d \t",area);
    return 0;
}
*/
///=========================================================================================///
///----WAP to enter radius of circle and find its diameter,circumference and are------------///
/*
 #include<stdio.h>
 int main()
 {
     int rad,dia=0,cir=0,area=0;

     printf("\n Enter the redius of circle:-");
     scanf("%d",&rad);

     dia=rad*2;

     cir=2*3.14*rad;

     area=3.14*rad*rad;

     printf("\n diametr of circle %d \t",dia);

     printf("\n circumference of circle %d \t",cir);

     printf("\n area of circle %d \t",area);
     return 0;
 }
*/
///=========================================================================================///
///--WAP to enter lenght in centimeter and convert it into meter and kilometer---------------///
/*
#include<stdio.h>
int main()
{
    int len,met,km;

    printf("\n Enter the lenght ");
    scanf("%d",&len);

    met=len/100;

    km=met/1000;

    printf("\n convertion value in meter :- %d \t",met);

    printf("\n convertion value in kilometer :-%d \t",km);
    return 0;
}
*/
///=========================================================================================///
///--WAP to enter p,t,r and calculate compound intrest-------------------------------------///
/*
#include<stdio.h>
int main()
{
    int p,t;
    float r,ci=0;

    printf("\n Enter value P T R :-");
    scanf("%d%d%f",&p,&t,&r);

    ci=p*(1-r/t)-p;

    printf("\n %f is compund intrest",ci);
    return 0;
}
*/
///======================================================================================///
///-WAP to enter temprature in celsius and convert it into fahrenhet----------------------///
/*
#include<stdio.h>
int main()
{
    float temp,far,deg;

    printf("\n enter the temprature:-");
    scanf("%f",&temp);

    far=(temp*9/5)+32;

    printf("\n celsius to fahrenhet :-%f \t",far);
    return 0;
}
*/
///=======================================================================================///
///--WAP to convert days into years,week--------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int day,wek,year;

    printf("\n enter the day");
    scanf("%d",&day);

    wek=day/4;

    year=day/365;

    printf("\n day to wek %d",wek);

    printf("\n day to year %d",year);
    return 0;


}
*/
///========================================================================================///
///---WAP  to enter two angle of a triangle and find the third angle-----------------------///
/*
#include<stdio.h>
int main ()
{
    int a,b,c;

    printf("\n angle of triangle a and b:-");
    scanf("%d%d",&a,&b);

    c=180-(a+b);

    printf("\n third angle triangle is %d \t",c);
    return 0;
}
*/
///==========================================================================================///
///--WAP to enter temprature in fahrenhet and convert it into celsius------------------------///
/*
#include<stdio.h>
int main()
{
    float far,cel,tem;

    printf("\n temprature in fahrenhet :-");
    scanf("%d",&tem);

    cel=tem-32/1.8;

    printf("\n fahrenhet to celcius %f \t",cel);
    return 0;
}
*/
///=============================================================================================///
///--WAP to find power any number--------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,ans=1;
    printf("\n enter any no");
    scanf("%d",&x);

    y=x*x;

    printf("\n power of x %d",y);
    return 0;
}
*/
///==================================================================================================///
///--WAP to enter base and height of a triangle and find its area------------------------------------///
/*
#include<stdio.h>
int main()
{
    int bas,hei,area;

    printf("\n enter the base and height of triangle");
    scanf("%d%d",&bas,&hei);

    area=(bas*hei)/2;

    printf("\n area of triangle is :- %d \t",area);

    return 0;

}
*/
///=====================================================================================================///
///-----WAP to calculate area of an equilateral triangle----------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    float side, area=0;

    printf("\n Enter the side of equilateral triangle :-");
    scanf("%f",&side);

    area=(1.7320/4)*side*side;

    printf("\n area of equilateral trangle is:- %.3f \t",area);
    return 0;
}
*/
///==========================================================================================================///
///---WAP to enter marks of five subject and calculate total,avrage and pecentage----------------------------///
/*
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int total;
    float avr,per;

    printf("\n marks of five subject:-");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    total=a+b+c+d+e;

    avr=(float)total/5;

    per=((float)total/500)*100;

    printf("\n total of five sub %d \t",total);

    printf("\n avrrage of sub %.2f \t",avr);

    printf("\n percentage is :-%.2f%% \t",per);
    return 0;


}
*/
///========================================================================================///
///--WAP to any number and calculate  its square root--------------------------------------///
/*
#include<stdio.h>
int main()
{
    float x ,y;
    printf("\n Enter any number");
    scanf("%f",&x);

    y=sqrt(x);
    printf("\n %f is squre root",y);
    return 0;

}
*/
///=================================================================================================///
///--WAP to enter P,T,R,and calculate simple intrest------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int p,t, si=0;
    float r;

    printf("\n enter the value of P,T,R:-");
    scanf("%d %d %f",&p,&t,&r);

    si=p*r*t/100;

    printf("\n simple intrest is :- %d \t",si);
    return 0;

}
*/
///=================================================================================================///
///------------------------------------------------------------6/3/24-----------//
///--WAP to check whether no is negative positive or zero-------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter no :-");
    scanf("%d",&no);

    if(no>0)
    {
        printf("\n NO is positive %d",no);
    }
    //---------------------------------------------------
    if(no<0)
    {
        printf("\n NO is Nigative %d",no);
    }
    else
    {
        printf("\n No is zero");
    }
    return 0;
}
*/
///=====================================================================================///
///--WAP check whether no is divisble by 5 and 11 or not---------------------------------///
/*
#include<stdio.h>
int main()
{
   int a;

   printf("\n Enter no");
   scanf("%d",&a);

   if(a%5==0)
   {
       printf("\n %d no is dvisble by 5 ",a);
   }
   if(a%11==0)
   {
       printf("\n %d no is divisble by 11",a);
   }

   else
   {
       printf("\n %d no is not divisible 5 and 11",a);

   }
   return 0;
}
*/
///=====================================================================================///
///---WAP to check whether a year is leap year or not------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x;
    printf("\n Enter year");
    scanf("%d",&x);

    if(x%4==0)
    {
        printf("\n %d is leaf year",x);
    }
    else
    {
        printf("\n %d is not leaf year",x);

    }
    return 0;
}
*/
///===========================================================================================///
///--WAP to check whether a character is an alphabet or not1
/*
#include<stdio.h>
int main()
{
    char a;
    printf("\n Enter any alphabet:-");
    scanf("%c",&a);

    if((a>='a'&& a<='z') || (a>='A'&& a<='Z'))
    {
        printf("\n %c is alphabet:-",a);
    }
    else
    {
        printf("\n %c is not alphabet");
    }
    return 0;
}
*/
///============================================================================================///

///========================USING CONDITIONAL OPERATER=========================================///

///--WAP to find maxmimum between two numbers using conditional operater=--------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,max=0;

    printf("\n Enter any two numbers");
    scanf("%d%d",&x,&y);

    max=(x>y)?x:y;

    printf("\n %d is max no",max);
    return 0;
}
*/
///========================================================================================///
///--WAP to check whether no is even or odd using conditional operater=--------------------///
/*
#include<stdio.h>
int main()
{
    int x;
    printf("\n Enter any no");
    scanf("%d",&x);

    (x%2==0)?printf("\n %d is even no",x):printf("\n %d is odd no",x);


    return 0;
}
*/
///======================================================================================///
///--WAP to check whether year is leaf or not using condition operater-------------------///
/*
#include<stdio.h>
int main()
{
    int y;
    printf("\n Enter any year");
    scanf("%d",&y);

    (y%4==0)?printf("\n %d is leaf year",y):printf("\n %d is not leaf year",y);

    return 0;
}
*/
///=================================================================================////
///--WAP to check whether character is an alphabet or not using condition operater---///
/*
#include<stdio.h>
int main()
{
    char a;

    printf("\n enter any character");
    scanf("%c",&a);

    (a>='A'&&a<='Z' || a>='a'&&a<='z')?printf("\n %c is alphabet",a):printf("\n %c is not alphabet",a);
    return 0;
}
*/
///=====================================================================================///
///=========================USING IF()==================================================///

///---WAP to check whether no is negative positive or zero---------------------------///
/*
#include<stdio.h>
int main ()
{
    int x;

    printf("\n Enter no");
    scanf("%d",&x);

    if(x>0)
    {
        printf("\n %d is positive ",x);
    }
    if(x<0)
    {
        printf("\n %d is negative",x);
    }
    if(x==0)
    {
        printf("\n %d is Zero",x);

    }
    return 0;

}
*/
///===========================================================================///
///--WAP to find max between three no----------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("\n enter three no");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y && x>z)
    {
        printf("\n %d is max no",x);
    }
    if(y>z && y>x)
    {
        printf("\n %d is max no",y);
    }
    if(z>y && z>x)
    {
        printf("\n %d is max no",z);
    }

    return 0;
}
*/
///============================================================================///
///--WAP to check whether a number is divisble by 5 and 11 or not------------///
/*
#include<stdio.h>
int main()
{
    int x;
    printf("\n Enter no");
    scanf("%d",&x);

    if(x%5==0)
    {
        printf("\n %d divisble by 5",x);
    }
    if(x%11==0)
    {
        printf("\n %d divisble by 11",x);
    }
    if(x%5!=0 && x%11!=0)
    {
        printf("\n %d not divisible by 5 and 11",x);
    }

    return 0;
}
*/
///=========================================================================///
///---WAP to check whether a number is even or odd--------------------------///
/*
#include<stdio.h>
int main()
{
    int s;
    printf("\n enter no");
    scanf("%d",&s);

    if(s%2==0)
    {
        printf("\n %d is no even",s);
    }
    if(s%2!=0)
    {
        printf("\n %d is no odd",s);
    }
    return 0;
}
*/
///=======================================================================///
///---WAP check whether a year is a leap year or not------------------------///
/*
#include<stdio.h>
int main()
{
    int y;

    printf("\n Enter year:-");
    scanf("%d",&y);

    if(y%4==0)
    {
        printf("\n %d is leaf year :-",y);
    }
    if(y%4==1)
    {
        printf("\n %d is not leaf year",y);

    }
    return 0;
}
*/
///=======================================================================///
///---WAP to check whether char is an alphabet or not--------------------///
/*
#include<stdio.h>
int main()
{
    char a;
    printf("\n Enter alphabet:-");
    scanf("%c",&a);
    if((a>='a'&& a<='z'))
    {
        printf("\n %c is alphabet",a);
    }
    if((a>='A'&& a<='Z'))
    {
        printf("\n %c is alphabet",a);
    }
    if((a>=48 && a<=57))
    {
        printf("\n %c its not aplphabet");
    }
    return 0;
}
*/
///========================================================================///
///---WAP to input any characater and check whether its is alphabet ,dighit or special char--///
/*
#include<stdio.h>
int main ()
{
    char c;
    printf("\n Enter any char :-");
    scanf("%c",&c);
    if((c>=65&&c<=90) ||(c>=97&&c<=122))
    {
        printf("\n  %c is alphabet:-",c);
    }
    if((c>=48&&c<=57))
    {
        printf("\n %c is digit no :- ",c);
    }
    if((c>=32&&c<=47)||(c>=58&&c<=64) ||(c>=91&&c<=96)||(c>=123&&c<=126 ))
    {
        printf("\n %c is special charcter:-",c);
    }
     return 0;


}
*/
///===============================================================================================///
///-WAP to input any alphabet check whether it is vowel or consonanat----------------------------///
/*
#include<stdio.h>
int main()
{
    char c;
    printf("\n enter alphabet");
    scanf("%c",&c);
    if(c='a'&& c=='A' || c=='e' && c=='E' || c=='i' && c=='I' || c=='o' && c=='O' ||c=='u'&& c=='U')
    {
        printf("\n %c is vowel",c);
    }
    else
    {
        printf("\n %c is consonanat");
    }
    return 0;
}
*/
///===========================================================================================///
///---WAP to check whether a charcter is uppercase or lowercase alphabet---------------------///
/*
#include<stdio.h>
int main()
{
    char a;
    printf("\n enter any character");
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
    {
        printf("\n %c is uppercase charcter",a);
    }
    if(a>='a'&&a<='z')
    {
        printf("\n %c is lower case character",a);
    }
    return 0;
}
*/
///==============================================================================================///
///- WAP to input month numbers and print number of days in that month -----------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int m;
    printf("\n Enter month No :-");
    scanf("%d",&m);

    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        printf("\n %d is 31 day month",m);
    }
    if(m==4||m==6||m==9||m==11)
    {
        printf("\n %d is 30 day month",m);
    }
    if(m==2)
    {
        printf("\n %d is 28 and 29 day month",m);
    }
    return 0;
}
*/
///========================================================================================///
///--WAP to input angles of a triangle and check whether traingle is valid or not----------///
/*
#include<stdio.h>
int main()
{
    int a,b,c,d=0.0;
    printf("\n enter sides :-");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("\n it is a triangle",a,b,c);
    }
    if(a+b+c!=180)
    {
        printf("\n it is not triangle",a,b,c);
    }
    return 0;
}
*/
///=========================================================================================///
///--WAP to input all side of a triangle and check whether traingle is valid or not----------///
/*
#include<stdio.h>
int main()
{
    int ab,bc,ac;
    printf("\n Enter side of triangle");
    scanf("%d%d%d",&ac,&bc,&ac);
    if(ac*ac==ab*ab+bc*bc)
    {
        printf("\n its a triangle",ac);
    }
    if(ac*ac!=ab*ab+bc*bc)
    {
        printf("\n its not triangle",ac);
    }
    return 0;
}
*/
///===============================================================================///
///--WAP input marks of five sub physics,chemistry,bio,mathas,computer.calculate percentage and grade aacording to following--//
/*
#include<stdio.h>
int main()
{
    int ph,che,math,bio,com,tot=0.0;
    float per=0.0;
    printf("\n Enter the sub Marks :-");
    scanf("\n %d%d%d%d%d",&ph,&che,&math,&bio,&com);

    tot=ph+che+math+bio+com;

    per=((float)tot/500)*100;

    printf("\n percentage %.2f%%",per);

    if(per>90 && per<=100)
    {
        printf("\n  A Grad %.2f",per);
    }
    if(per>80 && per<=90)
    {
        printf("\n  b Grad %.2f",per);
    }

    if(per>70 && per<=80)
    {
        printf("\n  c Grad %.2f",per);
    }
    if(per>60&& per<=70)
    {
        printf("\n  D Grad %.2f",per);
    }
    if(per>50&&per<=40)
    {
        printf("\n  E Grad %.2f",per);
    }
    if(per<40)
    {
        printf("\n  F Grad %.2f",per);
    }
    return 0;


}
*/
///===================================================================================================================///
///WAP input basic salary of an employee and calculate its gross salary according to the following--------------------///
///-----basic salary<=10000,HRA=20%,DA=80%-----basic salary<=20000,HRA=25%,DA=90%---basic salary>20000,HRA=30%,DA=95%-///
/*
#include<stdio.h>
int main()
{
    float tot=0;
    int bs;
    printf("\n Enter basic salary :-");
    scanf("%d",&bs);
    if(bs>0 && bs<=10000)
    {
        tot=(bs*0.2)+(bs*0.80);
        printf("\n Total Gross salary is %.2f",tot);
    }
    if(bs<=20000 && bs>10000)
    {
        tot=(bs*0.25)+(bs*0.90);
        printf("\n Total Gross salary is %.2f",tot);
    }
    if(bs>20000)
    {
        tot=(bs*0.30)+(bs*0.95);
        printf("\n Total Gross salary is %.2f",tot);
    }
    return 0;
}
*/
///========================================================================================================================///
///--WAP to input electricity unit charges and calculate total electricity bill according to the given condition-----------///
///-for the first 50units Rs.0.50/unit----for the next 100units Rs.0.75/unit---for the next 50units Rs.1.20/unit----------///
///--for the first 50units Rs.1.50/unit---An additional surcharges of 20% is added to the bill----------------------------///
/*
#include<stdio.h>
int main ()
{
    float unit,tot=0;
    printf("\n Enter Electricity unit :-");
    scanf("%f",&unit);

    if(unit<=50)
    {
        tot=(unit*0.50);
        printf("\n Total Electricity bill is %.2f",tot+0.2);
    }
    if(unit>50 && unit<=150)
    {
        tot=(unit*0.75)+0.2;
        printf("\n Total Electricity bill is %.2f",tot);
    }
    if(unit>150 && unit<=250)
    {
        tot=(unit*1.50)+0.2;
        printf("\n Total Electricity bill is %.2f",tot);
    }
    if(unit>250)
    {
        tot=(unit*1.75)+0.2;
        printf("\n Total Electricity bill is %.2f",tot);
    }
    return 0;
}
*/
///================================================================================================///
///--WAP to calculate profit or loss--------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int sp,cp,pro=0.0,loss=0.0;
    printf("\n enter price");
    scanf("%d%d",&sp,&cp);

    if(pro=sp>cp)
    {
        printf("\n %d is profit",pro);
    }
    if(loss=cp>sp)
    {
        printf("\n %d is loss",loss);
    }
    return 0;
}
*/
///==================================================================================================///*/
///---WAP to find all roots of quadratic equation----(incomplete)--------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int a,b,c,disc,root1 root2;
    printf("\n enter the value of a,b and c(ax^2+bx+c=0:-");
    scanf("%d%d%d",&a,&b,&c);

    disc=b*b-4*a*c;
    if(disc>0)
    {
        root1=(-b+sqrt(disc))/2*a)
        root2=(-b-sqrt(disc))/2*a)
        printf("\n its the real solution of %d:-",root1);
        printf("\n its the real solution of %d:-",root2);
    }
    if(disc==0)
    {
        root1=(-b/2a)?printf("\n its the one real solution",root1):printf("\n its the one real solution",root2);
    }
    if(disc<0)
    {
        root1
    }

}
*/
///====================================================================================================================///
///=================================USING FOR() LOOP ==================================================================///
///---------------WAP TO all natural no from 1 to n-------------------------------------------------------------------------------///
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

        printf("\n %d",r);
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
    printf("\n alphabet from a to z");

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
    int a,sum=0,n;
    printf("\n Enter Natural No :-");
    scanf("%d",&n);

    for (a=1;a<=n;a++)
    {
        sum=sum+a;//printf jr curly baracket chya baher asel tr only total sum dhakhavte and ata asel all sum dhavte
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
///---WAP to print multi fiaction table for any number---------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no ,m,ans=0.0;

    printf("\n Enter any No");
    scanf("%d",&no);

    for(m=1;m<=10;m=m+1)
    {
        ans=no*m;
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
///===============================================================================///
///----WAP to add even and odd nos seprately which are enterd throught keyboard--///
/*
#include<stdio.h>
int main()
{    int no,odd=0,even=0,rem=0;
     printf("\n Enter no :- ");
     scanf("%d",&no);

     while(no!=0)
     {
        rem=no%10;
        if(rem%2==0)
        {
            even=even+rem;
        }
        else
        {
            odd=odd+rem;
        }
        no=no/10;
     }
     printf("\n %d is odd no",odd);
     printf("\n %d is even no",even);
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
    while(no!=0)
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
///---WAP to add even and odd nos from seprately-------------------------------------------///
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
    printf("\n Enter no :- ");
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
        printf("\n%d",ans);
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
    printf("\n Enter No");
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

        ans=last+first;

    }

    printf(" \n Last digit :- %d",last);

    printf(" \n first digit :- %d",first);

    printf(" \n Sum of Last and first digit :- %d",ans);
    return 0;

}
*/
///=======================================================================================///
///--WAP to swap first and last digits of a number----------------------------------------///
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
///----WAP to calculate product of digits of a number---------------------------------///
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
    printf("\n =============%d",rev);

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



