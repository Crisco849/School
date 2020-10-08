#include <ctime>
#include <iostream>
using namespace std;


int recursive_Fibonacci(int n) {
	if (n == 0){
		return 0;
	}
	if ( n== 1) {
		return 1;
	}
	return recursive_Fibonacci(n-1) + recursive_Fibonacci(n-2);
}


float iterativeTime;
int iterative_Fibonacci(int n) {

	const clock_t begin_time = clock();
	int answer = 1;
	int firstNum = 0;
	int secondNum;

	int i = n;
	for(int i = 1; i < n; i++){
		secondNum = firstNum;
		firstNum = answer;
		answer = firstNum + secondNum;
	}
	iterativeTime = float(clock() - begin_time) / CLOCKS_PER_SEC;
	return answer;
}
	
		



int main(){

	iterative_Fibonacci(49);
	cout << iterativeTime << endl;
	const clock_t begin_time = clock();
	recursive_Fibonacci(49);
	cout << float(clock() - begin_time) / CLOCKS_PER_SEC;

}
