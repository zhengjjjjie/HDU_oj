
/**
	No.2000 ASCII������
	���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ���
	
	Input:���������ж��飬ÿ��ռһ�У��������ַ���ɣ�֮���޿ո�
	Output:����ÿ���������ݣ����һ�У��ַ��м���һ���ո�ֿ�
	sample Input:
		qwe
		asd
		zxc
	sample Output:
		e q w
		a d s
		c x z
**/ 

#include<iostream>
using namespace std;
//void swap(char &s1, char &s2){
//	char temp;
//	temp = s1;
//	s1 = s2;
//	s2 = temp;
//} 
int main() {
	char collect[4];
    while (cin >> collect) {
        if (collect[1] < collect[0])
            swap(collect[1], collect[0]);
        if (collect[2] < collect[1])
            swap(collect[2], collect[1]);
        if (collect[0] > collect[1])
            swap(collect[1], collect[0]);
        cout << collect[0] << " " << collect[1] << " " << collect[2] << endl;
    }
    return 0;
}

