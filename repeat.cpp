#include "repeat.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void Repeat::run(){
	cout<<"running repeat"<< value <<endl;
	for (int i = 1;i <= value; ++i)
	{
 	  cout<<"Repeat number "<< i <<endl;
	  prog.run();
	}
}

//Code by Alana Jaison
std::istream& operator>>(std::istream& in, Repeat& prog){
	//cout<<"given to repeat"<<endl;
	//std::string line, loop;
	//getline(in, line);
	//cout<<line<<endl;

	
	std::string tempstr;
	in >> prog.value;
        in >> tempstr;

 

	if (tempstr.front() == '[')in >> prog.prog;
	else
	{
	/*   prog.value = stoi(line.substr(7, line.find(" ")));
	cout<<" value = "<<prog.value<<endl;


	int lengthofvec = (line.length() - 2);
	loop = line.substr((line.find("[")-1),lengthofvec);
	cout<<" Loop "<<loop<<endl;
	std::stringstream ss(loop);
	ss >> prog.prog;*/
	}
	return in;



	

  }

