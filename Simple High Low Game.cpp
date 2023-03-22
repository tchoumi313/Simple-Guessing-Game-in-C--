#include<time.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>

/**
*@author : Donald T
*@brief A simple guessing game
*/
const int totchan=7;
using namespace std;
int main()
{
 srand(time(NULL));
 int number;
 int guess;
 int chances=0,score=0,chanscor;
 char ans;
 do
 { system("cls");
   chances=score=0;
   cout<<"============= High/Low Game =============\n\n";
   cout<<"I will pick a random number from 0 to 100.\n\n";
   cout<<"You must try to guess the number.\n";

   number=(rand()%100);
   chanscor=100/totchan;        //score for each successful chance
   do
   {
     cout<<"What is your guess? (0 to 100) ";
     cin>>guess;
     if((guess<0)||(guess>100))
     {
	cout<<"Sorry, but your guess "<<guess<<"must be from 0 to 100.";
     }
     else if(guess < number)
     {
	cout<<guess<<" is low. Try a higher number.";
     }
     else if(guess > number)
     {
	cout<<guess<<" is high. Try a lower number.";
     }
     else
     {
	cout<<guess<<" is correct. Congratulations! ";
	score=chanscor*(totchan-chances);
	cout<<"Your score is "<<score<<endl;
        break;
     }
     chances++;
     if(guess!=number)
	 cout<<" Now you have "<<totchan-chances<<" chances left."<<endl;
     if(chances==totchan)
	 { cout<<"Only "<<totchan<<" chances are allowed. Better luck next time";
	   cout<<"The actual number was "<<number<<endl;
	   break;
	 }
     }while (guess!=number);
     cout<<"Thank you for playing High/Low!/m";
     cout<<"Want to play it again? (y/n)...";
     cin>>ans;
   }while(ans=='y' || ans=='Y');
 }
