/***
	快速排序 
	
	平均时间复杂度：O(nlogn) [最好情况：O(nlogn), 最坏情况：O(n^2)]
	空间复杂度：O(logn) 
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

int quick_one_pass(vector<int> &nums, int left, int right) {
	int p = nums[left]; //将当前表中的第一个元素作为枢轴 
	while(left < right) {
		while(left < right && nums[right]>= p) right--;
		nums[left] = nums[right]; //将比枢轴小的元素往左边移 
		while(left < right && nums[left]<= p) left++;
		nums[right] = nums[left]; //将比枢轴大的元素往右边移 
	}
	nums[left] = p; //将枢轴元素放到最终位置 
	return left; //返回存放枢轴元素的最终位置 
}

void QuickSort(vector<int> &nums,int left,int right) {
	if(left < right) { //分治 
		int k = quick_one_pass(nums, left, right); //一趟快排 
		QuickSort(nums, left, k-1); //对子表进行递归
		QuickSort(nums, k+1, right);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for(int i=0; i<n; i++) {
		cin >> nums[i];
	}
	
	QuickSort(nums, 0, n-1); //快速排序 
	
	for(int i=0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	
	return 0;
}
