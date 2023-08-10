//**********************code for manage students names and grades and calculate highest grade, lowest grade and average of grades***************************
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	  //code for taking names as input
   string add;
   string name;
   vector<string> names;
   while (true)
   {
       cout <<"Would you like to add a name? Yes or No? \n";
        getline(cin, add);
    if  (add == "yes" or add == "Yes")
        {
            cout<<"Enter a name\n";
            getline(cin, name); 
            names.push_back(name);
        }
    else if( add == "no" or add == "No")
        {
          break;
        }
    else
    {
        cout <<"sorry, that is not a valid response"<<endl <<endl;
    }
   }
    //code for taking grades as input
   int n;
   cout<<"total number of students are:"<<endl;
   cin>>n;
   float grades[50];
   cout<<"enter their corresponding grades"<<endl;
   for(int i=0; i<n; i++)
   {
   	cout<<"grade for next student:"<<endl;
   	cin>>grades[i];
   }
   //code for finding highest and lowest grades
   	float highest_grades;
	float lowest_grades;
	highest_grades= grades[0];
	lowest_grades= grades[0];
	for (int i=0; i<3; i++)
	{
		if (grades[i] >= highest_grades)
		highest_grades= grades[i];
		else if (grades[i] < lowest_grades)
		lowest_grades= grades[i];
		else
		cout<<"invalid data";
	 }
	 //code for finding average value of grades
	float avg_grade;
	int count=n;
	float sum=0.0;
	for (int i=0; i<3; i++)
	{
		sum= sum+grades[i];
	}
	avg_grade= sum / count;
	         //code for displaying average of grades, highest and lowest grades as well
	cout<<"The highest among all grades are: "<<highest_grades<<endl;
	cout<<"The lowest among all grades are: "<<lowest_grades<<endl;
	cout<<"The average of grades are: "<<avg_grade<<endl;    
	 return 0;
}
