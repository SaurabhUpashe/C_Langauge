#include <stdio.h>

///=========================Structure=================================================///
/*
#include<stdio.h>
int main()
{
    struct student
    {
        int age;
        float hgt;
        double wgt;
        char ch;
    };

    struct student s;

    printf("\n Enter the student age,height,weight and name :- \n");
    scanf("%d %f %lf %c",&s.age,&s.hgt,&s.wgt,&s.ch);

    printf("\n Age :-%d\t height :-%f\t Weight:-%lf\t Name :-%c",s.age,s.hgt,s.wgt,s.ch);
    return 0;
}
*/
///=======================================================================================///
/*
#include<stdio.h>
struct student
{
    int age;
    float hgt;
    double wgt;
    char ch[20];
};
int main()
{
    struct student p;

    printf("\n Enter Student name :- ");
    gets(p.ch);

    printf("\n Enter The Student Age ,Height And Weight :- ");
    scanf("%d %f %lf",&p.age,&p.hgt,&p.wgt);

    printf("\n age:-%d\t height:-%f\t Weight:-%lf",p.age,p.hgt,p.wgt);
    return 0;
}
*/
///========================================================================================///
///-----------------------Input and display the structure data----------------------------///
/*
#include<stdio.h>
struct student
{
    int age;
    float hgt;
    double wgt;
    char str[20];
};
int main()
{
    struct student k;

    printf("\n Enter The Student Name :- ");
    gets(k.str);

    printf("\n Enter The Age of Students :- ");
    scanf("%d%d",&k.age);

    printf("\n enter The height of Student :- ");
    scanf("%f",&k.hgt);

    printf("\n enter The weight of Student :- ");
    scanf("%lf",&k.wgt);

    printf("\n Student name:-%s\t Age :-%d%d\t Height is :-%f\t Weight is :-%lf",k.str,k.age,k.hgt,k.wgt);
    return 0;
}
*/
///=============================================================================================================///
///-------// Using the typedef : It is used to define the type, in such case no need of using struct keyword.--///
/*
#include<stdio.h>
typedef struct
{
    int icode;
    char inm[40];
    float ipr;
}Items;

int main()
{
    Items s;

    printf("\n Enter Name Items :- ");
    gets(s.inm);

    printf("\n Enter the Code,prize :- ");
    scanf("%d %f",&s.icode,&s.ipr);

    printf("\n Display items Data");
    printf("\t Name:-%s\t code :- %d\t Prize :-%f",s.inm,s.icode,s.ipr);
}
*/
///========================================================================================///
///-------// Passing the structure variable to function-----------------------------------///
/*
#include<stdio.h>
struct Items
{
    int icode;
    char inm[50];
    float ipr;
};
void display(struct Items k)
{
    printf("\n Name :- %s\t Code:- %d\t Prize :- %f",k.inm,k.icode,k.ipr);
}
int main()
{
    struct Items k;
    printf("\n Enter The item name :- ");
    gets(k.inm);

    printf("\n Enter the Code And Prize of Items :-  ");
    scanf("%d %f",&k.icode,&k.ipr);

    display(k);
}
*/
///=======================================================================================///
///--------------How the structure variable is passed (By Value or By Reference )--------///
///--------Note that the simple variable of structure type is always passed by value----///
/*
#include<stdio.h>
typedef struct
{
    int icode;
    char inm[50];
    float ipr;

}Items;
void input(Items k) ///Dont need to Use struct BeCause we use typedef
{
    printf("\n Enter The Items Name :- ");
    gets(k.inm);

    printf("\n Enter the code and prize :- ");
    scanf("%d %f",&k.icode,&k.ipr);
}
void display(Items l) ///Dont need to Use struct BeCause we use typedef
{
    printf("\n Name :- %s\t Code:- %d\t Prize :- %f",l.inm,l.icode,l.ipr);
}
int main()
{
    Items k; ///Dont need to Use struct BeCause we use typedef

    input(k);
    display(k);
}
//Above programs output will get blank that is name :      code: 0.  ipr: 0.0

//At the time of passing Simple struct veriable we pass the value
//--when we can use IO method(function);i,e input();output or display()that time we have pass struct veriable
//by reference because of Above program pass veriable by value Orignal chanage After input() not reflected
//cause we pass veriable value not struct veriable reference
*/
///==================================================================================================///
///------------------//  Passing the structure variable by reference--------------------------------//

///   When you are using the pointer of structure type then you have to use
///  (   -> as a member access operator in place of .(dot)

/*
#include<stdio.h>
struct Items
{
    int icode;
    char inm[50];
    float ipr;
};
void input(struct Items *k)
{
    printf("\n Enter The Items Name :- ");
    gets(k->inm);

    printf("\n Enter the code and prize :- ");
    scanf("%d %f",&k->icode,&k->ipr);
}
void display(struct Items g)
{
    printf("\n Name :- %s\t Code:- %d\t Prize :- %f",g.inm,g.icode,g.ipr);

}
int main()
{
    struct Items q;

    input(&q);
    display(q);
}
*/
///============================================================================///
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float ssc;
    float hsc;
};
void display(struct Student t)
{
    printf("\n Id:- %d\t Name :-%s\t Ssc:- %f\t Hsc:-%f",t.id,t.nm,t.ssc,t.hsc);
}
struct Student maxno(struct Student a,struct Student a1)
{
    if(a.ssc>a1.ssc)
    {
        return a;
    }
    else
    {
        return a1;
    }
}
int main()
{
    struct Student a,a1,temp;

    printf("\n Enter The 1st Student Name :- ");
    gets(a.nm);
    printf("\ Enter The 1st Student Information :-\n");
    scanf("%d %f %f",&a.id,&a.ssc,&a.hsc);

    printf("\n Enter The 2nd Student Name :- ");
    gets(a1.nm);
    printf("\ Enter The 2nd Student Information :-\n");
    scanf("%d %f %f",&a1.id,&a1.ssc,&a1.hsc);

    printf("\n 1st Student");
    display(a);
    printf("\n 2nd Student");
    display(a1);

    temp=maxno(a,a1);

    printf("\n Max no in SSC is :- ");
    display(temp);
}
*/
///==================================================================================
///-----------// HW: Array of structure variable I/O
/*
#include<stdio.h>
struct student
{
    int id;
    char nm[50];
    float ssc;
    float hsc;
};
int main()
{
    struct student s[3];
    int i;

    printf("\n Enter The Student data :- ");
    printf("\n Enter Student name:- ");
    gets(&s[i].nm);

    for(i=0;i<3;i++)
    {
        printf("\n Enter The %d Student data",i+1);

        printf("\n Enter id ,Ssc mark and Hsc marks Respectivley");
        scanf("%d %f %f",&s[i].id,&s[i].ssc,&s[i].hsc);
    }

    printf("\n Display Student Information :- ");
    for(i=0;i<3;i++)
    {
        printf("\n %d Student data",i+1);

        printf("\n Id:-%d\t Name :-%s\t Ssc:-%f\t Hsc:-%f\t",s[i].id,s[i].nm,s[i].ssc,s[i].hsc);
    }
}
*/
///===========================================================================================///
///-----------------struct veriable passing is array----------------------------------------///
/*
#include<stdio.h>
struct student
{
    int id;
    float ssc,hsc;
};
void input(struct student *t)
{
    int i;
    printf("\n Enter the Student data :- ");
    for(i=0;i<3;i++)
    {
        printf("\n Enter The Id ,Ssc marks and hsc marks :-\n");
        scanf("%d %f %f",&t[i].id,&t[i].ssc,&t[i].hsc);
    }
}
void display(struct student a[])
{
    int i;
    printf("\n Student Information :- ");
    for(i=0;i<3;i++)
    {
        printf("\n Id :- %d\t SSC:- %f\t HSC:-%f\t",a[i].id,a[i].ssc,a[i].hsc);
    }
}
int main()
{
    struct student s[3];

    input(s);///here we also write input(&s)

    display(s);
}
*/
///=======================================================================================///
///-pointer to structure veriable--------------------------------------------------------///
/*
#include<stdio.h>
struct student
{
    char nm[40];
	int rno;
	float per;

};
void display(struct student s[])
{
    printf("\n Name:-%s\t Roll No:-%d\t Percentage:-%f",s->nm,s->rno,s->per);
}
int main()
{
    struct student *s;
    int i,cnt;

    printf("\n Enter the count :- ");
    scanf("%d",&cnt);

    s=(struct student*)malloc(cnt*sizeof(struct student));

    printf("\n Enter information of %d student ",cnt);

    for(i=0;i<cnt;i++);
    {
        printf("\n Enter the Student Name :- ");
        fflush(stdin);
        gets(s->nm);

        printf("\n Enter The Student Roll no And PerCentage :- ");
        scanf("%d %f",&s->rno,&s->per);

    }
    display(s);
}
*/
///==================================================================================///
///--------To access the dynamically allocated location using the pointer notations, we have to use
///-----------------the  -> as member access operator in place of the .(dot) .
/*
#include<stdio.h>
int cnt;
struct Student
{
    char nm[40];
	int rno;
	float per;
};

void display(struct Student p[])
{
    int i;
    for(i=0;i<cnt;i++)
    {
        printf("\n Name :- %s\t Roll No:-%d\t Percentage:-%f",(p+i)->nm,(p+i)->rno,(p+i)->per);
    }
}
int main()
{
    struct Student *s;
    int i;

    printf("\n Enter the Student Count :- ");
    scanf("%d",&cnt);

    s=(struct Student*)calloc(cnt,sizeof(struct Student));

    for(i=0;i<cnt;i++)
    {
        printf("\n Enter the Student name :- ");
        fflush(stdin);
        gets((s+i)->nm);//here you also give address(&(s+i)->nm)

        printf("\n Enter The roll No And percentage :- ");
        scanf("%d %f",&(s+i)->rno,&(s+i)->per);
    }
    display(s);

    return 0;
}
*/
///==========================================================================================///
///------------Using Array as a member of structure----------------------------------------///
/*
#include<stdio.h>
struct Student
{
    char nm[40];
    int marks[5];
};
int main()
{
    struct Student k;
    int i;

    printf("\n Enter The Student name :- ");
    gets(k.nm);

    printf("\n Enter Thr 5 Subject Marks :- ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&k.marks[i]);
    }

    printf("\n Student Name;-");
    puts(k.nm);

    for(i=0;i<5;i++)
    {
        printf("\n %d",k.marks[i]);
    }
}
*/
///=========================================================================================///
///---------------using Array as Member and veriable of structure-------------------------////
/*
#include<stdio.h>
struct Student
{
    char nm[40];
    int mrks[5];
};
int main()
{
    struct Student s1,s2;
    int i;
    printf("\n Enter The 1st student Name :- ");
    gets(s1.nm);
    printf("\n Enter 1st student 5 Subject marks :-  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s1.mrks[i]);
    }

    printf("\n Enter The 2nd student Name :- ");
    fflush(stdin);
    gets(s2.nm);
    printf("\n Enter 2nd student 5 Subject marks :-  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s2.mrks[i]);
    }

    printf("\n 1st Student Name :- ");
    puts(s1.nm);
    for(i=0;i<5;i++)
    {
        printf("\n %d",s1.mrks[i]);
    }

    printf("\n 2nd Student Name :- ");
    puts(s1.nm);
    for(i=0;i<5;i++)
    {
        printf("\n %d",s2.mrks[i]);
    }
}
*/
///==============================================================================================///
///---------------using Array as Member and veriable of structure(same but diffirrent )---------///
/*
#include<stdio.h>
struct Student
{
    char nm[50];
    int mrks[5];
};
int main()
{
    struct Student s[2];
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("\n Enter %d Student name :- ",i+1);
        fflush(stdin);
        gets(s[i].nm);
        printf("\n Enter the 5 subject marks :- ");
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].mrks[j]);
        }
    }
    for(i=0;i<2;i++)
    {
        printf("\n %d Student name :-",i+1);
        puts(s[i].nm);
        printf("\n Enter the 5 subject marks :- ");
        for(j=0;j<5;j++)
        {
            printf("\n %d",s[i].mrks[j]);
        }
    }
}
*/
///=============================================================================================///
///------------------Pointer as a member structure---------------------------------------------///
/*
#include<stdio.h>
struct Student
{
    int rno;
    int *sub
};
int main()
{
    struct Student stdnt;
    int i,cnt;

    printf("\n Enter The Subject Count :- ");
    scanf("%d",&cnt);

    stdnt.sub=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter The student Roll No :- ");
    scanf("%d",&stdnt.rno);
    printf("\n Enter The %d Subject marks",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&stdnt.sub[i]);
    }

    printf("\n Student Information Data \n");
    printf("\n Roll no :- %d",stdnt.rno);

    for(i=0;i<cnt;i++)
    {
        printf("\n %d",stdnt.sub[i]);
    }
}
*/
///======================================================================================///
///----------- Variable of another structure as a member of structure-------------------///
/*
#include<stdio.h>
struct Date
{
    int dd;
    int mm;
    int yyyy;
};
struct Item
{
    int id;
    char nm[50];
    float pr;
    struct Date mfdt;

};
int main()
{
    struct Item s;

    printf("\n Enter the item name :- ");
    gets(s.nm);

    printf("\n Enter the Id And Prize :- ");
    scanf("%d %f",&s.id,&s.pr);

    printf("\n Enter THe Date,Month and Year :- ");
    scanf("%d %d %d",&s.mfdt.dd,&s.mfdt.mm,&s.mfdt.yyyy);

    printf("\n Items Details :-\n");
    printf("\n Name:-%s\t Id:-%d\t Prize:-%f\t Mf Date:-%d\t Mf Month:-%d\t Mf Year:-%d",s.nm,s.id,s.pr,s.mfdt.dd,s.mfdt.mm,s.mfdt.yyyy);
}
*/
///=======================================================================================///
///----------------Data Structure part (singly Linked List)------------------------------///
/*
#include<stdio.h>
struct Student
{
    int id;
    float per;
    int rno;
    struct Student *next;
};
int main()
{
    struct Student *start=NULL,*last,*temp;

    int opt;
    while
    {
        printf("\n ***Menu***");
        printf("\n 1.Input \t 2.Output \t 3.stop");
        printf("\n Enter Your Option :- ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            temp=(struct Student*)calloc(sizeof(struct Student));
            printf("\n Enter the Id,Percentage and Roll No :- ");
            scanf("%d - %f - %d",&temp->id,&temp->per,&temp->rno);
            temp->next=NULL;

            if(start==NULL)
            {
                start=temp;
                last=temp;
            }
            else
            {
                last->next=temp;
                last=temp;
            }

            break;

        case 2:
            temp=start;
            while(temp)
            {
                printf("%d - %f - %d",temp->id,temp->per,temp->rno);
                temp=temp->next;
            }
        case 3:
            exit(0);
        }
    }
}
*/
///=======================================================================================///
///---1. Create a structure called "Student" with members name, age, and total marks.
///--Write a C program to input data for two students, display their information, and find the average of total marks.
/*
#include<stdio.h>
struct Student
{
    char nm[50];
    int age;
    int mrks;
};
int main()
{
    struct Student s[2];
    int tot=0,avrage=0,i,j;

    for(i=0;i<2;i++)
    {
        printf("\n Enter The Student Name :- ");
        fflush(stdin);
        gets(s[i].nm);
        printf("\n Enter age of Student :- ");
        scanf("%d",&s[i].age);
        printf("\n Enter The Marks of Student :- ");
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i].mrks[j]);
        }
    }
    tot=tot+s->mrks[j];
    avrage=tot/3;
    for(i=0;i<2;i++)
    {
        printf("\n Name :- %s\t Age:-%d\n",s[i].nm,s[i].age);
        printf("\n marks of %d Student ",i+1);
        for(j=0;j<3;j++)
        {
            printf("\n %d",s[i].mrks[j]);

        }
        printf("\n avarage mark is :- %d",avrage);
    }
}
*/
///===========================================================================================================///
///---2. Define a structure named Time with members hours, minutes, and seconds.
///Write a C program to input two times, add them, and display the result in proper time format.
/*
#include<stdio.h>
struct Time
{
    int hh;
    int min;
    int sec;
};

int main()
{
    struct Time t[2],sum;
    int i,add=0;

    for(i=0;i<2;i++)
    {
        printf("\n Enter The Hour,minuts And Second :- ");
        scanf("%d %d %d",&t[i].hh,&t[i].min,&t[i].sec);
    }


    for(i=0;i<2;i++)
    {
        add=add+(t[i].hh+t[i].min+t[i].sec);
    }

    printf("\n Proper time Formatt :- ");

    for(i=0;i<)



}
///
*/
/*
#include<stdio.h>
struct Time
{
    int hh;
    int min;
    int sec;
};
int add(struct Time t1,struct Time t2)
{
    struct Time sum;
    sum.sec=t1.sec+t2.sec;
    sum.min=sum.min/60;
    sum.sec=sum.sec%60;

    sum.min=t1.min+t2.min;
    sum.hh=sum.min/60;
    sum.min=sum.min%60;

    sum.hh=t1.hh+t2.hh;

    return sum;
}
int main()
{
    struct Time t1,t2,sum;


    printf("\n Enter The 1st Time Member :- ");
    scanf("%d %d %d ",&t1.hh,&t1.min,&t1.sec);

    printf("\n Enter The 2nd Time Member :- ");
    scanf("%d %d %d ",&t2.hh,&t2.min,&t2.sec);

    sum=add(t1,t2,);

    printf("\n %d/%d/%d".sumt.hh,sumt.min,sumt.sec);

}
*/
///========================================================================================///
///--3. Create a structure named Book to store book details like title, author, and price.
///Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
/*
#include<stdio.h>
struct Book
{
    char title[50];
    char nm[50];
    float pr;
};
struct Circle display(struct Book b1)
{
    printf("\n Title:-%s\t Author:-%s\t Price:-%f",b1.title,b1.nm,b1.pr);
}
struct Book expensive(struct Book b1,struct Book b2,struct Book b3)
{
  if(b1.pr>b2.pr)
  {
      return b1;
  }
  else
  {
      if(b1.pr<b3.pr)
      {
          return b3;
      }
      else
      {
          if(b2.pr>b3.pr)
          {
              return b2;
          }
          else
          {
              return b3;
          }
      }
  }
}
struct Book lowest(struct Book b1,struct Book b2,struct Book b3)
{
  if(b1.pr<b2.pr)
  {
      return b1;
  }
  else
  {
      if(b1.pr>b3.pr)
      {
          return b1;
      }
      else
      {
          if(b2.pr<b3.pr)
          {
              return b2;
          }
          else
          {
              return b1;
          }
      }
  }
}
int main()
{
    struct Book b1,b2,b3,prize,low;


    printf("\n Enter The 1st Title Name :- ");
    gets(b1.title);

    printf("\n Enter The 1st Author Name :- ");
    gets(b1.nm);

    printf("\n Enter the 1st book Price :- ");
    scanf("%f",&b1.pr);

    printf("\n Enter The 2nd Title Name :- ");
    fflush(stdin);
    gets(b2.title);

    printf("\n Enter The 2nd Author Name :- ");
    gets(b2.nm);

    printf("\n Enter the 2nd book Price :- ");
    scanf("%f",&b2.pr);

    printf("\n Enter The 3rd Title Name :- ");
    fflush(stdin);
    gets(b3.title);

    printf("\n Enter The 3rd Author Name :- ");
    gets(b3.nm);

    printf("\n Enter the 3d book Price :- ");
    scanf("%f",&b3.pr);

    printf("\n 1st Book Details");
    display(b1);

    printf("\n 2nd Book Details");
    display(b2);

    printf("\n 3rd Book Details");
    display(b3);

    prize=expensive(b1,b2,b3);

    low=lowest(b1,b2,b3);

    printf("\n Expensive Prize of book is :- ");
    display(prize);

    printf("\n Lowest Prize of book is :- ");
    display(low);
}
*/
///===========================================================================================///
///----------4. Define a structure named Circle to represent a circle with a radius.
///--Write a C program to calculate the area and perimeter of two circles and display the results.
/*
#include<stdio.h>
struct Circle
{
    float r;
};
float area(struct Circle c1)
{

     return 3.14 * c1.r * c1.r;

};
float perimeter(struct Circle c2)
{

    return 2*3.14*c2.r;
};
int main()
{
    struct Circle c1,c2;
    float a,p;

    printf("\n Enter The radius of Circle one :- ");
    scanf("%f",&c1.r);

    printf("\n Enter The radius of Circle second :- ");
    scanf("%f",&c2.r);

    a=area(c1);
    p=perimeter(c1);
    printf("\n Area Is :- %f\t Perimeter is:-%f",a,p);

    a=area(c2);
    p=perimeter(c2);
    printf("\n Area Is :- %f\t Perimeter is:-%f",a,p);
}
*/
///===========================================================================================///
///------5. Create a structure named "Employee" to store employee details such as employee ID, name, and salary.
/// Write a program to input data for three employees, find the highest salary employee, and display their information.
/*
#include<stdio.h>
struct Employee
{
    int id;
    char nm[50];
    int slry;
};
void high(struct Employee s[])
{
    int i,pos=0;
    for(i=1;i<3;i++)
    {
       if(s[pos].slry<s[i].slry)
       {
            pos=i;
       }
    }
    printf("\n Name:-%s\t Id:-%d\t Salary:-%d",s[pos].nm,s[pos].id,s[pos].slry);
};
int main()
{
    struct Employee s[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("\n Enter The Name of Employee :- ");
        fflush(stdin);
        gets(s[i].nm);

        printf("\n Enter The Id and salary :- ");
        scanf("%d %d",&s[i].id,&s[i].slry);
    }
    printf("\n Employee Information \n:- ");
    for(i=0;i<3;i++)
    {
        printf("\n Name:-%s\t Id:-%d\t Salary:-%d",s[i].nm,s[i].id,s[i].slry);
    }
    printf("\n Highest Salary Employee Is :- ");
    high(s);
}
*/
///============================================================================================///
///--6.Define a structure named "Date" with members day, month, and year.
///Write a C program to input two dates and find the difference in days between them.
/*
#include<stdio.h>
struct Date
{
    int dd;
    int mm;
    int yyyy;
};
int main()
{
    struct Date d1,d2;

    printf("\n Enter the Date1 day,month and year ;- ");
    scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yyyy);

    printf("\n Enter the Date2 day,month and year ;- ");
    scanf("%d %d %d",&d2.dd,&d2.mm,&d2.yyyy);

    yyyy=365/day;
    mm=12;

    if(dd<31)
    {
        if()
    }

}
*/
///==============================================================================///
///-Design a structure named "Car" to store details like car ID, model, and rental rate per day.
/// Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results.
/*
#include<stdio.h>
struct Car
{
    int id;
    char model[50];
    int rent;
};
void carrent(struct Car c[])
{
    int day,totrent,i;
    char select[50];
    printf("\n Enter The model you want ");
    scanf("%s",&select);

   printf("\n Please Enter How many Day do you want to car on rent;-");
   scanf("%d",&day);

   for(i=0;i<3;i++)
   {
      if(c[i].model==select)
      {
          totrent=c[i].rent*day;

          printf("\n Total day rent is :- %d",totrent);
          break;
      }
   }



}
int main()
{
    struct Car c[3];
    int i;


   for(i=0;i<3;i++)
   {
        printf("\n Enter The Model Name :- ");
        fflush(stdin);
        gets(c[i].model);

        printf("\n Enter The id And rent of car :- ");
        scanf("%d %d",&c[i].id,&c[i].rent);
   }
   carrent(c);


}
*/
/*
#include"stdio.h"
struct marks{

int p:3;

int c:3;

int m:2;

};

void main(){

struct marks s={2,-6,5};

printf("%d %d %d",s.p,s.c,s.m);

}

/*
//#include "stdio.h"
int a = 20;
int main()
{
int a = 10;
printf("%d",a);
return 0;
}
*/
#include<stdio.h>
int main()
{
   int x = printf("GeeksQuiz");
   printf("%i", x);
   return 0;
}






















