#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "swarnava" ;
    string str11 = str1;
    string str2= "mondal";
    cout<<"string 1 is "<<str1<<endl;
    //cout<<"string 2 length is "<<str2.length()<<endl;  //find length of string

    string str3 = str1 +" "+ str2;
    cout<<"concatenation of str1 and str2 (using +) is "<<str3<<endl;  //concatenation of two strings using + operator
    string str4 = str1.append(str2); //concatenation of two strings using append function
    cout<<"concatenation of str1 and str2 (using append)is "<<str4<<endl;  //concatenation of two strings using append function

    int len1 = str11.length(); //find length of string using length function
    cout<<"length of str1 (using .length)is "<<len1<<endl; //find length of string using length function
    int len2 = str2.size(); //find length of string using size function
    cout<<"length of str2 (using .size)is "<<len2<<endl; //find length of string using size function

    //accessing string elements
    for (int i=0; i<str1.length(); i++){
        cout<<str1[i]<<endl; //accessing string elements using index
    }

    //taking input from user
    string str6;
    cout<<"enter a string (multiple words)"<<endl;
    getline(cin,str6); //taking multiple words input from user
    cout<<"string entered by user is (using getline) "<<str6<<endl; //printing string entered by user
    string str5;
    cout<<"enter a string (only single word)"<<endl;
    cin>>str5; //taking only single word input from user
    cout<<"string entered by user is (using cin>>) "<<str5<<endl; //printing string entered by user
}