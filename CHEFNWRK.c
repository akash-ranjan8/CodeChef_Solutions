#include <stdio.h>
void solve()
{ int n,k;
  int c=0;
  int sum=0;
  scanf("%d%d",&n,&k);
  int w[n];
  for(int i=0;i<n;++i)
  { scanf("%d",&w[i]);
  }
  for(int i=0;i<n;++i)
  { if(w[i]>k)
    { printf("-1\n");
      return;
    }
    if(sum+w[i]<=k)
    { sum+=w[i];
    }
    else
    { c++;
      sum=w[i];
    }
  }
  printf("%d\n",c+1);
  
}
    
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	int i=1;
	while(i<=t)
	{ solve();
	  ++i;
	}
	  
	return 0;
}

