#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl;
#define debugarr2d(x, n, m)                 \
    {                                       \
        for (int _ = 0; _ < n; ++_)        \
        {                                   \
            for (int __ = 0; __ < m; ++__) \
                cout << x[_][__] << " ";    \
            cout << endl;                   \
        }                                   \
        cout << endl;                       \
    }
#define debugarr(x, n)               \
    {                                \
        for (int _ = 0; _ < n; ++_) \
            cout << x[_] << " ";     \
        cout << endl;                \
    }
#define debugvi(x)                         \
    {                                      \
        for (int _ = 0; _ < x.size(); ++_) \
            cout << x[_] << " ";           \
        cout << endl;                      \
    }

#define fi first
#define se second
#define pb push_back
using namespace std;

typedef int64_t ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int MAX = 1e5 + 5;
int n;
int a[MAX];
bool isLocked[MAX];

int main(){
    #ifndef ONLINE_JUDGE
    freopen("data.inp", "r", stdin);
    freopen("data.out", "w", stdout);
    #endif

    int T;
    cin >> T;
    while(T--)
    {
        vi numberUnlock;
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) 
        {
            cin >> isLocked[i];
            if (!isLocked[i])
                numberUnlock.push_back(a[i]);
        }

        sort(numberUnlock.begin(), numberUnlock.end());
        
        for (int i = 0; i < n; ++i)
            if (!isLocked[i])
            {
                a[i] = numberUnlock.back();
                numberUnlock.pop_back();
            }
        
        for (int i = 0; i < n; ++i)
            cout << a[i] << " " ;
        cout << endl;
    }
    return 0;
}
