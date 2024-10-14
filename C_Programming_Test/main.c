///============================================================================================///
///--------Test 2 (String)--------------------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],temp;
    int i,j,pos;

    printf("\n Enter Your String :-  ");
    gets(str);

    while(1)
    {
        for(;str[i]==32;i++);

        for(j=i;str[j]!=32&&str[j]!='\0';j++);

        pos=j;

        for(j--;i<=j;i++,j--)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        i=pos;
        i++;
        if(str[i]=='\0')
        {
            break;
        }
    }
    puts(str);
    return 0;
}
*/
///===========================================================================================///
/*
#include<stdio.h>
int main()
{
    char str[50],wrd[20];
    int i,j,cnt=0,len1,len2,pos,flg=0;

    printf("\n Enter Your string :- ");
    gets(str);

    printf("\n Enter the word do you want to search :- ");
    gets(wrd);

    for(j=0;wrd[j]!='\0';j++);
    len2=j;

    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);

        for(j=i;str[j]!=32&&str[j]!='\0';j++);
        pos=j;
        len1=j;


        if(len1==len2)
        {
            flg=0;
            printf("\n Word count is :- %d",len1);
            for(j=0;j<=len2;j++)
            {
                if(str[i]==wrd[i])
                {
                    flg=1;
                }
            }
            if(flg==1)
            {
                cnt++;
            }
        }
        pos=i;
        i++;
    }
    printf("\n given word is present in %d times",cnt);
    return 0;
}

#include<stdio.h>
int main()
{
    char str[50],wrd[20];
    int i,j,cnt=0,len1,len2,pos,flg=0;

    printf("\n Enter Your string :- ");
    gets(str);

    printf("\n Enter the word do you want to search :- ");
    gets(wrd);

    for(i=0;str[i]!='\0';i++);
    len1=i;


    for(j=0;wrd[j]!='\0';j++);
    len2=j;

    for(i=0;i<=len1-len2;i++)
    {
            flg=0;
            for(j=0;j<=len2;j++)
            {
                if(str[i+j]!=wrd[j])
                {
                    flg=1;
                }
            }

            if(flg==1)
            {
                cnt++;
            }
    }
    printf("\n given word is present in %d times",cnt);
    return 0;

}
/*
 the tortoise was mocked foe bieng slow moving and the hare challlenges its to a race.
 the hare leaves the tortoise behind and being very confldent of its triumph falls asleep midway
*/
///============================================================================///
/*
#include<stdio.h>
int main()
{
    char str[200];
    int i,j,pos,cnt=0;

    printf("\n Enter your string :- ");
    gets(str);

    while(1)
    {
        for(;str[i]==32;i++);

        for(j=i;str[j]!=32&&str[j]!='\0';j++);
        pos=j;
        for(j--;j>=i;j++)
        {
            cnt++;
        }
        printf("\n Count is :- %d",cnt);

    }
}
*/

//#include<stdio.h>
//int main()
//{
//    char str[50],temp[50];
//    int i,j,sp;
//
//    printf("\n Enter Your String :- ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        for(;str[i]==32;i++);
//       // sp=i;
//
//        for(j=0;str[i]!=32;i++)
//        {
//            temp[j]=str[i];
//            j++;
//        }
//        temp[j]='\0';
//        puts(temp);
//
//    }
//    return 0;
//}
/*
#include<stdio.h>
int main()
{
    char str[50],temp;
    int i,j,k;
    char ch;

    printf("\n Enter Your string :- ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        //for(;str[i]==32;i++);
        for(j=i;str[j+1]!=32&&str[j+1]!='\0';j++)
        {
            for(k=j+1;str[k]!=32&&str[k]!='\0';k++)
            {
                if(str[k]<str[j])
                {
                    temp=str[j];
                    str[j]=str[k];
                    str[k]=temp;
                }
            }
        }
        i=j;
    }
    puts(str);
    return 0;
}*/

///===========================================================================================///
///---------------Enter any string throught keyboard and search palindrome words from it-----///
/*
#include<stdio.h>
int main()
{
    char str[50],temp[50];
    int i,j,k;

    printf("\n Enter your string :- ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        k=0;
        for(j=i;str[j]!=32&&str[j]!='\0';j++)
        {
            temp[k]=str[j];
            k++;
        }
       temp[k]='\0';
       i=j;
       puts(temp);
    }

    return 0;
}
*/
///===============================================================================//
///---Enter any string and find the lenght of last word(how many char in last word)--///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,cnt,ep=0,sp=0;
    printf("\n Enter your string :- ");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;
    printf("\n Ep is %d ",ep);

    for(cnt=0;str[ep]!=32&&str[ep]!='\0';ep--)
    {
        cnt++;
    }
    printf("\n World count is %d",cnt);
    return 0;
}
*/
///=====================================================================================///
///---------Enter any string throught keyboard and find the lenght of last word--------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,cnt=0,ep,sp;

    printf("\n Enter Your String :- ");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    for(i=0;str[i]==32;i++);
    sp=i;

    cnt=0;
    printf("\n %c",str[sp]);
    while(sp<=ep)
    {
        if(str[sp]==32&&str[sp+1]!=32)
        {
            printf("\n %c",str[sp+1]);
            cnt++;
        }
        else if(str[sp]!=32&&str[sp+1]==32 || str[sp+1]==0)
        {
            printf("\n %c",str[sp]);
        }
        sp++;
    }
    printf("\n Word count is :- %d ",cnt+1);
    return 0;

}
*/
///=============================================================================///
///-----
/*
#include<stdio.h>
int main()
{
    char str[50],ch[50];
    int i ,j,flg=0;
    printf("\n Enter your first String :- ");
    gets(str);

    printf("\n Enter your second String :- ");
    gets(ch);

    for(i=0;str[i]!='\0';i++);
    for(j=0;str[j]!='\0';j++)
    {
       flg=0;
       if(str[i]==ch[j])
       {
           flg=1;
       }
       else
       {
           str[i]=ch[j];
           i++;
       }
    }
    if(flg==0)
       {
          printf("\n Concrate string");
        puts(str);
       }

    return 0;

}
*/
///=========================================================================================///
///--------WAP to count the occurance of word in string------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],ch[50];
    int i,j,len1=0,len2=0,flg=0,cnt=0;;

    printf("\n Enter Your String :- ");
    gets(str);

    printf("\n Enter Your String do you want search:- ");
    gets(ch);


    for(i=0;str[i]!='\0';i++);
    len1=i;

    for(i=0;ch[i]!='\0';i++);
    len2=i;

    for(i=0;i<len1;i++)
    {
        flg=0;
        for(j=0;j<len2;j++)
        {
            if(str[i+j]!=ch[j])
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            cnt++;
        }
    }
    printf("\n Word occurance is :- %d",cnt);
    return 0;
}
*/
///======================================================================================///
/*
#include<stdio.h>
int main()
{
    char str[50],wrd[50],temp[50],temp1[50];
    int i,j,k,flg=0,len1,len2,m,n;

    printf("\n Enter Your String :- ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        k=0;
        len1=0;
        len2=0;
        for(j=i;str[j]!=32&&str[j]!='\0';j++)
        {
            temp[k]=str[j];
            k++;
            len1=k;
            printf("\n lenth of k %d",len1);
        }
        temp[k]='\0';
        for(k=0;temp[k]!='\0';k++);
        for(n=0;k>=0;n++,k--)
        {
            temp1[n]=temp[k];
            n++;
            len2=n;
            printf("\n lenth of 2 k %d",len2);
        }
        if(temp1==temp)
        {
             flg=0;
             for(j=0;j<len1;j++)
             {
                 if(temp1[j]!=temp[j])
                 {
                     flg=1;
                     break;
                 }
                 else
                 {
                    puts(str);
                 }
             }
        }
        if(flg==0)
        {
            puts(temp);
        }
        i=j;
    }
    return 0;
}
///====================================================================================///

#include<stdio.h>
int main()
{
    char str[50],temp[50],temp1[50];
    int i,j,k,len;

    printf("\n Enter Your string :- ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        k=0;
        for(j=i;str[j]!=32&&str[j]!='\0';j++)
        {
            temp[k]=str[j];
            k++;
            len=k;
        }
        printf("\n Len is %d ",len);
        printf("\n k is %d",k);
        i=j;
    }
}
///======================================================================================///
/*
#include<stdio.h>
int main()
{
    char str[50],wrd[50],temp[50];
    int i,j,flg=0,len,k;

    printf("\n Enter Your string :- ");
    gets(str);

    printf("\n Enter Your string :- ");
    gets(wrd);
    for(j=0;str[j]!='\0';j++);
    len=j;

    for(i=0;str[i]!='\0';i++)
    {
       k=0;
       for(j=0;j<len;j++)
       {
            if(str[i]!=wrd[j])
            {
                temp[k]=str[i];
            }
       }
    }
    puts(temp);
    return 0;
}

//==================================================================================================================
int main()
{
    char str[40];
    int i,j,wsp,wep;
    char tmp;
    printf("\n Enter the string: ");
    gets(str);

    printf("\n Entered string: %s",str);
    for(i=0;str[i]!='\0';i++)
    {
        for(;str[i]==32;i++);
        for(j=i;str[j]!=32&&str[j]!='\0';j++);
        wsp=i;
        wep=j-1;
        printf("\n %c -- %c",str[wsp],str[wep]);
        i=wep;

        tmp=str[wsp];
        str[wsp]=str[wep];
        str[wep]=tmp;
    }
    printf("\n After interchange string: %s",str);

    return 0;
}

*/
//========================================================================
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,sp,ep,a,b;

    printf("\n Enter the string :- ");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    for(i=0;str[i]==32;i++);
    sp=i;
    i=sp;
    while(sp<=ep)
    {
        for(;str[i]==32;i++);
        for(j=i;str[j]!=32;j++);
        a=i;
        b=j-1;
        printf("\n %c === %c",str[a],str[b]);
        i=j;
        sp++;
    }
}

#include<stdio.h>
int main()
{
    char str[50],temp;
    int i,j,wsp,wep;

    printf("\n Enter your String :- ");
    gets(str);

    printf("\n Enterde string is :- %s",str);
    for(i=0;str[i]!='\0';i++)
    {
        for(;str[i]==32;i++);
        for(j=i;str[j]!=32&&str[j]!='\0';j++);
        wsp=i;
        wep=j-1;
        i=wep;

        temp=str[wsp];
        str[wsp]=str[wep];
        str[wep]=temp;
    }
    printf("\n After processing string :- %s",str);
    return 0;
}
*/
//----------------------------------------------------------------------------------------
/*
int main()
{
    char str[50],tmp[30],t[30];
    int i,j=0,k,flg;
    printf("\n Enter any string: ");
    gets(str);

    printf("\n List of palindrome words from String: ");
    i=0;
    do
    {
        if(str[i]!=32&&str[i]!='\0')
            tmp[j++]=str[i];
        else
        {
            tmp[j]='\0';
            for(k=0,j--;j>=0;j--,k++)
            {
                t[k]=tmp[j];
            }
            t[k]='\0';
           // printf("\n word: %s \t copy: %s",tmp,t);
            flg=0;
            for(j=0;tmp[j]!='\0';j++)
            {
                if(t[j]!=tmp[j])
                {
                    flg=1;
                    break;
                }
            }
            if(flg==0)
            {
                printf("%s \t",tmp);
            }
            j=0;
        }
    }while(str[i++]!='\0');
    return 0;
}
*/
///===========================================================================================///
///-------------------------Structure Class test---------------------------------------------///

///--1.Write a program to store and print the roll no., name , age and marks of a student using structures.
/*
#include<stdio.h>
struct Student
{
    int rno;
    char nm[20];
    int age;
    int marks[3];
};
int main()
{
    struct Student s;
    int i;
    printf("\n Enter The Name of Student :- ");
    gets(s.nm);

    printf("\n Enter The roll no And age of stduent :- ");
    scanf("%d %d",&s.rno,&s.age);

    printf("\n Enter the Marsk of Student :- ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&s.marks[i]);
    }

    printf("\n ******Student Details *****");
    printf("\n Name :- %s\t Roll No :- %d\t Age:- %d\t ",s.nm,s.rno,s.age);
    printf("Marks:-");
    for(i=0;i<3;i++)
    {
        printf("%6d",s.marks[i]);
    }
    return 0;
}
*/
///=========================================================================================///
///------Write a program to store the roll no. (starting from 1), name and age
///------of 5 students and then print the details of the student with roll no. 2.
/*
#include<stdio.h>
struct Student
{
    int rno;
    int age;
    char nm[50];
};
void display(struct Student s[],int rollno)
{
    int i;
    printf("****Student Details****");
    for(i=0;i<3;i++)
    {
        printf("\n Name:-%s\t Roll No:- %d\t age:-%d",s[i].nm,s[i].rno,s[i].age);
    }
    for(i=0;i<3;i++)
    {
        if(s[i].rno==rollno)
        {
            printf("\n");
            printf("\n Name:-%s\t Roll No:- %d\t age:-%d",s[i].nm,s[i].rno,s[i].age);
        }
    }
}
int main()
{
    struct Student s[3];
    int i,rollno;
    printf("\n Enter the Student Details :- ");
    for(i=0;i<3;i++)
    {
        printf("\n Enter The name of stduents :- ");
        fflush(stdin);
        gets(s[i].nm);

        printf("Enter the Roll no and age of stduent ;- ");
        scanf("%d %d",&s[i].rno,&s[i].age);
    }
    printf("\n Enter the Roll no :-");
    scanf("%d",&rollno);
    display(s,rollno);
}
*/
///=========================================================================================///
///-----.Write a program to store and print the roll no., name, age, address and
///------marks of 15 students using structure.
/*
#include<stdio.h>
struct Student
{
    int rno;
    char nm[20];
    int age;
    char str[50];
    int marks[3];

};
int main()
{
    struct Student s[15];
    int i,j;
    printf("\n Enter the student details :- ");
    for(i=0;i<15;i++)
    {
        printf("\n Enter the Student name:- ");
        fflush(stdin);
        gets(s[i].nm);

        printf("\n Enter the Roll And Age :- ");
        scanf("%d %d",&s[i].rno,&s[i].age);

        printf("\n Enter the Address of Student :- ");
        fflush(stdin);
        gets(s[i].str);

        printf("\n Enter the marks of stduent");
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }
    printf("\n ******Student Details*****\n");
    for(i=0;i<15;i++)
    {
        printf("\n Name:-%s\t Roll NO:- %d\t Age:-%d\t Add:-%s\t",s[i].nm,s[i].rno,s[i].age,s[i].str);
        printf("marks:-");
        for(j=0;j<3;j++)
        {
            printf("%5d",s[i].marks[j]);
        }
    }
    return 0;

}
*/
///==========================================================================================///
///-----Write a program to add two distances in inch-feet using structure. The
///-------------values of the distances is to be taken from the user.
/*
#include<stdio.h>
struct Add
{
    float inch;
    float feet;
};
int main()
{
    struct Add a;
    float sum;
    printf("\n Enter the Value of Distanace one and Distanace two ");
    scanf("%f %f",&a.inch,&a.feet);

    sum=a.inch+a.feet;

    printf("\n Sum of two Distance:- %.3f",sum);
    return 0;

}
*/
///===================================================================================///
///.Enter the marks of 5 students in Chemistry, Mathematics and Physics
///(each out of 100) using a structure named Marks having elements roll no.,
///name, chem_marks, maths_marks and phy_marks and then display the
///percentage of each student.
/*
#include<stdio.h>
struct Student
{
    char nm[50];
    int rno;
    int chem;
    int math;
    int phy;
};
int main()
{
    struct Student s[3];
    int i,tot=0;
    float per;
    for(i=0;i<3;i++)
    {
        printf("\n Enter the name of student:- ");
        fflush(stdin);
        gets(s[i].nm);

        printf("\n Enter the Roll No And marks of chem,maths and physics:- ");
        scanf("%d%d%d%d",&s[i].rno,&s[i].chem,&s[i].math,&s[i].phy);
    }

    printf("\n ********Student Details******");
    for(i=0;i<3;i++)
    {
        tot=0;
        printf("\n Name:- %s\t Roll No:-%d\t",s[i].nm,s[i].rno);
        printf("Marks:-");
        printf("\t chem: %d\t math: %d\tphy: %d",s[i].chem,s[i].math,s[i].phy);

        tot=s[i].chem+s[i].math+s[i].phy;

        per=tot/3;

        printf("\n Percentage of  %d Student is %f",i+1,per);
    }
    return 0;
}
*/
///=======================================================================================///
///---Write a program to add, subtract and multiply two complex numbers using structures to function.
/*
#include<stdio.h>
struct Complex
{
    int r1,r2;
    int i1,i2
};
void add(struct Complex c)
{
    int real=c.r1+c.i1;
    int img=c.i2+c.r2;

    printf("\n Addition of complex number is %d+%di",real,img);
}
void subtract(struct Complex c)
{
    int real=c.r1-c.i1;
    int img=c.i2-c.r2;

    printf("\n Subtraction of complex number is %d-%di",real,img);
}
void multi(struct Complex c)
{
    int real=(c.r1+c.r2)-(c.i1+c.i2);
    int img=(c.i2+c.r2)+(c.i1+c.i2);

    printf("\n Multiflication of complex number is %d+%di",real,img);
}
int main()
{
    struct Complex c;
    printf("\n Enter The two real no :- ");
    scanf("%d%d",&c.r1,&c.r2);

    printf("\n Enter the Imaginary No:- ");
    scanf("%d%d",&c.i1,&c.i2);

    add(c);
    subtract(c);
    multi(c);
    return 0;
}
*/
///=========================================================================================///
///-7.Write a structure to store the roll no., name, age (between 11 to 14)
///and address of students (more than 10). Store the information of the students.
///1 - Write a function to print the names of all the students having age 14.
///2 - Write another function to print the names of all the students having even roll no.
///3 - Write another function to display the details of the student whose
///----roll no is given (i.e. roll no. entered by the user).
/*
#include<stdio.h>
struct Student
{
    int rno;
    char nm[20];
    int age;
    char add[50];
};
void exactage(struct Student s[])
{
    int i;
    printf("\n the student having 14 age :-");
    for(i=0;i<10;i++)
    {
       if(s[i].age==14)
       {
          printf("\n Name:-%s\t Roll No:-%d\tAge:-%d\tAdd:-%s",s[i].nm,s[i].rno,s[i].age,s[i].add);
       }
    }
}
void evenno(struct Student s[])
{
    int i;
    printf("\n The Even Roll no Student Information:- ");
    for(i=0;i<10;i++)
    {
       if(s[i].rno%2==0)
       {
          printf("\n Name:-%s\t Roll No:-%d\tAge:-%d\tAdd:-%s",s[i].nm,s[i].rno,s[i].age,s[i].add);
       }
    }
}
void display(struct Student s[],int rollno)
{
    int i;
    printf("\n Your Search Information:-");
    for(i=0;i<10;i++)
    {
       if(s[i].rno==rollno)
       {
          printf("\n Name:-%s\t Roll No:-%d\tAge:-%d\tAdd:-%s",s[i].nm,s[i].rno,s[i].age,s[i].add);
       }
       else
       {
           printf("\n Your Enter The Wrong Roll No!!!!!!!!");
       }
    }
}
int main()
{
    struct Student s[5];
    int i,rollno;
    printf("\n Enter The 5 Student Details:- ");
    for(i=0;i<10;i++)
    {
       printf("\n Enter The Student name:- ");
       fflush(stdin);
       gets(s[i].nm);

       printf("\n Enter the Roll and Age(Age between 11 to 14)");
       scanf("%d %d",&s[i].rno,&s[i].age);

       printf("\n Enter the Add of student :- ");
       fflush(stdin);
       gets(s[i].add);
    }
    exactage(s);
    evenno(s);

    printf("\n Enter the Roll No do want Searched:- ");
    scanf("%d",&rollno);
    display(s,rollno);

    return 0;
}
*/
///========================================================================================///
///-Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
///1 - Write a function to print the names of all the customers having balance less than $200.
///2 - Write a function to add $100 in the balance of all the customers
///----having more than $1000 in their balance and then print the incremented value of their balance.
/*
#include<stdio.h>
struct Bank
{
    char nm[20];
    int accno;
    float balance;
};
void bal_less(struct Bank b[])
{
    int i;
    printf("\n ****The custmer have less balance(less than 200) list**** ");
    for(i=0;i<5;i++)
    {
        if(b[i].balance<200)
        {
            printf("\n Name:-%s\t Account No :-%d\t Increment Balance:-%f\t",b[i].nm,b[i].accno,b[i].balance);
        }
    }
}
void increment(struct Bank s[])
{
    int i;
    printf("\n *****More than 1000 rupee Custmore list\*****n");
    for(i=0;i<5;i++)
    {
        if(s[i].balance>1000)
        {
            printf("\n Name:-%s\t Account No :-%d\t Balance:-%f\t",s[i].nm,s[i].accno,s[i].balance+100);
        }
    }
}
int main()
{
    struct Bank b[5];
    int i;

    printf("\n Enter the Customer details:- ");
    for(i=0;i<5;i++)
    {
        printf("\n The the Name of customer:- ");
        fflush(stdin);
        gets(b[i].nm);

        printf("\n Enter the Custmore Account Number:- ");
        scanf("%f",&b[i].accno);

        printf("\n Enter the Custmore Balance:- ");
        scanf("%f",&b[i].balance);
    }
    bal_less(b);
    increment(b);
}
*/
///==========================================================================================///
///--.Write a program to compare two dates entered by user. Make a structure
///named Date to store the elements day, month and year to store the dates.
///If the dates are equal, display "Dates are equal" otherwise display
///"Dates are not equal".
/*
#include<stdio.h>
struct Compare
{
    int d1,d2;
    int mon,mon1;
    int year,year1;
};
int main()
{
    struct Compare c;
    printf("\n Enter The first Date:- ");
    printf("\n Enter The Day,Month and Year:- ");
    scanf("%d%d%d",&c.d1,&c.mon,&c.year);

    printf("\n Enter The second Date:- ");
    printf("\n Enter The Day,Month and Year:- ");
    scanf("%d%d%d",&c.d2,&c.mon1,&c.year1);
    if(c.year==c.year1)
    {
        if(c.mon==c.mon1)
        {
            if(c.d1==c.d2)
            {
                printf("\n Dates are equal");
            }
            else
            {
                printf("\n Dates are not equal");
            }
        }
        else
        {
            printf("\nDates are not equal");
        }
    }
    else
    {
        printf("\n Dates are not equal");
    }
    return 0;
}
*/
///=====================================================================================///
///-Write a structure to store the names, salary and hours of work per day
///of 10 employees in a company. Write a program to increase the salary
///depending on the number of hours of work per day as follows and then
///print the name of all the employees along with their final salaries.
///Hours of work per day 8 10 >=12
///Increase in salary $50 $100 $150

#include<stdio.h>
struct Employe
{
    char nm[50];
    float salary;
    int hour;
};
void increament(struct Employe e[])
{
    int i;
    printf("\n ***Base of Working hour Increament Salary List***");
    for(i=0;i<5;i++)
    {
        if(e[i].hour<=8)
        {
            e[i].salary=e[i].salary+50;
            printf("\n Name :- %s\t Salary:-%f\tHourofworking:-%d",e[i].nm,e[i].salary,e[i].hour);
        }
        else if(e[i].hour>8&&e[i].hour<=10)
        {
            e[i].salary=e[i].salary+100;
            printf("\n Name :- %s\t Salary:-%f\tHourofworking:-%d",e[i].nm,e[i].salary,e[i].hour);
        }
        else
        {
            e[i].salary=e[i].salary+150;
            printf("\n Name :- %s\t Salary:-%f\tHourofworking:-%d",e[i].nm,e[i].salary,e[i].hour);
        }
    }
}
int main()
{
    struct Employe e[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the Name of Employe:-");
        fflush(stdin);
        gets(e[i].nm);

        printf("\n Enter the Employe Salary:- ");
        scanf("%d",&e[i].salary);

        printf("\n Enter the Employe Work Hour:- ");
        scanf("%d",&e[i].hour);
    }
    increament(e);

}















































