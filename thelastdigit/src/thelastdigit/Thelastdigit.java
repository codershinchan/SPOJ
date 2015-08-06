package thelastdigit;
import java.util.*;
import java.io.*;
import java.math.*;
public class Thelastdigit {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) 
    {
        int testcases=sc.nextInt();
        while(testcases-->0)
        {
            BigInteger a=sc.nextBigInteger();
            BigInteger b=sc.nextBigInteger();
            while(b!=BigInteger.ZERO)
            {
                a=a.multiply(a);
                b=b.subtract(BigInteger.ONE);
            }
            BigInteger ans=a.mod(BigInteger.valueOf(10));
            System.out.println(ans);
        }
    }
    
}
