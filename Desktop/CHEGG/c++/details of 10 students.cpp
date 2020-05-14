#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class student{

private:
    int rollno;
    char name[25];
    float marks;
    char grade;
public:
    void readstudent()
    {
        cout<<"\n enter roll nummber:";
        cin>>rollno;
        cout<<"\nenter name of the student:";
        cin>>name;
        cout<<"\n enter marks:";
        cin>>marks;
    }
    void displaystudent()
    {calcgrade();
        cout<<"\nroll no:\t"<<rollno<<endl;
        cout<<"\nname:\t"<<name<<endl;
        cout<<"\nmarks:\t"<<marks<<endl;
        cout<<"\ngrade:\t"<<grade<<endl;
    }
    int getrollno()
    {
        return rollno;
    }
    int getmarks()
    {
        return marks;
    }
    void calcgrade()
    {
        if(marks>=90)
            grade='o';
        else if(marks>=80)
            grade='a';
        else if(marks>=70)
        grade ='b';
        else if (marks>=60)
            grade='c';
        else if(marks>=50)
            grade='d';
        else
            grade='f';
    }
};
int main()
{
    student XIIa[10];
    for(int i=0;i<10;++i)
    {
        cout<<"\n enter details of students"<<i+1<<":";
        XIIa[i].readstudent();

    }
    int i, choice,rno,pos=-1,highmarks=0;
    do{
cout<<"\n\n main manu\n";
    cout<<"1.specific student\n";
    cout<<"2. topper\n";
    cout<<"3.exit \n";
    cout<<"\nenter choice(1..3):";
    cin>>choice;
    switch(choice){
case 1:
    cout<<"\nenter the roll no. of student :";
    cin>>rno;
    for(int i=0;i<10;++i)
        {
            if (XIIa[i].getrollno()==rno)
            {
                XIIa[i].displaystudent();
                break;
            }
        }
        if(i==10)
        {
            cout<<"invalid roll number!";
            break;
        }
case 2:
    for(int i=0;i<10;i++)
    {
        if (XIIa[i].getmarks()>highmarks)
        {
            pos=i;
            highmarks=XIIa[i].getmarks();


        }
    }
    XIIa[pos].displaystudent();
    break ;
case 3:
    break;
default :
    cout<<"\n wrong choice";
    break;
    }

    }while(choice>=1&&choice<=3);
    return 0;
}
