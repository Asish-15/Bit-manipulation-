int findXOR(int l, int r)
{
    int ans = 0;
    for (int i = l; i <= r; i++) {
        ans = ans ^ i;
    }
    return ans;
}