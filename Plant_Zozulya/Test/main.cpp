#include <iostream>
#include "classes.h"


int main()
{
    cout << "Employee ->" << endl;
    Employee *emp = new Employee("Name1", "Surname1", 10, 1000, 100);
    cout << "Manger ->" << endl;
    Manager *mng = new Manager("Manager_Name", "Manager_Surname", 5);
    mng->AddEmployee(emp);
    mng->EmployeeList();
    cout << "Equipment ->" << endl;
    Equipment *equip = new Equipment();
    equip->equip_inf("eq1", 10, 1000);
    cout << equip->price_of_equip() << endl;
    emp->AddEquipment(equip);
}
