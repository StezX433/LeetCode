class Solution {
    private static int gcd(int a , int b){
        if (b==0) return a;
        return gcd(b,a%b);
    }
    public List<String> simplifiedFractions(int n) {
        List<String> result = new ArrayList<>();
        for (int denom = 2; denom <= n ; denom++){
            for (int i = 1 ; i < denom ; i++){
                if (gcd(i,denom)==1){
                    result.add(i + "/" + denom);
                }
            }
        }
        return result;
    }
}