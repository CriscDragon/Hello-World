int gcd(int a,int b)//a>b   运用递归方法求最大公约数
{
    if(b==0) return a;
    return gcd(b,a%b);	
} 