/*
// Sample code to perform I/O:*/

#include <iostream>

using namespace std;

int doinghich(int n);

int main() {
	int T;
	cin >> T;
	try
	{
		if (T > 10 || T < 1)
			throw T;
		int A[T], B[T];
		for (int i = 0; i < T; i++)
		{
			cin >> A[i] >> B[i];
		}
		int dem = 0;
		for (int j = 0; j < T; j++)
        {
            for (int i = A[j]; i <= B[j]; i++)
            {
                if (i == doinghich (i) ) dem++;
            }
            cout << dem << endl;
			dem = 0;
        }


	}
	catch (int thrownValue)
	{
		cout << "T = " << thrownValue << " is out of constraint";
	}
}

int doinghich(int n)
{
	int a = 0;
	while (n >= 1)
	{
		a = a * 10 + n % 10;
		n = n / 10;
	}
	return a;
}
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail




// Write your code here
