#include<iostream>
using namespace std;
int main()
{
	//generating a random number
	int rand;
	rand= rand % 100+1;
	//greetings
	cout<<"***********WELCOME TO A NUMBER GUESSING GAME*************"<<endl;
	cout<<"         YOU HAVE TOTAL THREE ATTEMPTS TO SUCCEED          "<<endl;
	cout<<"                BEST OF LUCK!!!                           "<<endl;
	//taking inputs
	int guess_num;
	int attempts;
	int n;
	attempts=n;
	//performing loop to guess number just 3 times
	for (int n=3; n>0; n--)
	{
		cout<<"Enter your desired number. Make sure it is in between 1 to 100"<<endl;
		cin>>guess_num;
		if (guess_num==rand)
		{
			cout<<"WOW! you are a champ"<<endl;
		}
		else if(guess_num>rand)
		{
		    cout<<"OOPS! it was too high. Take another chance"<<endl;	
		}
		else if(guess_num<rand)
		{
			cout<<"ALAS! it was too low"<<endl;
		}
		else if((guess_num==rand-1) || (guess_num==rand+1))
		{
			cout<<"DAMN! you were too close"<<endl;
		}
	}
    return 0;
}