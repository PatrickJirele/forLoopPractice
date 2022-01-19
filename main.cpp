/*
	191
	main.cpp
	forLoopPractice
	pjirele
*/

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	
	int m, n;
	int total, sum = 0, avg;

	// loop 1
	
	cout << "Loop 1" << endl;
	cout << "Generating random numbers from m to n" << endl;
	cout << "Enter m and n: ";
	cin >> m >> n;
	
	total = m;
	cout << "Expected: integers from " << m << " to " << n << endl;

	cout << "Actual: ";

	for (int i = 0; i < n - m + 1; i++)
	{
		cout << total << " ";
		sum = sum + total;
		total++;
		
	} // end for

	avg = (double)sum / (n - m + 1);
	cout << endl;
	cout << fixed;
	cout << "Sum: " << setprecision(2) << (double)sum << " Average: " << setprecision(2) << (double)avg << endl;
	
	cout << endl;

	// loop 2
	cout << "Loop 2" << endl;
	cout << "Generating odd numbers in a range entered by the user" << endl;
	cout << "Enter m and n: ";
	cin >> m >> n;
	
	if (m > n)
	{
		int v = n;
		n = m;
		m = v;
	} // end if
	
	
	cout << "generating odd numbers from " << m << " to " << n << endl;

	if (n % 2 == 0)
	{
		n = n - 1;
	}
	if (m % 2 == 0)
	{
		m = m + 1;
	}
	total = m;
	cout << "Actual: ";
	for (int o = 0; o < (n - m) / 2 + 1; o++)
	{

		cout << total << " ";
		total = total + 2;

	} // end for loop
	
	cout << endl;
	cout << endl;

	// Loop 3
	
	cout << "Loop 3" << endl;

	cout << "Generating numbres from 1.3, 1.5, ..., 2.9" << endl;
	cout << "Expected: 1.3 1.5 1.7 1.9 2.1 2.3 2.5 2.7 2.9" << endl;
	cout << "Acctual: ";
	for (double p = 1.3; p < 2.9 + 0.2; p = p + 0.2)
	{
		cout << setprecision(1) << p << " ";
	}




} // end main


