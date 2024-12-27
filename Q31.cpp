#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string studname;
    string rno;
    int S1,S2,S3;
    double total;

    Student(){
        cout<<"Enter the name of the student: ";
        getline(cin,studname);
        cout<<"Enter the Roll No.: ";
        cin>>rno;
        cin.ignore();
    }

    void marks(){
        cout<<"Enter the marks (S1): ";
        cin>>S1;
        cout<<"Enter the marks (S2): ";
        cin>>S2;
        cout<<"Enter the marks (S3): ";
        cin>>S3;

        total = ((S1+S2+S3) / 300.0)*100;
    }

    void display(){
        cout<<"========================================="<<endl;
        cout<<"R No.   Name   S1  S2  S3  Total(%)\n"<<endl;
        cout<<"========================================="<<endl;
        cout<<" "<<rno<<"   "<<studname<<"  "<<S1<<"  "<<S2<<"  "<<S3<<"   "<<total;
    }
};

int main()
{
    Student stud1;
    stud1.marks();
    stud1.display();
    return 0;
}