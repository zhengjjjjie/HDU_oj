/***
	冒泡排序 
	
	平均时间复杂度：O(n^2) [最好情况：O(n), 最坏情况：O(n^2)]
	空间复杂度：O(1) 
	稳定性：稳定 
	
	SampleInput:
		10
		48 7 5 81 5 6 9 19 0 86
		
	SampleOutput:
		0 5 5 6 7 9 19 48 81 86
		
***/ 
# include<iostream>
# include<vector> 
using namespace std;

void BubbleSort(vector<int> &nums) {
    bool flag = false; //定义一个标志位，用于判定元素之间是否进行了交换
	int n = nums.size();
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(nums[i] > nums[j]) {
				flag = true; //发生交换 
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
		//剪枝优化，在进行完一轮排序后判断是否发生元素的交换
        if (!flag) { //未交换，数组已有序，结束排序 
            break;
        } else {
            flag = false;
        }
	}
}
int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) {
		cin >> nums[i];
	}
	
	BubbleSort(nums); //冒泡排序 
	
	for(int i=0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
} 
