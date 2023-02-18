#include <iostream>
using namespace std;
class Student
{
private:
    char Name[30];
    int rollno,class_no;

public:
    Student(char a[30], int rollNo, int cl)
    {
        int i;
        for(i=0;a[i];i++)
            Name[i]=a[i];
        rollno=rollNo;
        class_no=cl;
        
    }

    void showStudentDetails();
};
void Student::showStudentDetails()
{
    cout<<"name : "<<Name<<"roll no. : "<<rollno<<endl<<"class : "<<class_no<<endl;
}
int main()
{
    char name[30];
    int r,c;
    cout<<"Enter student name,roll no and class no : "<<endl<<"name : ";
    fgets(name,30,stdin);
    cout<<"roll no : ";
    cin>>r;
    cout<<"class : ";
    cin>>c;
    Student st(name,r,c);
    st.showStudentDetails();
    return 0;
}