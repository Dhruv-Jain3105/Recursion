/*
Name:- Dhruv Jain
PRN:- 24070123042
Batch:- A2
*/
#include <iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return 1;
    }
    else return n*fibo(n-1);
}

int main(){
    int n;
    cout << "Type Number for Factorial: ";
    cin >> n;
    int fibo1=fibo(n);
    cout << "Factorial of " << n << " is : " << fibo1;
}
/*
Output:-
1)Type Number for Factorial: 5
Fibonacci of 5 is : 120
2)Type Number for Factorial: 4
Fibonacci of 4 is : 24
3)Type Number for Factorial: 1
Fibonacci of 1 is : 1
4)Type Number for Factorial: 0
Fibonacci of 0 is : 1
*/
