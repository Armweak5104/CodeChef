#include <iostream>
using namespace std;

void taxes(){
    int x; 
    cin>>x;
    if(x>100){
        cout<<x-10<<endl;
    }else{
        cout<<x<<endl;
    }
}

void tests() {
  int t;
  cin >> t;
  while (t--) {
    taxes();
  }
}

int main() {
	// your code goes here
	tests();
}
