/***
	2019年杭电笔试题3-双指针 
	
	有一个大容器，现在向其中加入若干铅锤的木板,每个木板的顶端坐标记为 (i,yi)，如下图
	输入：先输入n，表示有个木板 (1<=n<1000)，接下来输入n个数字表示加入的n个木板的高度，每个高度用空格隔开
	输出：输出该容器最大能装多少体积的水（容器不允许倾斜）
	
	leetcode原题-盛最多水的容器/接雨水问题 
	
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
