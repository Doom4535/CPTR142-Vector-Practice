//============================================================================
// Name        : vector_practice.cpp
// Author      : Aaron C.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>

//using namespace std;

struct Student{
	int ID;
	std::string fname;
	std::string lname;
	std::string major;

	Student(int id, std::string fn, std::string ln, std::string m)
	{ ID=id; fname=fn; lname=ln; major=m;}
};

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!


	// Practice 1 - student vector
	std::vector<std::string> lnames;
	lnames.vector::push_back("Alexander");
	lnames.push_back("King-Kong");
	lnames.push_back("Wayne");
	lnames.push_back("Norris");
	lnames.push_back("Jones");

	for(unsigned int i=0; i< lnames.size(); i++){
		std::cout << lnames.at(i) << std::endl;
		//std::cout << lnames[i] << std::endl;
	}
	lnames.pop_back();
	std::cout << "number names: " << lnames.size() << std::endl;
	for(unsigned int i=0; i < lnames.size(); i++)
		std::cout << lnames.at(i) << std::endl;

	// Practice 2 - vector of struct objects
	std::vector<Student> st;
	Student s1(899, "Mary", "Smith", "CS");
	Student s2(801, "Bob", "Smith", "CENg");
	Student s3(458, "Jenny", "Roberts", "CS");
	Student s4(985, "John", "Awesome", "EE");

	st.push_back(s1);
	st.push_back(s2);
	st.push_back(s3);

	for(unsigned int i=0; i <st.size(); i++){
		std::cout << st[i].ID << " " << st[i].fname << " " << st.at(i).lname << " "  << st[i].major << std::endl;
	}

	return 0;
}
