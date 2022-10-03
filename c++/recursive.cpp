#include <iostream>
using namespace std;

void rec(int i){
	if(i<10){
	cout << "Hello" << i << endl;
	rec(i+1);
	cout << "after recursive" << endl;
	}
}

int main(){
	cout << "start" << endl;
	rec(0);
	cout << "finish" << endl;
	return 0;
}
