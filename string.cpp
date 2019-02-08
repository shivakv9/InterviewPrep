#include <iostream>
#include <string>

using namespace std;

void string_basic(){
string s1("Hello");
    string s2("Hello",3);
    cout<<s2<<endl;
    string s3(s1,2);
    cout<<s3<<endl;
    string s4(s1,2,4);
    cout<<s4<<endl;
    string s5(5,'s');
    cout<<s5<<endl;
    string s6({'s','h','i','v','a'});
    cout<<s6<<endl;
    
    s1.reserve(100);
    s1.shrink_to_fit();
    cout<<s1<<endl;

    cout<<"Size of s1 = "<<s1.size()<<endl;
    cout<<"Capacity of s1 = "<<s1.capacity()<<endl;
    s1.resize(9);
    s1.resize(12,'x');
    cout<<s1<<endl;
    cout<<"Lengh of s1 ="<<s1.length()<<endl;
}
void string_accessing(){

    string s1("GoodMorning");

  //  cout<<s1[2]<<endl;
   // s1[2] = '9'; 
    cout<<s1[2]<<endl; // o
    cout<<s1[30]<<endl; //not throwing out of range exception

    cout<<s1.at(2)<<endl;
    cout<<s1.at(30)<<endl;//throwing out of range exception


}
int main(){
     
    // string_basic();
    string_accessing();

}