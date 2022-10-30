//Check any two files which are identical or Not 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream FILE1,FILE2;
    int ch1,ch2;
    char filename1[20],filename2[20];
    cout<<"\n Enter the name of the first filename : ";
    cin.getline(filename1,20);
    cin.ignore();
    cout<<"\n Enter the name of the second filename : ";
    cin.getline(filename2,20);
    FILE1.open(filename1,ios::in);
    FILE1.open(filename2,ios::in);
    while(FILE1.eof()==0 && FILE2.eof()==0 )
    {
        ch1=FILE1.get();
        ch2=FILE2.get();
    }
    if(ch1==ch2)
    cout<<"\n Files are identical ";
    else
    cout<<"\n Files are not identical ";
    FILE1.close();
    FILE2.close();

    return 0;
}
