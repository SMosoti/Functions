#include <iostream>
using namespace std;
int answer;
 int division(int a,int b)
{
     answer = a/b;
     return answer;

}
int main()
{
    int num1;
    int num2;
    cout << "Enter a: " <<endl;
    cin>>num1;
    cout << "Enter b: " <<endl;
    cin>>num2;
     cout << "Answer is:  "<<division(num1,num2) <<endl;


    return 0;
}
