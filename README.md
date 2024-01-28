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
## 2.hollow rectangle
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
## 3. inverted half pyramid
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
## 4.upright pyramid
# 5
#     *
#    **
#   ***
#  ****
# *****

code-

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}

## 5.upright pyramid with numbers 






## some advance questions 
## 1.![Screenshot 2024-01-28 120626](https://github.com/Riyatomar14/coding-in-advance-c/assets/143107173/8bb44c33-b976-4f19-b2e4-732f54532ed2)

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	string word[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	for (int i = num1; i <= num2; i++)
	{
		if (i <= 9)
		{
			cout << word[i - 1] << endl;
		}
		else
		{
			if (i % 2 == 0)
			{
				cout << "even" << endl;
			}
			else
			{
				cout << "odd" << endl;
			}
		}
	}

	return 0;
}

## 2.![image](https://github.com/Riyatomar14/coding-in-advance-c/assets/143107173/dffdb347-adb9-4fa0-8bce-9d7190a2bc49)


#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    if (n == 1) {
        cout << "one";
    } else if (n == 2) {
        cout << "two";
    } else if (n == 3) {
        cout << "three";
    } else if (n == 4) {
        cout << "four";
    } else if (n == 5) {
        cout << "five";
    } else if (n == 6) {
        cout << "six";
    } else if (n == 7) {
        cout << "seven";
    } else if (n == 8) {
        cout << "eight";
    } else if (n == 9) {
        cout << "nine";
    } else {
        cout << "Greater than 9";
    }

    return 0;
}

## 3.![image](https://github.com/Riyatomar14/coding-in-advance-c/assets/143107173/6617a035-5bf2-40fe-bbe0-c5fcd2e3011a)

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a>b){
        if(a>c){
            if(a>d){
                cout<<a<<endl;
            }
            else{
                cout<<d<<endl;
            }
            
        }
        else{
            if(c>d){
                cout<<c<<endl;
            }
            else{
                cout<<d<<endl;
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                cout<<b<<endl;
            }
        }
        else{
            if (c>d){
                cout<<c<<endl;
            }
            else{
                cout<<d<<endl;
            }       
        }
        
    }
    return 0;
}

## 4.![image](https://github.com/Riyatomar14/coding-in-advance-c/assets/143107173/a7ab1930-b91a-4e0b-b69c-0b5607de118c)





