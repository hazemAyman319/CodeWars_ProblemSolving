#include <iostream>
#include <bits\stdc++.h>
using namespace std;
const int MAX = 10000;
bool compare_salary(employee &a , employee &b) //used in sort() function
{
    return a.salary > b.salary; //bigger salary first
}
bool compare_names(employee &a , employee &b)
{
    return a.name < b.name; //smaller names first
}
bool compare_names_salary(employee &a , employee &b) //smaller name first if tie then smaller salary
{
    if(a.name != b.name)
        return a.name < b.name;
    return a.salary < b.salary;
}
struct full_name
{
    string first , middle , last;
    full_name()
    {
        first=middle=last=" "; // empty constructor created
    }
    full_name(string _first , string _last) //constructor with parameters created
    {
        first = _first;
        last = _last;
        middle = " ";
    }
    void read()
    {
        cout<<"Enter First middle last name : ";
        cin>>first>>middle>>last;
    }
};
struct employee
{
    full_name name; //string name
    int age;
    double salary;
    char gender;

    void read()
    {
        emp_name.read(); //read function of the above struct inside struct
    }
    int get_age()
    {
        return age; //function to return the age
    }
    void set_age(int new_age)
    {
        age=new_age; //function inside the struct
    }
};
employee employees_arr[MAX];
int added = 0;

void read_employee(employee &e)
{
    cout<<"Enter Employee 4 entries : ";
    cin>>employees.name>>employees.age;
    cin>>employees.age>>employees.gender;
}
void print_employees(employee &e)
{
    for(int i=0;i<added;i++)
    {
        employee emp = employees_arr[i];
        cout<<emp.name<<" has a salary "<<emp.salary<<endl;
    }
}
int main()
{
    employee emp1 = {"Hazem" , 21 , 3500.5 , 'M'};
    employees_arr[added++]=emp1;
    cout<<emp1.name<<endl;
    employee emp2;
    emp2.name="Mazen";
    emp2.age=19;
    emp2.salary=2000.5;
    emp2.gender='M';
    employees_arr[added++]=emp2;
    cout<<emp2.name<<endl;
    for(int i=0;i < added;i++)
    {
        cout<<employees_arr[i].name<<endl;
    }
    read_employee(employees_arr(added++)); //sent by reference not by value
    employees_arr[added].get_age();
    sort(employees_arr , employees_arr + added , compare_name_salary);//sort technique
}
