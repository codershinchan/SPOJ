package panagram;
import java.io.*;
import java.util.*;
public class Panagram {
    static Scanner sc=new Scanner(System.in);
    static boolean panagram(String s)
    {
        Set ans=new HashSet();
        for(int i=0;i<s.length();i++)
        {
            if(!ans.contains(s.charAt(i)))
                ans.add(s.charAt(i));
        }
        if(ans.size()==26)
        {
            return true;
        }
    return false;
    }
    public static void main(String[] args) 
    {
     String s=sc.nextLine();
     s=s.trim();
     s=s.replaceAll("\\s+","");
     if(panagram(s)==true)
     {
         System.out.println("pangram");
     }
     else
         System.out.println("not pangram");
    }
    
}
