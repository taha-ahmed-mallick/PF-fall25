#define CUBE(x) x * x * x
void solve(){
    int ans;
    ans = 216 / (CUBE(3));
    printf("%d", ans);
}
int main(){
    solve();
    return 0;
}