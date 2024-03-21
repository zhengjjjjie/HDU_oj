/***
	�������� 
	
	ƽ��ʱ�临�Ӷȣ�O(nlogn) [��������O(nlogn), ������O(n^2)]
	�ռ临�Ӷȣ�O(logn) 
	�ȶ��ԣ��ȶ� 
	
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
	int p = nums[left]; //����ǰ���еĵ�һ��Ԫ����Ϊ���� 
	while(left < right) {
		while(left < right && nums[right]>= p) right--;
		nums[left] = nums[right]; //��������С��Ԫ��������� 
		while(left < right && nums[left]<= p) left++;
		nums[right] = nums[left]; //����������Ԫ�����ұ��� 
	}
	nums[left] = p; //������Ԫ�طŵ�����λ�� 
	return left; //���ش������Ԫ�ص�����λ�� 
}

void QuickSort(vector<int> &nums,int left,int right) {
	if(left < right) { //���� 
		int k = quick_one_pass(nums, left, right); //һ�˿��� 
		QuickSort(nums, left, k-1); //���ӱ���еݹ�
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
	
	QuickSort(nums, 0, n-1); //�������� 
	
	for(int i=0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	
	return 0;
}
