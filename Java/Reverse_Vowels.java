public class Reverse_Vowels {
    public static void main(String[] args) {
        String st = "Welcome to Scalar";
        reversevowels(st);
        System.out.println(st);
    }
 
    public static String reversevowels(String st) {
        char[] s = st.toCharArray();
        int i = 0;
        int j = st.length() - 1;
        while (i < j) {
            while (s[i] != 'a' && s[i] != 'A' && s[i] != 'e' && s[i] != 'E' && s[i] != 'i'
                    && s[i] != 'I' && s[i] != 'o' && s[i] != 'O' && s[i] != 'u' && s[i] != 'U') {
                        i++;
            }
            while (s[j] != 'a' && s[j] != 'A' && s[j] != 'e' && s[j] != 'E' && s[j] != 'i'
                    && s[j] != 'I' && s[j] != 'o' && s[j] != 'O' && s[j] != 'u' && s[j] != 'U') {
                        j--;
            }
            if(i>=j) break;

            char ch=s[i];
            s[i]=s[j];
            s[j]=ch;

            i++;
            j--;
        }
        return st;
    }
}
