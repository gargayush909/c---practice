double res=1;
        for(int i=2;i<=N;i++)
        {
            res=res+log10(i);
        }
        return floor(res);