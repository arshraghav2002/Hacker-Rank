#include <iostream>
#include <string>
using namespace std;

int main() {
    
	 string a,b;
     
     cin>>a>>b;
     
     int c = a.size();
     int d = b.size();
          cout<<c<<" "<<d<<endl;
     
     string q=a+b;
     
        cout<<q<<endl;
      swap(a[0],b[0]);
      
      cout<<a<<" "<<b;
        return 0; 
}

