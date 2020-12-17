#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long t, n, x, a[100001], k = 30;
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld %lld", &n, &x);
        vector<vector<long long>> idx(k+1);
        for(long long i=0;i<n;i++) {
            scanf("%lld", &(a[i]));
            if(i==n-1) continue;
            for(long long j=k;j>=0;j--) if(a[i]&(1LL<<j)) {
                idx[j].push_back(i);
            }
        }
        vector<long long> cnt(k+1, 0);
        for(long long i=0;i<n-1;i++) {
            for(long long j=k;j>=0;j--) {
                long long mask = 1LL<<j;
                if((a[i]&mask)==0) continue;
                a[i] ^= mask;
                long long d;
                if(++cnt[j] < idx[j].size()) {
                    d = idx[j][cnt[j]++];
                } else d = n-1;
                a[d] ^= mask;
                if(--x == 0) break;
            }
            if(x==0) break;
        }
        if(x==1 || (x%2==1 && n==2)) {
            a[n-2] ^= 1, a[n-1] ^= 1;
        }
        for(long long i=0;i<n;i++) printf("%lld ", a[i]);
        printf("\n");
    }
    return 0;
}
