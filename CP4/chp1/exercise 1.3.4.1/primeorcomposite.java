// Given an integer X that can contain up to 20 digits, output 'Prime' if X is a prime or 'Composite' otherwise
import java.math.*;
class primeorcomposite {
    public static void main(String[] args) throws Exception {
        BigInteger x = new BigInteger("4811295837082048697"); // Big Integer
        System.out.println(x.isProbablePrime(10) ? "Prime" : "Composite");

    }
}