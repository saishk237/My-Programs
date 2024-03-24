import java.util.*;

public class learningException {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        try {
            divide(a, b);
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
        }
        finally {
            System.out.println("This will always execute");
        }
    }

    static int divide(int a, int b) {
        int c = a / b;
        return c;
    }
}
