#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee
{
private:
    int empid;
    char name[25];
    float salary;
public:
    Employee(){empid=0; salary=0.0; strcpy(name,"");}
    void setEmpployeeId(int id){ empid=id; }
    void setEmployeeName(char n[])  ///there is no warning b'coz this function contains loop and then also it requested for inline function
    {
        for(int i=0;n[i];i++)
            name[i]=n[i];
    }
    void setEmployeeSalary(float s){ salary=s; }
    void showEmployee(){ cout<<"Employee id ="<<empid<<endl<<"Employee Name="<<name<<endl<<"Employee salary="<<salary<<"\n"<<endl; }
    float getSalary(){return salary;}
    char* getname(){return name;}
    int getEmpid(){return empid;}
};
//These Below all functions are not member function b'coz they are not doing any work on an instance member variable. They are doing work on a data which is given to that particular function.
void displayEmployees(Employee e[],int size)
{
    cout<<"From Display Employees"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Employee "<<i+1<<endl;
        e[i].showEmployee();
    }
}
void sortEmployeeBySalary(Employee e[],int size)
{
    //using Bubblesort
    for(int r=1;r<size;r++)
    {
        for(int i=0;i<size-r;i++)
            if(e[i].getSalary()>e[i+1].getSalary())
            {
                //swap the objects NOT the salary
                Employee temp;
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
                //Instead of all this we can copy directly
                /*
                temp.setEmployeeName(e[i].getname());
                temp.setEmpployeeId(e[i].getEmpid());
                temp.setEmployeeSalary(e[i].getSalary());
                */
            }
    }
    cout<<"From Sort By Salary"<<endl;
    displayEmployees(e,size);
}
void sortEmployeeByEmpid(Employee e[],int size)
{
    //using Bubblesort
    for(int r=1;r<size;r++)
    {
        for(int i=0;i<size-r;i++)
            if(e[i].getEmpid()>e[i+1].getEmpid())
            {
                //swap the objects NOT the empid
                Employee temp;
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }
    }
    cout<<"From Sort By Empid"<<endl;
    displayEmployees(e,size);
}
void sortEmployeeByName(Employee e[],int size)
{
    //using Bubblesort
    for(int r=1;r<size;r++)
    {
        for(int i=0;i<size-r;i++)
            if((strcmp(strupr(e[i].getname()),strupr(e[i+1].getname())))>0)
            {
                //swap the objects NOT the name
                Employee temp;
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }
    }
    cout<<"From Sort By Name"<<endl;
    displayEmployees(e,size);
}
int main()
{
    //Employee e[5]={(),(),(),()} //How to initialize an array of non-primitive data-type like this
    Employee e[5];

    e[0].setEmployeeName("Mahesh");
    e[0].setEmpployeeId(161);
    e[0].setEmployeeSalary(9340.489);

    //salary of both mahesh and hitesh is mostly similar.Difference in only some point

    e[1].setEmployeeName("Hitesh");
    e[1].setEmpployeeId(195);
    e[1].setEmployeeSalary(9340.68);

    e[2].setEmployeeName("ritesh");
    e[2].setEmpployeeId(165);
    e[2].setEmployeeSalary(100340.3);

    e[3].setEmployeeName("Ramesh");
    e[3].setEmpployeeId(135);
    e[3].setEmployeeSalary(24340.489);

    e[4].setEmployeeName("Rahul");
    e[4].setEmpployeeId(184);
    e[4].setEmployeeSalary(90040.489);

    displayEmployees(e,5);
    cout<<"---------------"<<endl;
    sortEmployeeByEmpid(e,5);
    cout<<"---------------"<<endl;
    sortEmployeeByName(e,5);
    cout<<"---------------"<<endl;
    sortEmployeeBySalary(e,5);
    cout<<"---------------"<<endl;

    getch();
}
