package julka;
import java.util.*;
import java.io.*;
import java.math.BigInteger;
public class Julka {
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) 
    {
      for(int i=0;i<10;i++){
        BigInteger n;
        n=sc.nextBigInteger();
        BigInteger extra;
        extra=sc.nextBigInteger();
        BigInteger avg=n.subtract(extra);
        if(avg.mod(BigInteger.valueOf(2))!=BigInteger.ZERO)
        {
            avg=avg.divide(BigInteger.valueOf(2)).add(BigInteger.valueOf(1));
        }
        else
        {
            avg=avg.divide(BigInteger.valueOf(2));
        }
        System.out.println(avg.add(extra));
        System.out.println(avg);
       }
    }
    
}
