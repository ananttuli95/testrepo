#include<fstream>
#include<iostream>

using namespace std;
class student
{       public:
	char name[10];
	int age;
	
};

int main()
{    student s1,s2;
     ofstream wfile("student.dat",ios::app);
     cout<<"Enter name : ";
     cin>>s1.name;
     cout<<"Enter age : ";
     cin>>s1.age;
	
     wfile.write((char*)&s1,sizeof(student));
     wfile.close();
     ifstream rfile("student.dat",ios::in);
     rfile.read((char*)&s2,sizeof(s2));
      rfile.close();
   return 0;
     

}
