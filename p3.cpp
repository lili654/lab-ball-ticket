#include<bits/stdc++.h>
using namespace std;
const int N=1e2+10;
int n,a[N],flag[N];
signed main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];//ѭ�������i�ſ�Ƭ��ֵ
	int ans=0;
	for(int i=1;i<=n;i++)	//ѭ��ö��i������ģ��
	{ 
		//��ÿ����Ƭ��flag��ʼ��Ϊ0�� 
		//��������һ��forѭ��֮�ڣ����õı���Ӧ����һ�����ϱ�ʾ
		for(int j=1;j<=n;j++)
			{
			flag[j]=0;//��ʾû�б�����
			          //flag[j]=1��ʾ��Ƭj�����ߣ�jΪ��ǰλ��	
			} 
	    
		int num=1; //num��ʾ����������1��ʼ��
		int pos=i; //pos��ʾ��ǰ��λ��
		int cnt=0; //��ʾ���ߵĿ�Ƭ������
		int sum=0; //��ʾ��iΪ��������������ߵĿ�Ƭ��ֵ���ܺ� 
		
		
	//��ʼģ�� 
	//��ǰģ��Ϊ�Ե�i������������ 
	//�����жϴ�ʱ�ܷ��������������ȡ��Ƭ����Ϸ�Ƿ��������Ƭ�Ƿ�ȡ�� 
		while(1) 
		{
		    //�ж���Ϸ�Ƿ����
			if(cnt==n||num>=n)	 
			break;
			
			//�жϿ�Ƭ�Ƿ�ȡ��
			if(flag[pos==1])//ǰ���Ѿ���i��ֵ��pos��
			{
				if(pos==n)
				  pos=1;//����ǰλ��pos�Ѿ������һ���ˣ��򽫵�ǰ����λ�ô��´�1��ʼ 
				else
				  pos++;
			continue;	//ѭ���ж�			
			} 
			
			//����������⣬����ȡ��
		 	if(num==a[pos])  
		    {
		    	sum+=a[pos];
				cnt++;
				num=1; //ȡ�ߺ�Ҫ��������	
				//�ж�ȡ�ߵ��Ƿ������һ��
				if (pos==n)
				pos=1;
				else 
				pos++; 
			}
			
			//����������ʱ 
			else			
			{
				num++;	
				if(pos==n)
				pos=1;
				else
				pos++;
			}	
		}
		//��iΪ���������ģ��������жϵ�ǰ����Ƿ������Ϊ�� 
		//��ÿ��λ����Ϊ������õ������sum���бȽ�
		if(sum>ans)
		ans=sum; 
	} 
		
	cout<<ans<<'\n'
	return 0;
}



