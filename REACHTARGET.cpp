#include <iostream>
using namespace std;

void target(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    cout<<x-y<<endl;
}

void tests() {
  int t;
  std::cin >> t;
  while (t--) {
    target();
  }
}


int main() {
    tests();
	return 0;
}
