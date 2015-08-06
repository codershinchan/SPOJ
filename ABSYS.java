package absys;
import java.util.*;
import java.io.*;
public class ABSYS {
    static Scanner sc=new Scanner(System.in);
    static BufferedReader din=new BufferedReader(new InputStreamReader(System.in));
    static String solution(String s)
    {
        String ans="";
        ans=s.trim().replaceAll("\\s+","");
        int j=0,k=0,l=0;
        for(int i=0;i<ans.length();i++)
        {
            if(ans.charAt(i)=='+')
                j=i;
            if(ans.charAt(i)=='m')
               k=i;
            if(ans.charAt(i)=='=')
                l=i;
        }
        String a="";
        String b="";
        String c="";
        for(int i=0;i<j;i++)   
            a+=ans.charAt(i);
        for(int i=l+1;i<ans.length();i++)
            c+=ans.charAt(i);
        for(int i=j+1;i<l;i++)
            b+=ans.charAt(i);
        int one,two;
        if(j<k&&k<l)
        {
            one=Integer.parseInt(a);
            two=Integer.parseInt(c);
            b=String.valueOf(two-one);
        }
        else if(j<l&&j<k)
        {
            
            one=Integer.parseInt(a);
            two=Integer.parseInt(b);
            c=String.valueOf(one+two);
        }
        else
        {
            one=Integer.parseInt(b);
            two=Integer.parseInt(c);
            a=String.valueOf(two-one);
        }
        ans="";
        ans=a+' '+'+'+' '+b+' '+'='+' '+c;
        return ans;
    }
    public static void main(String[] args) throws IOException 
    {
        String s;
        int t=Integer.parseInt(din.readLine());
        for(int i=0;i<=t;i++)  
          {
              din.readLine();
              s=din.readLine();
              System.out.println(solution(s));
          }
    }
}
