/* Define a 'special word' as a lowercase alphabet followed by 2 consecutive digits
Given a string, replace all 'special words' of len 3 with 3 stars '***'
e.g. S = "line: a70 and z72 will be replaced, aa24 and a872 will not"
should be transformed into
S = "line: *** and *** will be replaced, aa24 and a872 will not".
*/
class specialword {
    public static void main(String[] args) {
        String S = "line: a70 and z72 will be replaced, aa24 and a872 won't.";
        System.out.println(S.replaceAll("\\b[a-z][0-9][0-9]\\b", "***"));
    }
}