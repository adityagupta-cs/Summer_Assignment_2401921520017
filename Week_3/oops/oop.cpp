abstract class Compartment {
    public abstract String notice();
}
class FirstClass extends Compartment {
    public String notice() {
        return "First Class Compartment";
    }
}
class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment";
    }
}
class General extends Compartment {
    public String notice() {
        return "General Compartment";
    }
}
class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment";
    }
}
public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] coach = new Compartment[10];
        for(int i = 0; i < 10; i++) {
            int r = (int)(Math.random() * 4) + 1;
            switch(r) {
                case 1:
                    coach[i] = new FirstClass();
                    break;
                case 2:
                    coach[i] = new Ladies();
                    break;
                case 3:
                    coach[i] = new General();
                    break;
                case 4:
                    coach[i] = new Luggage();
                    break;
            }
        }
        for(int i = 0; i < 10; i++) {
            System.out.println(coach[i].notice());
        }
    }
}