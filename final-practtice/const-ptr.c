int main(){
    int x = 5;
    int  *const p = &x;
    int *y = &x;
    const int *z = &x;
    *p = 15;
    printf("%d ", x);
    *y = 3;
    printf("%d ", x);
    // *z = 5;
    printf("%d ", x);
}