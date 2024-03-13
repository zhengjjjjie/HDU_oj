/**
	No.2056 Rectangles
	Given two rectangles and the coordinates of two points on the diagonals of each rectangle,you have to calculate the area of the intersected 
	part of two rectangles. its sides are parallel to OX and OY .
	
	Input:Input The first line of input is 8 positive numbers which indicate the coordinates of four points that must be on each diagonal.
	The 8 numbers are x1,y1,x2,y2,x3,y3,x4,y4.That means the two points on the first rectangle are(x1,y1),(x2,y2);
	the other two points on the second rectangle are (x3,y3),(x4,y4).
	Output:Output For each case output the area of their intersected part in a single line.accurate up to 2 decimal places.
	
	SampleInput:
		1.00 1.00 3.00 3.00 2.00 2.00 4.00 4.00
		5.00 5.00 13.00 13.00 4.00 4.00 12.50 12.50
		
	SampleOutput:
		1.00
		56.25

**/ 
# include<iostream>
# include<algorithm>
using namespace std;

int main() {
	// 几何,两矩形重叠面积
	double x1,x2,x3,x4,y1,y2,y3,y4;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4) {
		// a b 两矩形各自的坐标 
		double ax1 = min(x1, x2), ax2 = max(x1, x2);
		double bx1 = min(x3, x4), bx2 = max(x3, x4);
		double ay1 = min(y1, y2), ay2 = max(y1, y2);
		double by1 = min(y3, y4), by2 = max(y3, y4);
		
		// 重叠部分的矩形坐标 
		double ansx1 = max(ax1, bx1);
		double ansx2 = min(ax2, bx2);
		double ansy1 = max(ay1, by1);
		double ansy2 = min(ay2, by2); 
		
		if(ansx1 > ansx2 || ansy1 > ansy2) { //不能构成矩形，没有重叠 
			printf("0.00\n");
			continue;
		} else {
			printf("%.2f\n", (ansx2-ansx1) * (ansy2-ansy1));
		}
	}
	return 0;
} 
