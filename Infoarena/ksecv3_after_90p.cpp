/***************************************************
 * Alex Palcuie
 * Romania - 2013
 * alex [dot] palcuie [at] gmail [dot] com
 * http://palcu.blogspot.com/
****************************************************/

#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <utility>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <cstring>

using namespace std;

// Defines
#define NAME(n) #n
#define pr(x) db((x), (#x))
#define prv(v,n) dbv((v), (#v), (n))
#define prw(v) dbw((v), (#v))
#define X first
#define Y second
#define pb push_back

// Helpers
template <typename T>
inline void db(const T x, const char * name){
	cerr << name << " = " << x << '\n';
}
template <typename T> inline void dbv(const T * v, const char * name, int n){
	fprintf(stderr, "=== %s ===\n", name);
	for(int i=0; i<n; i++)
		cerr << v[i] << " ";
	cerr << '\n';
}
template <typename T> inline void dbs(T x){
	cerr << x << ' ';
}

template<typename T>
void dbw(const std::vector<T>& t, const char * name){
	fprintf(stderr, "=== %s ===\n", name);
	unsigned n = t.size();
	for(typename std::vector<T>::size_type i=0; i<n; ++i)
		std::cerr << t[i] << ' ';
	cerr << '\n';
}

// Structs

// Constants
const int N = 1<<10;
const int INF = 0x3f3f3f3f;

// Globals
int n, k;

// Functions
void fuckit(){
    printf("-1\n");
    exit(0);
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("ksecv3.in","r",stdin);
	freopen("ksecv3.out","w",stdout);
	#endif

	int s = 0, x, i;
	scanf("%d%d", &n, &k);
	for(i=0; i<n; i++){
        scanf("%d", &x);
        s += x;
	}

	if(s%k != 0)
        fuckit();
    s /= k;

    vector<int> sol;
    freopen("ksecv3.in","r",stdin);
    int sCurent = 0;
    scanf("%d%d", &n, &k);
    for(i=0; i<n; i++){
        scanf("%d", &x);
        sCurent += x;
        if(sCurent>s)
            fuckit();
        else if(sCurent == s){
            sCurent = 0;
            sol.pb(i+1);
        }
    }
    if(sCurent>s)
        fuckit();
    else if(sCurent == s){
        sCurent = 0;
        sol.pb(i+1);
    }

    if(sol.size() == k){
        for(i=0; i<sol.size(); i++)
            printf("%d ", sol[i]);
        printf("\n");
    }
    else fuckit();





	return 0;
}
