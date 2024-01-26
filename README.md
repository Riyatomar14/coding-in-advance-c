# coding-in-advance-c
## 1. rectangle
# 5 4 
# ****
# ****
# ****
# ****
# ****
code- 

#include <iostream>
using namespace std;
int main() {
    int row,col;
    cin>>row>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
## 2.
# 5 4 
# ****
# *  *
# *  *
# *  *
# ****
code-

#include <iostream>
using namespace std;
int main() {
    int row,col;
    cin>>row>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row){
                cout<<"*";
            }
            else if(j==1 || j==col){
                cout<<"*";
            }
                
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
## 3.
# 5
# *****
# ****
# ***
# **
# *

code-

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
## 4.

