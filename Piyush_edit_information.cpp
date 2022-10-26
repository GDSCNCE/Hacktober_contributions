#include<bits/stdc++.h>
using namespace std;
int main()
{
    struct student
    {
        int roll_no;
        char name[20];
        float fees;
        char DOB[50];
    };
    student stud[50];
int n,i,rollno,new_rollno;
float new_fees;
char new_name[20],new_DOB[80];
cout<<"Enter the total number of student\n";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter the roll no of the student\n";
cin>>stud[i].roll_no;
cout<<"Enter the name of the student\n";
cin>>stud[i].name;
cout<<"Enter the fees of the student\n";
cin>>stud[i].fees;
cout<<"Enter the DOB of the student\n";
cin>>stud[i].DOB;
}
cout<<"\n Enter the Record Number of the rollno of the student whose record has to be edited :\n";
cin>>rollno;
rollno=rollno-1;
cout<<"Enter the roll number :\n";
cin>>new_rollno;
cout<<"Enter the name of the student :\n";
cin>>new_name;
cout<<"Enter the fees :\n";
cin>>new_fees;
cout<<"Enter the DOB :\n";
cin>>new_DOB;
stud[rollno].roll_no=new_rollno;
strcpy(stud[rollno].name,new_name);
stud[rollno].fees=new_fees;
strcpy(stud[rollno].DOB,new_DOB);
for(i=0;i<n;i++)
{
    cout<<"******Details Of "<<i+1<<" Student******\n";
    cout<<"Roll Number : "<<stud[i].roll_no<<endl;
    cout<<"Name : "<<stud[i].name<<endl;
    cout<<"Fees : "<<stud[i].fees<<endl;
    cout<<"DOB : "<<stud[i].DOB<<endl;
}
    return 0;
}
