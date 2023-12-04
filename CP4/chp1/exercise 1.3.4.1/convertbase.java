/* Given a string that represents a base X number, convert it to an equivalent string in base Y,
2 <= X, Y <= 36.
E.g. "FF" in base X = 16 (hexadecimal) is "255" in base Y1 = 10 (decimal) and "1111111" in base Y2 = 2 (binary)
*/
import java.math.*;
class convertbase {
    public static void main(String[] args) {
        String str = "FF"; 
        int X = 16, Y = 10;
        // Constructs a BigInteger object using the input string and specifies the source base 'X'
        // This creates a BigInteger representation of the hexadecimal number
        System.out.println(new BigInteger(str, X).toString(Y));
        //BigInteger(String val, int radix)
        // Translates String representation of BigInteger in specified radix into a BigInteger.
        // toString(int radix)
        // Returns the string representation of this BigInteger in the given radix.
        // Note: the output is a STRING, not INT.
    }
}