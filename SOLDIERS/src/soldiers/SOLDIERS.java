package soldiers;
import java.io.*;
import java.util.*;
import java.math.BigInteger;
public class SOLDIERS {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) {
        int t;
        t=sc.nextInt();
        while(t-->0)
        {
         BigInteger m,n,a,b;
         m=sc.nextBigInteger();
         n=sc.nextBigInteger();
         if(m.mod(BigInteger.valueOf(2)).equals(BigInteger.ONE))
         {
             a=m.add(BigInteger.ONE).divide(BigInteger.valueOf(2));
         }
         else
         {
             a=m.divide(BigInteger.valueOf(2));
         }
         if(n.mod(BigInteger.valueOf(2)).equals(BigInteger.ONE))
         {
             b=n.add(BigInteger.ONE).divide(BigInteger.valueOf(2));
         }
         else
         {
             b=n.divide(BigInteger.valueOf(2));
         }
         System.out.println(m+" "+n+" "+a+" "+b);
         m=m.multiply(a);
         n=n.multiply(b);
         System.out.println(m+" "+n+" "+a+" "+b);
         if(m.equals(n))
         {
             System.out.println(m);
         }
         else
         {
             System.out.println(n);
         }
        }

    }
    
}