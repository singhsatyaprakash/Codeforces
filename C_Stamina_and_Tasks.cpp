// #include <iostream>
// #include <vector>
// #include<iomanip>
// using namespace std;

// double solve(int i, double stamina, vector<double>& c, vector<double>& p, int n) {

//     if(i == n) 
//         return 0;

//     // skip task
//     double skip = solve(i+1, stamina, c, p, n);

//     // take task
//     double gain = stamina * c[i];
//     double newStamina = stamina * (1 - p[i]/100.0);

//     double take = gain + solve(i+1, newStamina, c, p, n);

//     return max(skip, take);
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin >> n;
    
//         vector<double> c(n), p(n);
    
//         for(int i=0;i<n;i++)
//             cin >> c[i] >> p[i];
    
//         double ans=solve(0,1,c,p,n);
//         cout << fixed << setprecision(10) << ans << endl;
//     }
// }

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<double> c(n), p(n);

        for (int i = 0; i < n; i++) {
            cin >> c[i] >> p[i];
        }

        vector<double> dp(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            double skip = dp[i + 1];
            double take = c[i] + (1 - p[i] / 100.0) * dp[i + 1];

            dp[i] = max(skip, take);
        }

        cout << fixed << setprecision(10) << dp[0] << endl;
    }

    return 0;
}