#include <iostream>
using namespace std;

void seats(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    cout<<x*5 + y*7<<endl;
}


void tests() {
  int t;
  std::cin >> t;
  while (t--) {
    seats();
  }
}

int main() {
    tests();
	return 0;
}
