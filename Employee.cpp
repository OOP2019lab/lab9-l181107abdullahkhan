#include "Employee.h"
#include "Address.h"
#include "Project.h"

Employee::Employee(char* Name, const Address& address)
	:add(address)
{
	np=0;
	emp_name=new char[strlen(Name+1)];
	for (int i=0;i<strlen(Name+1) ;i++)
	{
		emp_name[i]=Name[i];
	}
	for (int i=0;i<2;i++)
	{
		proj[i]=nullptr;
}

	Employee::Employee(const Employee& e)
	:add(e.add)
{
	np=0;
	emp_name=new char[strlen(e.emp_name+1)];
	for (int i=0; e.emp_name[i]!= '/0';i++)
	{
		emp_name[i]=e.emp_name[i];
	}
	int k=0;
	for(int i=0;e.proj[i]!=nullptr;i++)
	{
		k++;
	}
	proj=new Project*[k];
	for(int i=0;i<k;i++)
	{
		proj[i]=e.proj[i];
	}
	
}
ostream& operator<<(ostream& osObject, const Employee& e1)
{
    for (int i=0;i<strlen(e1.emp_name)+1;i++)
	{
		osObject<<e1.emp_name[i];
	}

	return osObject;
}
Employee::~Employee()
{
	delete[]emp_name;
	emp_name=nullptr;
	for(int i=0;proj!=nullptr;i++)
	{
		delete proj[i];
	}
	delete [] proj;
}

void Employee::addProject(Project const *project)
{
	if (np >= 2)
		cout << "projects full "<<endl;
	else
	{
		projects[np] = new Project(*project);
		np=np+1;
	}
}

void Employee::removeProject(Project const* p)
{int k=0;
	for (int i = 0; i < 2; i++)
	{
		if (proj[i] == p)
			{
				proj[i] = nullptr;
		       k=1;
		    }
	}
	if (k=0)
	{
		cout<<"project not found"<<endl;
	}
}
const Employee & Employee::operator=(const Employee& other){

	add=other.add;
	emp_name=new char[strlen(other.emp_name+1)];
	for (int i=0;i<strlen(other.emp_name+1);i++)
	{
		emp_name[i]=other.emp_name[i];
	}
	

	for(int i=0;i<sizeof(other.proj);i++)
	{
		proj[i]=other.proj[i];
	}
	return *this;
}