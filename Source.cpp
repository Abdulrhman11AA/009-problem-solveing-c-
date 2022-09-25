#include <iostream>
using namespace std;
int main() {

	int arr[] = { 7,5,4,8,2,6,1 };
	int len = sizeof(arr) / sizeof(*arr);
	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {
			if (arr[j] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	/*for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}*/
	for (int i = 0; i < len ; i++) {                   //||
		if (i == 0) {                                  //||
			cout << " { ";                             //||
			i++;                                       //||
		}                                              //||
			cout << arr[i-1];                          //||
		bool x = true;                                 //||
		while (i != 1 && i != len-1 , x) {             //||----> curly bracets are optional
			cout << " , ";                             //||
			x = false;                                 //||
		}                                              //||
		if (i == len-1) cout << arr [i]<<" } " << endl;//||
	}                                                  //||
	return 0;
}