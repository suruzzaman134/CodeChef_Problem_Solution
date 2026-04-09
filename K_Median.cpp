// Problem Link : https://www.codechef.com/problems/KMED
#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 


int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int T;
    if (!(cin >> T)) return 0; // টেস্ট কেস সংখ্যা ইনপুট

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // ১. অ্যারেটি ছোট থেকে বড় ক্রমে সর্ট করা
        sort(A.begin(), A.end());

        // ২. বাকি থাকা এলিমেন্টের সংখ্যা (M) এবং মিডিয়ানের পজিশন (P) বের করা
        int M = N - K;
        int P = (M + 1) / 2; // এটি ceil(M/2.0) এর সমান

        /* ৩. লজিক: সর্ট করা অ্যারের (P-1) ইনডেক্স থেকে শুরু করে 
           (P+K-1) ইনডেক্স পর্যন্ত সংখ্যাগুলোই সম্ভাব্য মিডিয়ান।
        */
        
        vector<long long> results;
        for (int i = P - 1; i <= (P + K - 1); i++) {
            // ডুপ্লিকেট মিডিয়ান এড়ানোর জন্য চেক
            if (results.empty() || A[i] != results.back()) {
                results.push_back(A[i]);
            }
        }

        // ৪. রেজাল্ট প্রিন্ট করা
        for (int i = 0; i < results.size(); i++) {
            cout << results[i] << (i == results.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

   return 0;
}