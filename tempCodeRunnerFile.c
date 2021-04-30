void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void moveArray(int a[], int N, int M)
{
    int i, j;
    for (i = 0, j = N - M - 1; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    } //a0～an-m-1逆序；
    for (i = N - M, j = N; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    } //an-m～an逆序；
    for (i = 0, j = N; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    } //a0～an逆序；
}