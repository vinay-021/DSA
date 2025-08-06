public class Square {

    static int square(int num) {
        return num * num;
    }

    static void hello() {
        System.out.println("Hello World!");
    }

    static String[] heroes() {
        String[] superheroes = {"Iron Man", "Eren Yeager", "Light Yagemi", "Alien X"};
        return superheroes;
    }

    public static void main(String[] args) {
//        System.out.println(square(10));
//        System.out.println(square(7));
//        hello();
        String[] arr = heroes();
        for (String hero : arr) {
            System.out.println(hero);
        }
    }
}
