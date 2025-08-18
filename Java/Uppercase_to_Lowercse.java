public class Uppercase_to_Lowercse {
    public static void main(String[] args) {
        String st="Welcome to Scalar";
        String result=Convert_to_Lowercase(st);
        System.out.println(result);
    }
    public static String Convert_to_Lowercase(String st){
        char[] s=st.toCharArray();
        for (int i = 0; i < s.length; i++) {
            char ch=s[i];
            if (ch>='A' && ch <='Z') {
                s[i]=(char)(ch-'A'+'a');
                //s[i]=ans;
            }
        }
        return new String(s);
    }
}
