/// 練習--計算1加到100的和 (使用While)
#include <iostream>
using namespace std;

int main(){
	int i =1, sum=0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	cout << sum << "\n";
	return 0;
}
