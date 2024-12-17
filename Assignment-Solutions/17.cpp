//check a number is palindrome or not in cpp
#include <iostream>
using namespace std;

int main(){
    int num,revnum,modulo,orgnum;
    cout << "Enter a number: ";
    cin >> num;
    orgnum = num;
    while(num!=0){
        modulo = num % 10;
        revnum = revnum * 10 + modulo;
        num = num / 10;
    }
    if(orgnum == revnum){
        cout << orgnum << " is a palindrome." << endl;
        } else {
        cout << orgnum << " is not a palindrome." << endl;
        }

    return 0;
}