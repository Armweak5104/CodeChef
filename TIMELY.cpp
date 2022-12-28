#include <iostream>
using namespace std;

void time(){
    int x;
    cin>>x;
    if(x>=30){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

void tests() {
  int t;
  std::cin >> t;
  while (t--) {
    time();
  }
}

int main() {
	// your code goes here
	tests();
	return 0;
}
