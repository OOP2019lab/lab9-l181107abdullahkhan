#include "Address.h"
#include "Project.h"
#include "Employee.h"

Project::Project(char* n, int b, int d){

	int a=strlen(n);
	name=new char[a+1];
	for(int i=0;i<a+1;i++)
	{
		name[i]=n[i];
	}
	name[a+1]=NULL;
	budget =b;
	duration =d;
}

Project::Project(const Project& a){
	budget=a.budget;
	duration=a.duration;
	int b=strlen(a.name);
	name=new char[b+1];
	for(int i=0;i<b+1;i++)
	{
		name[i]=a.name[i];
	}
	name[b+1]=NULL;
}

void Project::setBudget(int k){
	budget=k;
}

Project::~Project(){

	delete[] name;
	name=nullptr;
}

 const Project & Project::operator=(const Project& other){
	 budget=other.budget;
	duration=other.duration;
	int b=strlen(other.name);
	name=new char[b+1];
		for(int i=0;i<b+1;i++)
	{
		name[i]=other.name[i];
	}
		name[b+1]=NULL;
		return *this;
}