#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

#define needforspeed ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define mp3(a,b,c) make_pair(a,make_pair(b,c))
#define mp4(a,b,c,d) make_pair(make_pair(a,b),make_pair(c,d))
#define trace1(a) cout << (#a) << ":" << (a);
#define trace2(a,b) trace1(a); cout << " "; trace1(b); cout << endl; 
#define trace3(a,b,c) trace1(a); cout << " "; trace1(b); cout << " "; trace1(c); cout << endl;  
#define trace4(a,b,c,d) trace1(a); cout << " "; trace1(b); cout << " "; trace1(c); cout << " "; trace1(d); cout << endl;  
#define ms(a,b) memset( (a), (b), sizeof(a))
#define Fill(a,b) fill((a), (a)+sizeof(a)/sizeof((a)[0]), (b));
#define Fill2D(a,b) fill(&(a)[0][0], &(a)[0][0]+sizeof(a)/sizeof((a)[0][0]), (b))
#define Fill3D(a,b) fill(&(a)[0][0][0],&(a)[0][0][0]+sizeof(a)/sizeof((a)[0][0][0]), (b))
#define all(x) (x).begin(),(x).end()
#define len(x) (int)(x).size()
#define xx first
#define yy second
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define MAXN (int)1e9
#define MOD 1000000007
#define inf 0x3f3f3f3f
#define db 0
using namespace std;

int string_to_int(string s);
string int_to_string(int i);
vector<string>split(string s, char delim);
template< class T>
void print_vec(vector<T>vec, bool new_line=false);

string p1, p2;

int main() {
    needforspeed;
    while(cin >> p1 >> p2){
        if(p1 == "E" && p2 == "E")break;
        int p1_cnt = 0, p2_cnt = 0;
        for(int i = 0;i < len(p1);i++){
            if(p1[i] == 'R' && p2[i] == 'S'){
                p1_cnt++;
            }
            if(p1[i] == 'P' && p2[i] == 'R'){
                p1_cnt++;
            }
            if(p1[i] == 'S' && p2[i] == 'P'){
                p1_cnt++;
            }

            if(p2[i] == 'R' && p1[i] == 'S'){
                p2_cnt++;
            }
            if(p2[i] == 'P' && p1[i] == 'R'){
                p2_cnt++;
            }
            if(p2[i] == 'S' && p1[i] == 'P'){
                p2_cnt++;
            }
        }
        cout << "P1: " << p1_cnt << endl;
        cout << "P2: " << p2_cnt << endl;
    }

    return 0;
}

template< class T>
void print_vec(vector<T>vec, bool new_line){
    for(int i = 0;i < len(vec);i++){
        cout << vec[i] << ((new_line) ? '\n' : ' ');
    }
    cout << endl;
}

int string_to_int(string s){
    int ret;
    stringstream ss;
    ss << s;
    ss >> ret;
    return ret;
}

string int_to_string(int i){
    string ret;
    stringstream ss;
    ss << i;
    ss >> ret;
    return ret;
}

vector<string>split(string s, char delim){
    stringstream ss(s);
    vector<string>ret;
    string temp;
    while(getline(ss, temp, delim)){
        ret.push_back(temp);
    }
    return ret;
}
