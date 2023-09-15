for (int i = 1; i <= sqrt(n); i++)
    {
        if (n%2==0)
        {
            cout<<i<<" ";
        }
        if (n/i != i)
        {
            cout<<n/i<<endl;
        }     
    }