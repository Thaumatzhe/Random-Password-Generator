#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

const int MAX=90;
const int MIN=65;

char * createPassword();

int main()
{
	char * p=createPassword();
	
	
	
	return 0;
}

char * createPassword()
{
	unsigned seed = time(0);
	srand(seed);
	
	char x=' ';
	int passwordLength=0;
	int numOfPasswords=0;
	
	std::cout<<"How many char in passwrod";
	std::cin>>passwordLength;
	char * pwptr=new char[passwordLength];
	
	std::cout<<"How many passwords should be generared?";
	std::cin>>numOfPasswords;
	
	int passwordcount=0;
	do{
		for(int cnt=0;cnt<passwordLength;cnt++)
	{
			x=(rand()%(MAX-MIN+1))+MIN;
	pwptr[cnt]=x;
	std::cout<<pwptr[cnt];
}
std::cout<<std::endl;
passwordcount++;
}while(passwordcount != numOfPasswords);
	return pwptr;
}
