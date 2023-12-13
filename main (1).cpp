//# Addition of two Numbers


/*#include <iostream>

using namespace std;

int main()
{
    // cout<<"Hello World";
    int a;
    int b;
    
    cout<<"Enter the First Numbre : "<<endl;
    cin>>a;
    cout<<"Enter the Second Number :"<<endl;
    cin>>b;
    int sum = a + b;
    cout<<"Sum is : "<<sum;

    return 0;
}*/


// # Swapping of two Numbers
 
 
/*#include <iostream>
using namespace std;

int main()
{
    int a = 50, b = 10;
    cout<<"Before Swap a ="<<a<<" , "<<"b ="<<b<<endl;
    a = a * b;
    b = a / b;
    a = a / b;
    cout<<"Afrer Swap a = "<<a<<" , "<<"b = "<<b<<endl;
    return 0;
}*/


// # Swapping of two Numbers Method 2



/*#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}*/


// # Prime Numbers Program

/*#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}*/

// # Prime Numbers Program Method 2

/*#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  
  return 0;  
}*/

//# Even or Odd Number Program


/*#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";

  return 0;
}*/


//# Palindrom Program

/*#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}*/


//#Reverse String

// C++ program to reverse a string 
// using first to last approach
// 'for' loop
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
	string str = "geeksforgeeks";
	reverseStr(str);
	cout << str;
	return 0;
}

    

