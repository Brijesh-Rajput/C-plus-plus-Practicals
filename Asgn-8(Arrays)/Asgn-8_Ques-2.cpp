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
    void setEmployeeName(char n[])
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
int main()
{
    Employee e1;
    e1.showEmployee();
  //e1.setEmployeeName("Hii");
    e1.setEmployeeName("Mahesh");  //why @symbol is printing at last of the mahesh?
  //e1.setEmployeeName("JavaGuru");
    e1.setEmpployeeId(123940);
    e1.setEmployeeSalary(48000.589);
    e1.showEmployee();
    getch();
}
























/*
#include<iostream>
int main()
{
    string name="Hello"; error: 'string' was not declared in this scope
}
*/
