///----------------------------------------------------------------------------///
///---------personal details without escape------------------------------------2/3/23---------------///
/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf(" Welcome to c programming");
    printf(" saurabh dhananjay upashe");
    printf(" a/p :- aitawade khurd,Tal:- walwa, Dist :- Sangal");
    printf(" Age :- 23 ");
    printf(" ssc :- 80.60% ,diploma :- 74, engineering :- 8.06");
    printf(" my best friend is dhairyashil");
    printf(" what about you?");
    return 0;
}
*/
///----------------------------------------------------------------------///
///---------personal detials with esape----------------------------------///
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n Welcome to c programming");
    printf("\n saurabh dhananjay   \bupashe");
    printf("\n a/p :- aitawade khurd,\tTal:- walwa, \f dist :- Sangali");
    printf("\n Age :- 23\a\a\a\a\a\a\a\a\a ");
    printf("\n ssc :- 80.60%% ,diploma :- 74%%, engineering :- 8.06%%");
    printf("\n my best friend is \r dhairyashil");
    printf("\n what about you?");
    return 0;
}
*/
///---------------------------------------------------------------------///
///-------------------personal details with ecspe /r--------------------///
/*
#include<stdio.h>
#include<stdlib.h>


int main()
{
    printf("\n beggining of c program");
    printf("\n start a new chapeter");
    printf("\n saurabh dhananjay upashe");
    printf("\n A/p :- Aitawade khurd,Tal:- walwa,\fDist :- Sangali,Pin:- 415409");
    printf("\n Education:- B.Tech(electrical  \bengineering)\f passout year:-2023");
    printf("\n result, \f ssc:-80.60%%,diploma:-47%%,b.tech:-8.06%%");
    printf("\n mobile no :-8483919279\a\a\a\a\a\a\a\a\a");
    printf("\n saurabh is my friend &\r'sunny'");
    printf("\n what is your dream\?");
    return 0;
}
*/
///-----------------------------------------------------------------------------------////
///------------------write a program 'personal details' with escape----------3/3/24----------------------------------////
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("\n starting a new course full stack java development in 'Archer infotech'");
    printf("\n 'ccourse introduction of full stack \b java development \rcourse'");
    printf("\n course duration 6/8 month between");
    printf("\n In this duration 12/13 module will be complete");
    printf("\n fee of this course 45000");
    printf("\n class timing  \b 10Am-6Pm");
    printf("\n class address:-Archer infotech,behind kothrud stand,pune ");
    printf("\n my name is saurabh dhananjay upashe");
    printf("\n A/p:- Aitawade khurd,Tal:-walwa,\fDist:-sangali,Pin:-415409");
    printf("\n Age:-23,weight:-65,height:-5.5");
    printf("\n mobile no:-8483919279\a\a\a\a\a\a\a\a\a");
    return 0;
}
*/
///-------------------------------------------------------------------------------------///
///------WAP to iniat and display the data---------------------4/2/24------------------------///
/*
#include<stdio.h>
int main()
{
   int x=10;
   float ft=3.45;
   double db=56.56;
   char ch='a';

   printf("\n all values are \t");
   printf("\n %d",x);
   printf("\n float values is:  %f",ft);
   printf("\n double values is:%lf",db);
   printf("\n char is:%c",ch);

   return 0;
}
*/
///--------------------------------------------------------------------------------------///
///---------WAP to init and display multiple veriables-----------------------------------///
/*
#include<stdio.h>
int main()
{
    int x=10,y=25,z=56;
    float th=5.6,uf=6.6,yg=9.6;
    char g='5',d='6',n='9';
    double lk=8.6,tf=3.5,kh=4.5;

    printf("\n display correct value.");
    printf("\n x:%d \t y:%d \t z:%d",x,y,z);
    printf("\n th:%f \t uf:%f \t yg:%f",th,uf,yg);
    printf("\n g:%c \t d:%c \t n:%c \t",g,d,n);
    printf("\n lk:%lf \t th:%lf \t kh:%lf",lk,th,kh);
    return 0;

}
*/
///=========================================================================================///
///---------------------------------------------------------------------------------///
///using scanf instruction :this is built in function
///i.e scan() used
///to input the data throught keyboard and this functio is defined in stdio.h file---///
///---- Syntax : scanf("<format-specifier>",&<value-name>);----------------------------///
/// ex : scanf("%d",&x)
///========================================================================================///

///----WAP to input 2 values throught keyboard and display the values---------------------///
/*
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter any two values throught keyboard");
    scanf("%d%d",&x,&y);

    printf("\n display the entered value of x and y veriables");
    printf("\n x:%d \t y:%d",x,y);

    return 0;
}
*/
///--------------------------------------------------------------------------------------///
///---WAP to input all types of values throught keyboard and displayes the values--------///
/*
#include<stdio.h>
int main()
{
    int x,i;
    char ch,nm;
    float ii,dd;
    double kl,jk;

    printf(" \n enter values of integer throught keyboard:- ");
    scanf("%d %d",&x,&i);

    printf(" \n enter 2 values of char thought keyboard:- ");
    fflush(stdin);
    scanf("%c %c",&ch,&nm);

    printf(" \n enter values of float thought keyboard:- ");
    scanf("%f %f",&ii,&dd);

    printf(" \n enter values of double thought keyboard:- ");
    scanf("%lf %lf",&kl,&jk);

    printf(" \n display the entered values int x and y veriable");
    printf(" \n x:%d \t i:%d",x,i);

    printf(" \n displaye the entered value of char veriable");
    printf(" \n ch:%c \t k:%c",ch,nm);

    printf(" \n displaye the entered value of float veriable");
    printf(" \n ii:%f \t dd:%f",ii,dd);

    printf(" \n displayes the entervalue of double veriable");
    printf(" \n kl:%lf \t jk:%lg",kl,jk);

    return 0;
}
*/
///----------------------------------------------------------------------------------------------///
///------------WAP to input all types of values throught keyboard and displayes the values(float,double pointer)--///
/*
#include<stdio.h>
int main()
{
    char a,b;
    int xx;
    float kk,ss;
    double qq,ww;

    printf("\n entered the value of chr:- ");
    fflush(stdin);
    scanf("%C %c",&a,&b);

    printf(" \n entered 1 value of integer:-");
    scanf("%d",&xx);

    printf(" \n entered value of float:-");
    scanf("%f %f",&kk,&ss);

    printf(" \n entered value of double:-");
    scanf("%lf %lF",&qq,&ww);

    printf(" \n display the value of char veriable:-");
    printf("\n a:%c \t b:%c",b,a);

    printf(" \n Display the 1 value of integer");
    printf(" \n xx:%d",xx);

    printf(" \n Display the value of float");
    printf(" \n kk:%.2f \t ss:%.4f",kk,ss);

    printf(" \n Display the value of double");
    printf(" \n qq:%.3lf \t ww:%.3lf",qq,ww);

    return 0;

}
*/
///----------------------------------------------------------------------------------------------///
///---WAP to enter any value throught key board and interchange the value of veriable----------///
///----suppose,X=10,y=20 then ans is X=20,y=10-------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,tem;

    printf(" \n enter the two value throught keyboard");
    scanf("%d%d",&x,&y);

    printf("\n before exchnage the value x:%d \t y:%d",x,y);
    tem=x;
    x=y;
    y=tem;

    printf("\n after exchange the value x:%d \t y:%d",x,y);

    return 0;
}
*/
///----------------------------------------------------------------------------------------------///
///---WAP to enter any value throught key board and interchange the value of veriable wiyhout using third veriable(+ -)--///
///----suppose,X=10,y=20 then ans is X=20,y=10-------------------------------------------------//
/*
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter any two value throught keyboard");
    scanf("%d %d",&x,&y);

    printf("\n before exchange the value x:%d \t y:%d",x,y);
    x=x+y;//10+20=30
    y=x-y;//30-20=10
    x=x-y;//30-10=20

    printf("\n after exchange value x:%d \t y:%d",x,y);
    return 0;
}
*/
///----------------------------------------------------------------------------------------------///
///---WAP to enter any value throught key board and interchange the value of veriable wiyhout using third veriable(* /)--///
///----suppose,X=25,y=35 then ans is X=35,y=25-------------------------------------------------//
/*
#include<stdio.h>
int main()
{
    int x,y;

    printf(" \n enter any two value throught keyboard");
    scanf("%d%d",&x,&y);

    printf(" \n before exchange value x:%d \t y:%d",x,y);
    x=x*y;
    y=x/y;
    x=x/y;

    printf("\n after exchnge the value x:%d \t y:%d",x,y);
    return 0;
}
*/
///----------------------------------------------------------------------------------------------///
///---WAP to enter any value throught key board and interchange the value of veriable wiyhout using third veriable(+ -)--///
///----suppose,X=25,y=3.5 then ans is X=3.5,y=25-------------------------------------------------//
/*
#include<stdio.h>
int main()
{
    int x;
    float y;

    printf(" \n enter any two value throught keyboard");
    scanf("%d %f",&x,&y);

    printf(" \n before exchange value x:%d \t y:%f",x,y);
    x=x+y;
    y=x-y;
    x=x-y;

    printf(" \n after exchange value x:%d \t y:%f",x,y);
    return 0;
}
*/
///================================================================================================================///
///---WAP tp perform - -- ++ operation---------------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x=6,y=7,z;

    z=-x;
    printf(" \n %d %d %d",x,y,z);//6 7 -6

    ++x;
    y--;
    printf("\n %d %d %d",x,y,z);//7 6 -6

    z=++x + --y;
    printf(" \n %d %d %d",x,y,z);//8 5 13
    return 0;
}
*/
///=================================================================================================================
///----WAP to calculate simple intrest(si=p*r*n)/100----------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int p,n;
    float s=0.0,r;

    printf("\n enter value of p,r,n");
    scanf("%d %f %d ",&p,&r,&n);

    s=(p*r*n)/100;

    printf(" \n simple intrest is %.3f",s);

    return 0;

*/
///===============================================================================================================///
///-----WAP to convert the temp from f to Deg---------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
   int fh,deg;

   printf(" \n enter any value for tem");
   scanf("%d",&fh);

   deg=(fh-32)/1.8;

   printf("\n Fhar To Deg:- %0.2d",deg);
    return 0;
}
*/
///===========================================================================================================///
///---------WAP to enter any value throught key board and interchange the value of veriable wiyhout using third veriable(+ -)--///
///----suppose,X=25,y=3,Z=6 then ans is X=6,y=25,Z=3-------------------------------------------------//
/*
#include<stdio.h>
int main()
{
    int x,y,z,temp;

    printf(" \n enter any value for x,y,z");
    scanf("%d %d %d",&x,&y,&z);

    printf("\n before exchnage value x:%d \t y:%d \t z=%d",x,y,z);
    temp=x;
    x=z;
    z=y;
    y=temp;

    printf(" \n after exchange value x:%d \t y:%d \t z:%d",x,y,z);
    return 0;

}
*/
//===========================================================================================================///
///---------WAP to enter any value throught key board and interchange the value of veriable with using third veriable(+ -)--///
///----suppose,X=25,y=3,Z=6 then ans is X=6,y=25,Z=3-------------------------------------------------//
/*
#include<stdio.h>
 int main()
{
    int x,y,z,temp;

    printf(" \n enter any value for x,y,z");
    scanf("%d %d %d",&x,&y,&z);

    printf("\n before exchnage value x:%d \t y:%d \t z=%d",x,y,z);
    x=x+y+z;//25+3+6=34
    y=x-y-z;//34-3-6=25
    z=x-y-z;//34-25-6=3
    x=x-y-z;//34-25-3=6

    printf(" \n after exchange value x:%d \t y:%d \t z:%d",x,y,z);
    return 0;
}
*/
///---------WAP to enter any value throught key board and interchange the value of veriable with using third veriable(* /)--///
///----suppose,X=8,y=5,Z=10 then ans is X=10,y=8,Z=5-------------------------------------------------//
/*
#include<stdio.h>
int main()
{
    int x,y,z;

    printf("\n enter the value of x,y,z");
    scanf("\n %d%d%d",&x,&y,&z);

    printf("\n before exchange value of x,y,z");
    printf("\n x:%d \t y:%d \t z:%d",x,y,z);

    x=x*y*z;//8*5*10=400
    y=x/y/z;//400/5/10=8
    z=x/y/z;//400/8/10=5
    x=x/y/z;//400/8/5=10

    printf("\n after exchange value of x,y,z");
    printf("\n x:%d \t y:%d \t z:%d",x,y,z);
    return 0;
}
*/
///---------WAP to enter any value throught key board and interchange the value of veriable with using third veriable(* /)--///
///----suppose,X=8,y=5,Z=10 then ans is X=10,y=8,Z=5-------------------------------------------------//
/*
#include<stdio.h>
int main()
{
    int x=8,y=5,z=10;

    printf("\n  value of x,y,z");
    printf("\n %d %d %d",x,y,z);

    printf(" \n before exchnage value of x,y,z");
    printf("\n x:%d \t y:%d \t z:%d",x,y,z);

    x=x*y*z;
    y=x/y/z;
    z=x/y/z;
    x=x/y/z;

    printf("\n after exchange value of x,y,z");
    printf("\n x:%d \t y:%d \t z:%d",x,y,z);

    return 0;

}
*/
///===============================================================================================================///
///----WAP to convert temp from f to deg-----------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    float f,c;

    printf("\n enter the value of temp");
    scanf(" %f",&c);

    printf("\n temp in f %f",c);
    c=f-32/1.8;

    printf("\n temp in c %f",c);
    return 0;
}
*/
///==================================================================================================================///
///---WAP to enter any number and add its all digit--------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no,ans=0,rem;

    printf("\n enter any value:- ");
    scanf(" %d",&no);

    rem=no%10;//776%10=6
    ans=ans+rem; //0+6=6
    no=no/10;//776/10=77

    rem=no%10;//77%10=7
    ans=ans +rem;//6+7=13
    no=no/10;// 7/10=1

    rem=no%10;// 7/10=7
    ans=ans+rem;//13+7=20
    no=no/10;//0/10=0

    printf("\n ans is %d",ans);
    return 0;
}
*/
///======================================================================================================///
///------WAPto reverse the entered no--------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int no ,rev=0,rem;

    printf(" \n enter any value :-");
    scanf("%d",&no);

    rem=no%10;//5625%10=5
    rev=(rev*10)+rem;//0*10+5=5
    no=no/10;//5625/10=562

    rem=no%10;//562%10=2
    rev=(rev*10)+rem;//5*10+2=52
    no=no/10;//562/2=56

    rem=no%10;//56%10=6
    rev=(rev*10)+rem;//52*10+6=526
    no=no/10;//56/10=5

    rem=no%10;//5%10=5
    rev=(rev*10)+rem;//526*10+5=5265
    no=no/10;//5/10=0

    printf("\n rev is %d",rev);

    return 0;

}
*/
///============================================================================================================///
///-----------------------------------Relational operater-(x>y)-----------------------7/3/24------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,z;

    printf("\n enter any two value");
    scanf("%d%d",&x,&y);

    z=x>y;
    printf("\n z is %d \t:-",z);
    return 0;
}
*/
///============================================================================================================///
///-----------------------------------logical opertar other methode not 3 verible(x>y)------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter the value of x and y");
    scanf("%d%d",&x,&y);

    printf("\n x>y is %d\t",(x>y));
    return 0;
}
*/
///============================================================================================================///
///-----------------------------------logical operater other methode not 3 verible(x<y)------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n Enter any two value");
    scanf("%d%d",&x,&y);

    printf("\n x<=100 && y<=100 is %d \t",(x<=100 && y<=100));
    return 0;
}
*/
///============================================================================================================///
///-----------------------------------logical opertar other methode not 3 verible(x<y)------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter two value");
    scanf("%d%d",&x,&y);

    printf("\n x%2==0 || y%2!=0 is %d \t ",(x%2==0 || y%2!=0));
    return 0;
}
*/
///=============================================================================================================///
///--WAP to find maximum between two numbers using conditional operrater---------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter two numbeers:-");
    scanf("%d%d",&x,&y);

    (x>y)?printf("\n x:-%d is max",x):printf("\n y:-%d is max",y);
    return 0;
}
*/
///=============================================================================================================///
///---WAP to find maximum between three numbers using condioning operater--------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,z,max=0;

    printf("\n Enter 3 numbers");
    scanf("%d%d%d",&x,&y,&z);

    max=(x>y)?(x>z)?x:y : (y>z)?y:z;

    printf("\n max is ::- %d \t",max);
    return 0;

}
*/
///=============================================================================================================///
///--WAP to find maximum between three numbers using condioning operater (method second)------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,z,max=0;

    printf("\n Enter three no :-");
    scanf("%d%d%d",&x,&y,&z);

    max=(x>y)?x:y;

    max=(max>z)?max:z;

    printf("\n max is %d \t",max);
    return 0;
}
*/
///=================================================================================================================///
///---WAP to check whether year is leap or not using conditing format-----------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x;

    printf("\n enter any year");
    scanf("%d",&x);

    x%4==0?printf("\n leaf year %d",x): printf("\n leaf year not %d",x);

    return 0;
}
*/
///=================================================================================================================///
///--WAP to check whether character is an alphabhet or not using condition format-----------------------------------///
/*
#include<stdio.h>
int main()
{
    char a;

    printf("\n enter any alphabet :-");
    scanf("%c",&a);

    (a>='a'&&a<='z')|| (a>='A'&&a<='Z')? printf("\n alphabet %c ",a):printf("\n not alphabet %c",a);

    return 0;

}
*/
///============================================================================================================
///--
/*
#include<stdio.h>
int main()
{
    int x,y,;

    printf("\n enter any two values");
    scanf("%d%d",&x,&y);

    printf("\n x&y is %d",(x&y));
    return 0;

}
*/
///===============================================================================================================///
///-----------------------bitwise opertaer to 2 numbers-------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("\n Enter any two value");
    scanf("%d%d",&x,&y);

    printf("\n x&y is:- %d",(x&y));

    printf("\n x|y is :- %d",(x|y));

    printf("\n x^y is :- %d",(x^y));

    printf("\n x<<2 is :-%d",(x<<2));

    printf("\n y>>2 is :-%d",(y>>2));

    return 0;
}
*/
///================================================================================================///
///-----------------------------using if()---------------------------------------------------------///
///----WAP to check entered no is even or odd-----------------------------------------------------///
/*
#include<stdio.h>
 int main()
{
    int x;

    printf("\n enter no :-");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("\n enter no is even");
    }
    if(x%2==1)
    {
        printf("\n enter no is odd");
    }
    return 0;
}
*/
///================================================================================================///
///----WAP to check entered no is even or odd(methode second)(if(!(x%2==0)or if(x%2!=0)-----------///
/*
#include<stdio.h>
int main()
{
    int x;

    printf("\n Enter no is :-");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("\n %d no is even",x);
    }
    if(!(x%2==0))//if(x%2)!=0
    {
        printf("\n %d is odd no",x);
    }
    return 0;
}
*/
///========================================================================================================///
///--------WAP to checke whether no is maximum--------------------------------------------------------///
/*
#include<stdio.h>
int main ()
{
    int x,y;

    printf("\n enter two no");
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        printf("\n %d is max no :-",x);
    }
    if(x<y)
    {
        printf("\n%d is max no:-",y);
    }
    return 0;
}
*/
///=================================================================================================///
///---------------------WAP to check entered no is even or odd--------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x;
    printf("\n enter no");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("\n even no is");
    }
    else
    {
        printf("\n odd no is");
    }
    return 0;
}
*/
///====================================================================================================///
///----WAP to enter price of 3 items and calculate the total bill,discount and payamount------------------///
///------(if amt exceed more than 1000 then dis 14% otherwise 7%)----------------------------------------///
/*
#include<stdio.h>
int main()
{
    float p1,p2,p3,tot=0.0,dis=0.0,payamt=0.0;

    printf("\n Enter the price of 3 product:-");
    scanf("%f%f%f",&p1,&p2,&p3);

    tot=p1+p2+p3;

    if(tot>1000)
    {
        dis=tot*0.14;
    }
    else
    {
        dis=tot*0.07;
    }

    payamt=tot-dis;

    printf("\n Total bill %.2f :-",tot);

    printf("\n disount amount %.2f :-",dis);

    printf("\n payamount is %.2f",payamt);

    return 0;
}
*/
///============================================================================================///
///--WAP to enter any charcater and check the charcater is upper case //lower case or digital or special charcater///
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter any charcter");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        printf("\n %c is upper case char",ch);
    }
    else
    {
        if(ch>=97 && ch<=122)
        {
            printf("\n %c is lower case char",ch);
        }
        else
        {
            if(ch>=48 && ch<=57)
            {
                printf("\n %c is digit",ch);
            }
            else
            {
                printf("\n %c is special symbol",ch);
            }
        }

    }
    return 0;
}
*/
///==========================================================================================================///
///------------------------WAP to find max between 3 no ----------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("\n Enter any three no");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y)
    {
        printf("\n %d is max no",x);
    }
    else
    {
        if(x<z)
        {
            printf("\n %d is max no",z);
        }
        else
        {
            if(y>z)
            {
                printf("\n %d is max no",y);
            }
            else
            {
                printf("\n %d is max no",x);
            }
        }
    }
    return 0;
}
*/
///===========================================================================================///
///--WAP to enter any charcater and check the charcater is upper case //lower case or digital or special charcater///
/*
#include<stdio.h>
int main()
{
    char c;
    printf("\n Enter any charcter");
    scanf("%c",&c);

    if(c>='A' && c<='Z')
    {
        printf("\n %c is upper case character",c);
    }
    else if(c>='a' && c<='z')
    {
        printf("\n %c is lower case charcter",c);
    }
    else if(c>='0'&&c<='9')
    {
        printf("\n %c is digit",c);
    }
    else
    {
        printf("\n %c is special char",c);
    }
    return 0;
}
*/
///==================================================================================================///
///-WAP to enter the co ordinate of pointer in 2d system and displaye the exact location of that point--///
/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("\n Enter any value");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    {
        printf("\n it is in 1st QD",x,y);
    }
    else if(x<0 && y>0)
    {
        printf("\n it is in 2nd QD",x,y);
    }
    else if(x<0 && y<0)
    {
        printf("\n it is in 3rd QD ",x,y);
    }
    else if(x>0 && y<0)
    {
        printf("\n its in 4th QD",x,y);
    }
    else
    {
        printf("\n its in option");
    }
    return 0;
}
*/
///========================================================================================================///

///=======================USING FOR() LOOP==============================================================///

///---WAP to using loop display hello world 5 times---------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n hello world %d",i);
    }
    return 0;
}
*/
///===================================================================================================///
///---WAP to using loop display hello world 10  times---------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int a;
    for(a=0;a<10;a++)
    {
        printf("\n hello world %d",a);
    }
    return 0;
}
*/
///===============================================================================================///
///==WAP to using loop display hello world 15 times(with decreament)---------------------------///
/*
#include<stdio.h>
int main()
{
    int s;
    for(s=15;s>=1;s--)
    {
        printf("\n hello world %d",s);
    }
    return 0;
}
*/
///==============================================================================================///
///==WAP to using loop display hello world 15 to 50times(with expr)---------------------------///
/*
#include<stdio.h>
int main()
{
    int n;
    for(n=15;n<50;n=n+5)
    {
        printf("\n hello world %d",n);
    }
    return 0;
}
*/
///======================================================================================///
///----WAP to displaye even no from 0to 100 using loop without if-----------------------///
/*
#include<stdio.h>
int main()
{
    int y;
    printf("\n Even no from 0 to 100");

    for(y=1;y<=100;y=y+2)
    {
        printf(" %6d \t odd no",y);
    }
    return 0;
}
*/
///=======================================================================================///
///----WAP to displaye even no from 0to 100 using loop without if-----------------------///
/*
#include<stdio.h>
int main()
{
    int z;
    printf("\n odd no from 0to 100");
    for(z=1;z<=100;z=z+2)
    {
        printf(" odd no%5d\t",z);
    }
    return 0;
}
*/
///=========================================================================================///
///----WAP to displaye odd no from 0to 100 using loop with if-----------------------///
/*
#include<stdio.h>
int main()
{
    int x;
    printf("\n odd no from 0 to 100");
    for(x=1;x<=100;x=x+2)
    if(x%2!=0)
    {
        printf(" %d \t",x);
    }
    return 0;
}
*/
///=======================================================================================///
///----WAP to dispalye addition of 1 to 10 no---------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int a,sum=0;

    printf("\n addition of 1 to 10 n0");
    for(a=1;a<=10;a++)
    {
        sum=sum+a;

    }
            printf(" \n addition %d",sum);

    return 0;
}
*/
///======================================================================================///
///--WAP TO COUNT ODD NO 1 TO 100--------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int x,cnt=0,y;
    printf("\n odd no from 1to 100");
    for(x=1,y=0;x<=100;x++)
    {
        printf("\n %5d \t ",x);
               cnt++;
    }
    printf(" \n count %d",cnt);

    return 0;
}
*/
///======================================================================================///
///
