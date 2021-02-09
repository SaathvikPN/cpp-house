#include <iostream>
using namespace std;
unsigned long int nextPalindrome(unsigned long int);
int main()
{
    short testCases;
    cout<<"no. test cases"<<endl;
    cin>>testCases;
    while(testCases>0)
    {
        unsigned long int n;
        cin>>n;
        cout<<"nearest next palindrome\n";
        cout<<nextPalindrome(n)<<endl;
        testCases--;
    }
	return 0;
}

unsigned long int nextPalindrome(unsigned long int n)
{
    for(unsigned long int i = (n+1); ; i++)
    {
        unsigned long int reversedNumber=0, temp;
        short remainder;
        temp = i;
        while(temp!=0)
        {
            remainder = temp%10;
            reversedNumber = reversedNumber*10 + remainder;
            temp = temp / 10;
        }
        if(reversedNumber==i)
        {
            return i;
        }

    }
    return 0;
}
