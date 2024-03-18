# c++ programs

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

## 4.You'll be given an array of N integers and you have to print the integers in the reverse order.

Input Format
The first line of the input contains N, where N is the number of integers. The next line contains N integers separated by a space.

Constraints
1 <= N <= 1000
1 <= Ai <= 10000, where Ai is the ith integer in the array.

Output Format
Print the N integers of the array in the reverse order in a single line separated by a space. */


#include <iostream>
using namespace std;


int main() {

    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];        
    }
    for (int j = N - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }
    return 0;

## 5. how to get array from userinput

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout<<"array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

## 6. sum of array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"array size:";
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum;
     

    return 0;
}
 
## 7.product 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"array size:";
    cin>>n;
    int arr[n];
    int product = 1;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        product *= arr[i];
    }
    cout<<product;
     

    return 0;
}

## 8. linear search

#include <iostream>
using namespace std;

int main() {
    int arr[]={2,4,6,7,89,56,79,34,56,35,69,27,81,02};
    int n = sizeof(arr)/ sizeof (arr[0]);
    int s;
    cout<<"target element";
    cin >> s;
    bool flag = false ; // false means s is not present 
    for(int i =0;i<=n;i++){
        if(arr[i]==s){
        flag = true ; // true means s is present
        break;
        }
    }
    if (flag == true) cout<<s<<"is present";
    else cout<<s<<"not present";
    
    return 0;
}

## 9. maximum element in the array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,6,7,89,56,79,34,56,35,69,27,81,2};
    int n = sizeof(arr)/ sizeof (arr[0]);
    int max;
    max= arr[0];
    for(int i =0;i<n;i++){
        if (max < arr[i]) max=arr[i];
       
    }
    cout<<max;
    
    return 0;
}

## 10. minimum element in the array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,6,7,89,56,79,34,56,35,69,27,81,2};
    int n = sizeof(arr)/ sizeof (arr[0]);
    int min;
    min= arr[0];
    for(int i =0;i<n;i++){
        if (min > arr[i]) min=arr[i];
       
    }
    cout<<min;
    
    return 0;
}
