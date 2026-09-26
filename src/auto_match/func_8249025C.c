void fn_8249025C(int *arr, int n, int x, int *vp, int unused, int key)
{
    int lo, hi, mid, val;
    if (key < n) {
        val = arr[x];
        arr[n] = val;
        n = x;
    }
    lo = n - 1;
    hi = n;
    mid = lo >> 1;
    while (key < hi && (val = arr[mid]) < *vp) {
        hi = mid;
        lo = mid - 1;
        mid = lo >> 1;
        arr[n] = val;
        n = mid;
    }
    arr[n] = *vp;
}
