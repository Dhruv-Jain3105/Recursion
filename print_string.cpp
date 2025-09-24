/*
Name:- Dhruv Jain
PRN:- 24070123042
Batch:- A2
*/
#include <iostream>
using namespace std;

void print_str(char *str){
    if(*str !='\0'){
        print_str(str+1);
        cout << *str;
    }
}
 
int main(){
    string s="Dhruv";
    cout << "Reversed String: ";
    print_str(&s[0]);
}
/*
Output-
Reversed String: vurhD
*/
