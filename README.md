# 問1
## 関数作成
<p style="text-indent: 1em;">
sub.cに、整数$n,m$に対して次の値を計算する関数を作成する。
</p>
### (1) $ \sum_{k=1}^n k^2 $
```C
int sigma(int n)
{
    int ans=0;
    for(int k=1; k<=n; k++)
    {
        ans += k*k;
    }
    return ans;
}
```

### (2) $ \prod_{k=1}^n \frac{1}{k^2} $
```C
double product(int n)
{
    float ans=1.0;
    for(float k=1.0; k<=n; k++)
    {
        ans *= 1/(k*k);
    }
    return ans;
}
```

### (3) $ n! $
```C
int factrial(int n)
{
    int ans=1;
    for(int k=1; k<=n; k++)
    {
        ans *= k;
    }
    return ans;
}
```

### (4) $ _n C_m $
```C
int convination(int n, int m)
{
    int ans, num=1, den=1;

    for(int k=0; k<m; k++)
    {
        num *= n-k;
    }

    for(int l=1; l<=m; l++)
    {
        den *= l;
    }

    ans = num/den;

    return ans;
}
```
---
## main.c
任意の整数$n, m$を入力する。
```C
int n=10/*任意の整数を入力*/, m=5/*任意の整数を入力*/;
```
$n,m$が自然数でない場合、エラーが起きて計算ができない。  
また、(4) $_n C_m$では$n>m$を満たす必要がある。
```C
if(n<1)
{
    printf("Bad number n has been entered.\n");
}
else if (m<0 || m>n)
{
    printf("Bad number m has been entered.\n");
}
```
あとは計算結果を出力するだけである。
```C
else
{
    printf("n=%d\tm=%d\n", n, m);
    printf("(1)\tans=%d\n", sigma(n));
    printf("(2)\tans=%le\n", product(n));
    printf("(3)\tans=%d\n", factrial(n));
    printf("(4)\tans=%d\n", convination(n, m));
}
```
---
## 出力結果
$n=10, m=5$で計算した結果はこのようになった。

[![](./image/result.png)](./image/result.png)

---
- [問2へ](https://github.com/Kouji-Tanaka/B4_Programming2 "Kouji-Tanaka/B4_Programming2")
- [問3へ](https://github.com/Kouji-Tanaka/B4_Programming3 "Kouji-Tanaka/B4_Programming3")
- [問4へ](https://github.com/Kouji-Tanaka/B4_Programming4 "Kouji-Tanaka/B4_Programming4")
- [問5へ](https://github.com/Kouji-Tanaka/B4_Programming5 "Kouji-Tanaka/B4_Programming5")
- [問6へ](https://github.com/Kouji-Tanaka/B4_Programming6 "Kouji-Tanaka/B4_Programming6")

<div style="text-align: right;">
    <a href="#">
        [Topへ]
    </a>
</div>