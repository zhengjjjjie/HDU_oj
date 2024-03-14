/**
	No.2063 ��ɽ��-�������㷨 
	RPG girls����ʹ��һ��ȥ���ֳ��棬���ڿ���������������Ĺ�ɽ���ˡ����ǣ���ɽ����ÿһ��ֻ��������λ�����һ����������ĵĹ�أ�����ÿ��Ů�������Ҹ���
	������partner����ͬ�������ǣ�ÿ��Ů�����и��Ե��뷨���ٸ����Ӱѣ�RabbitֻԸ���XHD��PQK��partner��GrassֻԸ���linle��LL��partner��PrincessSnowԸ��
	��ˮ�����ӻ�α�����partner�����ǵ��������⣬boss������ֻ���ҵ�partner����ȥ����ɽ�����������ˣ��ٺ٣���վ�����濴�Űɡ�������Acmer������԰�æ����
	����ж��ٶ���Ͽ������Ϲ�ɽ����
	
	Input:�������ݵĵ�һ������������K , M , N���ֱ��ʾ���ܵ������Ŀ��Ů����������������������0<K<=1000 1<=N ��M<=500.
		��������K�У�ÿ�������������ֱ��ʾŮ��AiԸ�������Bj��partner�����һ��0�������롣

	Output:����ÿ�����ݣ����һ����������ʾ�������Ϲ�ɽ������������
		
	SampleInput:
		6 3 3
		1 1
		1 2
		1 3
		2 1
		2 3
		3 1
		0
		
	SampleOutput:
		3

	ע���������㷨�ĺ�����Ѱ�҉���·����һ��������·�������ͼ���ƥ����㷨������Ҳ�������·�ˣ�˵���Ѿ��ﵽ���ƥ�䡣
	
**/
# include<iostream>
# include<algorithm> //find()����������ͨ���� 
# include<cstring> //memset()�����������ʼ�� 
using namespace std;

bool map[501][501], visited[501]; //map��ʾƥ��ͼ��map[i,j]��ʾŮ��i������j������Ȥ��visited[i]��ʾ����i�Ƿ񱻷��ʹ�
int match[501]; //match[i]��ʾ������iƥ���Ů���ı��

bool find(int x, int n) { //���������ж��Ƿ��к� x��Ů����Ե� 
	for(int i=1; i<=n; i++) {
		if(!visited[i] && map[x][i]) { //����i��û�����ʶ���Ů��x������i����Ȥ 
			visited[i] = 1; //���� i
			if(match[i] == -1 || find(match[i],n)) { //�ݹ� 
			//match[i]=-1��ʾ����i��δƥ�䣬�����λ������δƥ�䣬�����Ѿ�ƥ���ˣ���ԭ������ƥ���Ů��������ȥ�ͱ������ƥ�䣬�Ͱ���������ø�Ů��x
				match[i] = x; 
				return true; //ƥ��ɹ� 
			} 
		}
	}
	return false; //ƥ��ʧ�� 
}
int main() {
	// ����ͼƥ������-�������㷨��˫��ͼ��
	// ���ƥ�� 
	int k, m, n;
	int a,b;
	while(cin >> k, k) {
		cin >> m >> n;
		for(int i=1; i<=m; i++) { //��ʼ�� 
			for(int j=1; j<=n; j++) { 
				map[i][j] = 0;
			} 
		} 
		memset(match, -1, sizeof(match)); //��ʼ�� 
		for(int i=1; i<=k; i++) { //��¼Ů��ѡ�� 
			scanf("%d%d",&a,&b);
			map[a][b] = 1;
		} 
		int sum = 0;
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				visited[j] = 0; //��ʼ�� 
			} 
			if(find(i,n)) sum++; //i��Ů���Ƿ���� 
		}
		cout << sum << endl;
	}
	return 0;
} 
