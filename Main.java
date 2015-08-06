package main;
import java.io.*;
import java.util.*;
import java.math.BigInteger;
public class Main {
    static Scanner sc=new Scanner(System.in);
    static BigInteger ans(BigInteger s)
    {
        BigInteger temp;
        temp=s.divide(BigInteger.valueOf(9));
        if(s.mod(BigInteger.valueOf(9)).equals(BigInteger.ZERO))
        {
            temp=temp.add(BigInteger.ZERO);
        }else
            temp=temp.add(BigInteger.ONE);
        return temp;
    }
    public static void main(String[] args) {
           BigInteger s;
           while(true)
           {
               s=sc.nextBigInteger();
               if(s.equals(BigInteger.valueOf(-1)))
                   break;
               else
                   System.out.println(ans(s));
           }
           
    }
    
}
