string multiplyBigInt(string a, string b) {
    ll len1 = a.size();
    ll len2 = b.size();
    if (len1 == '0' || len2 == '0') return "0";

    vll result(len1+len2, 0);

    // Indices to find positions in result
    int i_n1 = 0;
    int i_n2 = 0;

    // Go from right to left in a
    for (int i = len1 - 1; i >= 0; --i) {
        int carry = 0;
        int n1 = a[i] - '0'; // convert char to int

        // shift position to left after every multiplication of a digit
        i_n2 = 0;

        // go from right to left in b
        for (int j = len2 - 1; j >= 0; --j) {
            // Take current digit of second string
            int n2 = b[j] - '0';

            // multiply with current digit of first string and add result to currently stored result at current position.
            int sum = n1*n2 + carry + result[i_n1 + i_n2];

            // carry for next iteration
            carry = sum/10;

            // store result
            result[i_n1+i_n2] = sum%10;

            i_n2++;
        }

        // store carry in next cell
        if (carry>0) {
            result[i_n1 + i_n2] += carry;
        }

        // Shift position to left after every multipliation of a digit in second string
        i_n1++;
    }

    // Ignore '0's from the right
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0) --i;

    // If all were '0's - means either both or one of a and b were '0'
    if (i == -1) return "0";

    // Generate result string
    string s = "";
    while (i >= 0) {
        s += to_string(result[i--]);
    }
    return s;

}