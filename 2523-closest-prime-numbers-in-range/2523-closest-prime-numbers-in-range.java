class Solution {
    public int[] closestPrimes(int left, int right) {
        boolean[] isPrime = new boolean[right + 1];
        for (int i = 2; i <= right; i++) {
            isPrime[i] = true;
        }

        for (int i = 2; i * i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int prevPrime = -1;
        int minDiff = Integer.MAX_VALUE;
        int[] ans = new int[]{-1, -1};

        for (int i = left; i <= right; i++) {
            if (isPrime[i]) {
                if (prevPrime != -1 && (i - prevPrime) < minDiff) {
                    minDiff = i - prevPrime;
                    ans[0] = prevPrime;
                    ans[1] = i;
                }
                prevPrime = i;
            }
        }

        return ans;
    }
}