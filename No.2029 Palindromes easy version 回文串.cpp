/**
	No.2029 Palindromes easy version(���Ĵ�)
	�����Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon���ȵȾ��ǻ��Ĵ�����дһ�������ж϶�����ַ����Ƿ��ǡ����ġ�
	
	Input:��������������ʵ�����������ݵĵ�һ����һ��������n,��ʾ����ʵ���ĸ����������������n���ַ��� 
	Output:���һ���ַ����ǻ��Ĵ��������"yes",�������"no"
	
	Sample Input:
		4
		level
		abcde
		noon
		haha
		
	Sample Output:
		yes
		no
		yes
		no
		
**/
# include<iostream>
# include<string>
# include<ctype.h>
using namespace std;

int main(){
	// ˫ָ��˼�� 
	int n;
	while(cin>>n && n) {
		string tag;
		getchar(); //ȥ�����з� 
		while(n--) {
			getline(cin,tag);
			int left=0,right=tag.size()-1; //����ָ�� 
			while(left<=right) {
				if(tag[left] == tag[right]) {
					left++;
					right--;
				}else {
					break;
				}
			}
			if(left<right) cout << "no" << endl;
			else cout << "yes" << endl;	
		}
	} 
	return 0;
} 
