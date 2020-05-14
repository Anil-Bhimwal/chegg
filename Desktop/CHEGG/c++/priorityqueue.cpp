#include <iostream>
using namespace std;
#include <queue>

void kSortedArray(int input[], int n, int k) {
	priority_queue<int> pq;
	int i = 0;
	for(; i < k; i++) {
		pq.push(input[i]);
	}


	for(; i < n; i++) {
		input[i-k] = pq.top();//Input[i-k]=pq.top();
		pq.pop();
		pq.push(input[i]);
	}


	while(!pq.empty()) {
		input[i-k] = pq.top();
		pq.pop();
		i++;
	}

}

int main() {
	int input[] = {10, 12, 6, 7, 9};
	int k = 3;
	kSortedArray(input, 5, k);
	for(int i = 0; i < 5; i++) {
		cout << input[i] << " ";
	}
}

