/***
	2019�꺼�������3-˫ָ�� 
	
	��һ�������������������м�������Ǧ����ľ��,ÿ��ľ��Ķ��������Ϊ (i,yi)������ͼ
	���룺������n����ʾ�и�ľ�� (1<=n<1000)������������n�����ֱ�ʾ�����n��ľ��ĸ߶ȣ�ÿ���߶��ÿո����
	�������������������װ���������ˮ��������������б��
	
	leetcodeԭ��-ʢ���ˮ������/����ˮ���� 
	
	Sample Input
	8 1 8 6 4 5 3 7 2
	9 1 8 6 2 5 4 8 3 7
	2 1 1
	
	Sample Output
	35
	49
	1

***/
# include<iostream>
# include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> height(n);
	for(int i=0; i<n; i++) {
		cin >> height[i];
	}
	int left=0, right=n-1;
	int max = 0;
	while(left < right) {
		if(height[left] <= height[right]) {
			int area = (right-left) * height[left];
			if(area > max) {
				max = area;
			}
			left++;
		} else {
			int area = (right-left) * height[right];
			if(area > max) {
				max = area;
			} 
			right--;
		}
	}
	cout << max << endl;
} 
