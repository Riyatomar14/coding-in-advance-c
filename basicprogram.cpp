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
    for(int i=0;i<=n;i++){
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
    for(int i=0;i<n;i++){
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

# note-

array is a contigious memory allocation means it has a fix size . Most important point is that array is by default call by refence in functions.

vectors are dynamic memory allocation means it does not have a fix size.

## 11. reverse the array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,6,7,89,56};
    int n = sizeof(arr)/ sizeof (arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
    
}

## 12. reverse the array without any extra array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 7, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int i = 0, j = n - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

## 13. merge string in alternative way

#include <iostream>
using namespace std;

string merge_string(string str1, string str2) {
    string result = "";
    for(int i = 0; i < str1.size() || i < str2.size(); i++) {
        if(i < str1.size()) {
            result += str1[i];
        }
        if(i < str2.size()) {
            result += str2[i];
        }
    }
    return result;
}

int main() {
    string str1 = "abcd";
    string str2 = "pqrstw";
    string merged = merge_string(str1, str2);
    cout << "Merged string: " << merged << endl;
    return 0;
}

result- Merged string: apbqcrdstw

## 14. string to interger by ascii value 

## 15. max occuring in the string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int maxCount = 0;
    char maxChar;
    
    cout << "Enter a line of string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        int count = 0;
        for (int j = 0; j < str.length(); j++) {
            if (j < i && str[i] == str[j]) {
                break;
            }
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    cout << "Character with maximum occurrence: '" << maxChar << "' (" << maxCount << " times)" << endl;

    return 0;
}

## 16. how to add two string

#include <iostream>
using namespace std;

int main() {
    char str1[25],str2[25];
    int i,j;
    cout<<"enter the string1:";
    cin>>str1;
    cout<<"enter the string2:";
    cin>>str2;
    for(i=0;str1[i] != '\0';i++){
        
    };
    for(j=0;str2[j] != '\0';j++,i++){
        str1[i]=str2[j];
    };
    str1[i]='\0';
    cout<<"concatination of string: "<< str1;
    return 0;
}

## 17. how to capitalize the first letter of each word in string 

#include <iostream>
#include <string>
using namespace std;
char toUpperCase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    } else {
        return c;
    }
}
void capitalizeFirstLetters(string& str) {
    int len = str.length();
    if (len > 0 && str[0] >= 'a' && str[0] <= 'z') {
        str[0] = toUpperCase(str[0]);
    }
    for (int i = 1; i < len; i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toUpperCase(str[i]);
        }
    }
}
int main() {
    string str = "hello how are you";
    capitalizeFirstLetters(str);
    cout << str << endl;
    return 0;
}

## 18. count word in string

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    int wordCount = 0;
    bool inWord = false; 
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && !inWord) {
            wordCount++;
            inWord = true;
        } 
        else if (str[i] == ' ') {
            inWord = false;
        }
    }
    
    cout << "Number of words: " << wordCount << endl;

    return 0;
}

## 19. remove duplicate characters from the string 






