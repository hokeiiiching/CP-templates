// compute 40!
// far exceeds the largest built-in primitive integer data type, unsigned long long, 2^64 - 1
import java.math.BigInteger;
class factorial40 { 
    public static void main(String[] args) {
        BigInteger fac = BigInteger.ONE;
        for (int i = 2; i <= 40; ++i) 
            // returns a BigInteger whose value is equal to that of the specified long
            fac = fac.multiply(BigInteger.valueOf(i)); //  it is in the library! 1*2*3*4...*40
        System.out.println(fac);
    }
}