/***
	ð������ 
	
	ƽ��ʱ�临�Ӷȣ�O(n^2) [��������O(n), ������O(n^2)]
	�ռ临�Ӷȣ�O(1) 
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

void BubbleSort(vector<int> &nums) {
    bool flag = false; //����һ����־λ�������ж�Ԫ��֮���Ƿ�����˽���
	int n = nums.size();
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(nums[i] > nums[j]) {
				flag = true; //�������� 
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
		//��֦�Ż����ڽ�����һ��������ж��Ƿ���Ԫ�صĽ���
        if (!flag) { //δ���������������򣬽������� 
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
	
	BubbleSort(nums); //ð������ 
	
	for(int i=0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
} 
