/* MUHAMMAD HAYYAN
23I-2041________CY-A
Assignment#05_______Q6 */

#include<iostream>
using namespace std;

int main()
{
		//Program to check if currency exchange is possible with notes of 6, 9 and 20
	int a=0, b=0, c=0, n;
	bool check = 0;
	
		//Prints Main menu
	cout<<"\n\n\t ------------------------ \n";
	cout<<"\n\t    PKR to PAR Exchange \n";
	cout<<"\n\t ------------------------ \n";
	
	cout<< "\n\n Enter the PKR amount you want to exchange : ";		//Inputs amount to exchange
	cin>>n;
	cout<<endl;
	
	do				//Main loop to check for amount of 20 notes
	{	
		
		do			//loop to check for amount of 9 notes
		{
			
			do		//loop to check for amount of 6 notes
			{
			
				if (6*a + 9*b + 20*c == n)		//this check if combination is correct and assigns 1 to check and breaks loop
				{
					check = 1;
					break;
				}
				
				a++;
			} while ( a <= n/6);
			
			
			if ( check == 1)				//breaks loop if combination possible
			{
				break;
			}	
			
			a=0;
			b++;	
		} while ( b <=n/9 );
		
		if ( check == 1)					//breaks loop if combination possible
		{
			break;
		}
		
		b=0;	
		c++;
	} while ( c <= n/20 );
	
	
	if ( check == 1 && n!=0) 		//Prints notes if exchange possible
	{
		cout<< "\n\n " <<n<< " PKR can be exchanged with : \n" ;
		cout<< "\n "<<a<<" notes of 6 PAR ";
		cout<< "\n "<<b<<" notes of 9 PAR ";
		cout<< "\n "<<c<<" notes of 20 PAR \n";
	}
	else				//Prints error if exchange not possible
	{
		cout<<"\n\n Sorry! Exchange is not possible \n";
	}
	
	
	return 0;	
}
			
