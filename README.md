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
#include <algorithm>
using namespace std;

/*For Loop Hackerrank Solution in C++*/

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

## 2.



