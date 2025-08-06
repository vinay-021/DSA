class Car {
    String model = "Hatchback";
    String color = "Black";
    int price = 100000;
    boolean isLocked = false;

    Car(String modelName, String colorName) {
        //System.out.println("Inside the Constructor");
        modelName = modelName;
        color = colorName;
    }

    void drive() {
        System.out.println("Wroom Wroom Wroom");
    }

    void lock() {
        isLocked = true;
        System.out.println("Car is now locked");
    }

    void unlock() {
        isLocked = false;
        System.out.println("Car is now unlocked");
    }

    int getPrice() {
        return price;
    }

    void setPrice(int priceValue) {
        price = priceValue;
    }
}

public class Classes {
    public static void main(String[] args) {
        Car c1 = new Car("Hatchback", "Red");
        Car c2 = new Car("Seden", "Blue");

//        Reading the Properties
        System.out.println(c1.color);
        System.out.println(c1.model);
       /* System.out.println(c1.color);
        System.out.println(c1.model);
        System.out.println(c1.getPrice());

        c2.color = "Gray";
        System.out.println(c2.color);

        c1.drive();
        c2.drive();

        c1.lock();
        c2.unlock();

        System.out.println(c1.isLocked);
        System.out.println(c2.isLocked);

        c2.setPrice(5000);
        System.out.println(c2.getPrice());
*/
    }
}
