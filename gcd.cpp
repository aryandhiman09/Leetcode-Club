int gcd(int a, int b) {
    // code here
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

//NOT Complete yet DO with other method
