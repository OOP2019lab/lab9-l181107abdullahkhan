#include "Address.h"
#include "Project.h"
#include "Employee.h"

Address::Address(char* h, char* s, char * c,char* C){

	house_Number=new char[strlen(h)+1];
	for(int i=0;i<strlen(h)+1;i++){

		house_Number[i]=h[i];
	}
	house_Number[strlen(h)+1]=NULL;

	street_Name=new char[strlen(s)+1];
	for(int i=0;i<strlen(s)+1;i++)
	{
		street_Name[i]=s[i];
	}
	street_Name[strlen(s)+1]=NULL;

	city=new char[strlen(c)+1];
	for(int i=0;i<strlen(c)+1;i++){
		city[i]=c[i];
	}
	city[strlen(c)+1]=NULL;
	county=new char[strlen(C)+1];
	for(int i=0;i<strlen(C)+1;i++){
		county[i]=C[i];
	}
	county[strlen(C)+1]=NULL;
}
Address::Address(const Address& a){

	house_Number=new char[strlen(a.house_Number)+1];
	for(int i=0;i<strlen(a.house_Number)+1;i++){

		house_Number[i]=a.house_Number[i];
	}
	street_Name=new char[strlen(a.street_Name)+1];
	for(int i=0;i<strlen(a.street_Name)+1;i++)
	{
		street_Name[i]=a.street_Name[i];
	}
	city=new char[strlen(a.city)+1];
	for(int i=0;i<strlen(a.city)+1;i++){

		city[i]=a.city[i];
	}
	county=new char[strlen(a.county)+1];
	for(int i=0;i<strlen(a.county)+1;i++){
		county[i]=a.county[i];
	}

}
const Address &Address::operator=(const Address& a){
	house_Number=new char[strlen(a.house_Number)+1];
	for(int i=0;i<strlen(a.house_Number)+1;i++){

		house_Number[i]=a.house_Number[i];
	}
	street_Name=new char[strlen(a.street_Name)+1];
	for(int i=0;i<strlen(a.street_Name)+1;i++)
	{
		street_Name[i]=a.street_Name[i];
	}
	city=new char[strlen(a.city)+1];
	for(int i=0;i<strlen(a.city)+1;i++){

		city[i]=a.city[i];
	}
	county=new char[strlen(a.county)+1];
	for(int i=0;i<strlen(a.county)+1;i++){
		county[i]=a.county[i];
	}
	return *this;
}
Address::~Address(){

	delete[] house_Number;
	delete[] street_Name ;
	delete[] city;
	delete[] county;
}
