#include<bits/stdc++.h>
using namespace std;
const int N=1e2+10;
int n,a[N],flag[N];
signed main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];//循环输入第i张卡片的值
	int ans=0;
	for(int i=1;i<=n;i++)	//循环枚举i个起点的模拟
	{ 
		//将每个卡片的flag初始化为0， 
		//由于在上一个for循环之内，所用的变量应用另一个符合表示
		for(int j=1;j<=n;j++)
			{
			flag[j]=0;//表示没有被拿走
			          //flag[j]=1表示卡片j被拿走，j为当前位置	
			} 
	    
		int num=1; //num表示数的数，从1开始数
		int pos=i; //pos表示当前的位置
		int cnt=0; //表示拿走的卡片的数量
		int sum=0; //表示以i为起点数数，所拿走的卡片的值的总和 
		
		
	//开始模拟 
	//当前模拟为以第i个起点进行数数 
	//首先判断此时能否继续进行数数和取卡片：游戏是否结束、卡片是否被取走 
		while(1) 
		{
		    //判断游戏是否结束
			if(cnt==n||num>=n)	 
			break;
			
			//判断卡片是否被取走
			if(flag[pos==1])//前面已经将i赋值给pos了
			{
				if(pos==n)
				  pos=1;//若当前位置pos已经是最后一个了，则将当前数数位置从新从1开始 
				else
				  pos++;
			continue;	//循环判断			
			} 
			
			//如果满足题意，可以取走
		 	if(num==a[pos])  
		    {
		    	sum+=a[pos];
				cnt++;
				num=1; //取走后要重新数数	
				//判断取走的是否是最后一个
				if (pos==n)
				pos=1;
				else 
				pos++; 
			}
			
			//不满足题意时 
			else			
			{
				num++;	
				if(pos==n)
				pos=1;
				else
				pos++;
			}	
		}
		//以i为起点数数的模拟结束，判断当前结果是否可以作为答案 
		//与每个位置作为起点所得的最后结果sum进行比较
		if(sum>ans)
		ans=sum; 
	} 
		
	cout<<ans<<'\n'
	return 0;
}



