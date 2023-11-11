public class Variables {

    public static void main(String[] args){
        // data types
        /*
            * byte - 8-bit signed two's complement integer
            *   (-128 <= byte <= 127)
            * short - 16-bit signed two's complement integer
            *   (-32,768 <= short <= 32,767)
            * int - 32-bit signed two's complement integer
            *   (-2,147,483,648 <= int <= 2,147,483,647)
            * long - 64-bit signed two's complement integer
            *   (-9,223,372,036,854,775,808 <= long <= 9,223,372,036,854,775,807)
            *   should have L at the end
            * float - single-precision 32-bit IEEE 754 floating point
            *   (float <= 3.40282347E+38f) - 6-7 significant decimal digits
            *   should have f at the end
            * double - double-precision 64-bit IEEE 754 floating point
            *   (double <= 1.79769313486231570E+308) - 15 significant decimal digits
            * boolean - true or false
            *   (1 bit)
            * char - single 16-bit Unicode character
            *   ('\u0000' <= char <= '\uffff') (ASCII)
            * String - a sequence of characters (reference type) (immutable)
         */

        // difference between primitive and reference types
        // primitive types are stored in the stack
        // reference types are stored in the heap

        // primitive types
        byte b = 127;
        short s = 32767;
        int i = 2147483647;
        long l = 9223372036854775807L;
        float f = 3.40282347E+38f;
        double d = 1.79769313486231570E+308;
        boolean bool = true;
        char c = 'a';
        String str = "Hello world!";

        System.out.println(b);
        System.out.println(s);
        System.out.println(i);
        System.out.println(l);
        System.out.println(f);
        System.out.println(d);
        System.out.println(bool);
        System.out.println(c);
        System.out.println(str);

    }
}
