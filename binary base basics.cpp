You are given a binary string SS and an integer KK. In one operation, you can pick any bit and flip it, i.e turn 00 to 11 or 11 to 00. Can you make the string SS a palindrome using exactly KK operations?

Print YES if this is possible, and NO if it is not.

Input Format
The first line of input contains one integer TT, denoting the number of test cases. The description of TT test cases follows.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers NN and KK, denoting the length of the binary string and the number of operations to be performed.
The second line contains the binary string SS.
Output Format
For each test case, print the answer on a new line — YES if the SS can be made a palindrome using exactly KK operations, and NO otherwise.
You may print each character of YES and NO in either uppercase or lowercase (for example, yes, yEs, Yes will all be considered identical).
  
  Constraints
  1≤T≤1000
  1≤N≤1000
  0≤K≤N
  S is a binary string, i.e, contains only characters 00 and 11
  //solution
  #include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, k, count = 0;
        string s;
        cin >> n >> k;
        cin >> s;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                //s[i] = s[n - i - 1];
                count++;
            }
        }
        int check = k - count;
        if (check >= 0)
        {
            if (n % 2 == 0 && check % 2 == 0)
                cout << "Yes\n";
            else if(n%2!=0)
                cout << "Yes\n";
            else
                cout<< "No\n";
        }
        else
            cout<<"No\n";

    }
}
