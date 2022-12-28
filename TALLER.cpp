#include <iostream>
using namespace std;

void taller(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    if(x>y){
        cout<<"A"<<endl;
    }else{
        cout<<"B"<<endl;
    }
}

void tests() {
  int t;
  std::cin >> t;
  while (t--) {
    taller();
  }
}

int main() {
	tests();
	return 0;
}
