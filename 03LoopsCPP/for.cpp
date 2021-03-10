#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n1,n2;
    cin>>n1>>n2;
    
            if(n1>= 1 && n1<=9){
                    switch(n1) {
                        case 1:
                                    cout << "one";
                                    break;
                        case 2:
                                    cout << "two";
                                    break;
                        case 3:
                                    cout << "three";
                                    break;
                        case 4:
                                    cout << "four";
                                    break;
                        case 5:
                                    cout << "five";
                                    break;
                        case 6:
                                    cout << "six";
                                    break;
                        case 7:
                                    cout << "seven";
                                    break;
                        case 8:
                                    cout << "eight";
                                    break;
                        case 9:
                                    cout << "nine";
                                    break;
                    }
            }

            if(n2>= 1 && n2<=9){
                    switch(n2) {
                        case 1:
                                    cout << "one"<<endl;
                                    break;
                        case 2:
                                    cout << "two"<<endl;
                                    break;
                        case 3:
                                    cout << "three"<<endl;
                                    break;
                        case 4:
                                    cout << "four"<<endl;
                                    break;
                        case 5:
                                    cout << "five"<<endl;
                                    break;
                        case 6:
                                    cout << "six"<<endl;
                                    break;
                        case 7:
                                    cout << "seven"<<endl;
                                    break;
                        case 8:
                                    cout << "eight"<<endl;
                                    break;
                        case 9:
                                    cout << "nine"<<endl;
                                    break;
                    }
            }

            if(n1 > 9 && n1 % 2 == 0){
                    cout << "even"<<endl;
            }

            if(n2 > 9 && n2 % 2 == 0){
                    cout << "even"<<endl;
            }

             if(n1 > 9){
                    cout << "odd"<<endl;
            }

             if(n2 > 9){
                    cout << "odd"<<endl;
            }
    

            return 0;
}