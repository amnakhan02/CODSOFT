//********************************WORD COUNT********************************
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	  //declaring variables
	string word;
	string file_name;
	int count;
	count=0;
	cout<<"Enter the name of file you want to open:"<<endl;
	cin>>file_name;
	   //accessing to a file
	ifstream inputfile(file_name);
	if(!inputfile)
	{
		cout<<"Error! your file is not opening"<<endl;
	}
	if(inputfile>>word)
	{
		count++;
	}
	  //counting words
	cout<<"total number of words in this file: "<<file_name<<": "<<"is"<<count<<endl;
	return 0;
}