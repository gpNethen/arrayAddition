#include <iostream>
using namespace std;
class opr                                     // Class definition for purpose of adding arrays
{
		private:
			int a[100];                       // Array of max size 100 is private member of this class
		public:
			void get();                       // void for function to add five values to a class object
			void dis();                       // void for function to display sum of class objects
			opr operator +(opr o)             // operator overload for + operator to add two arrays as an int sum
			{
				opr t;                        // new class object to hold sum of two others
				t.a[0]=0;                     // initializes first index to zero, preparing for sum
				for(int i=0; i<5; i++)        // for loop to sum 2 other arrays
				{
					t.a[0]+=(a[i]+o.a[i]);    // cumulative sum in first index of new array
				}
				return t;                     // returns class object
			}
};
void opr::get()                               // begin get function definition
{
	cout << "\nEnter 5 values :\n";           // instructional cout
	for (int i=0;i<5;i++)                     // for loop to get 5 values
	{
		cin>>a[i];                            // assigns values to indeces
	}
}
void opr::dis()                               // begin display function definition
{
	cout << "\nSum of Values in Arrays :\n";  // notification cout
		cout<<a[0]<<endl;                     // cout statement to print cumulative sum
}
int main()                                    // begin main program
{
	opr p,q,s;                                // initializes 3 opr class array objects
	p.get();                                  // get 5 values for first array
	q.get();                                  // get 5 values for second array
	s=p+q;                                    // assigns first index of s to cumulative sum of p and q
	s.dis();                                  // displays sum
	return 0;                                 // ceases computation
}                                             // end main
