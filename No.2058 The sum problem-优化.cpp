/**
	No.2058 The sum problem-�Ż� 
	Given a sequence 1,2,3,......N, your job is to calculate all the possible sub-sequences that the sum of the sub-sequence is M.
	
	Input:Input contains multiple test cases. each case contains two integers N, M( 1 <= N, M <= 1000000000).input ends with N = M = 0.
	Output:For each test case, print all the possible sub-sequence that its sum is M.The format is show in the sample below.
		print a blank line after each test case.
		
	SampleInput:
		20 10
		50 30
		0 0
		
	SampleOutput:
		[1,4]
		[10,10]
		
		[4,8]
		[6,9]
		[9,11]
		[30,30]
		
**/ 
# include<iostream>
using namespace std;

int main() {
	// �����ⷨ-��ʱ 
	// �Ż���1���ȶԳ�������x�����ж� 2��ɸ������Ҫ��������� 
	int n,m,i;
	int x,sum; 
	while(scanf("%d%d",&n,&m)!=EOF, n && m) {
		// �Ƚ��г���x���޵��ж� 
		for(i=1,sum=0; sum<=m; i++) {
			sum += i;
		}
		x = i-1; //x������ 
		
		int p,q,t;
		// ɸѡ������Ҫ��������� 
		for(i=x; i>=2; i--) { // �������εݼ� 
			if(m%i == 0) { // ���ƽ���������� 
				p = m/i - i/2;
				q = m/i + i/2; // ���㿪ʼ��ͽ����� (��ʽ��[p,q]) 
			} else if(2*m%i == 0) { //���ƽ��������2������ 
				p = m/i - i/2 + 1;
				q = m/i + i/2; //����õ����еĸ�Ԫ��֮�ͣ����ڼ����Ƿ�������� 
			} else {
				continue;
			} 
			t = (q-p+1)*(p+q)/2; //����õ������и�Ԫ��֮�ͣ����ڼ����Ƿ�������� 
			if(t==m && p>0) { //�������ɹ��Ͱ���ʽ��� 
				printf("[%d,%d]\n",p,q);
			}
		}
		printf ("[%d,%d]\n\n",m,m);//����������һ�����
	}
	return 0;
}
