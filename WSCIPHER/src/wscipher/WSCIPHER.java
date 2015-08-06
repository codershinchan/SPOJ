package wscipher;
import java.io.*;
import java.util.*;
public class WSCIPHER {
    static Scanner sc=new Scanner(System.in);
    static BufferedReader din=new BufferedReader(new InputStreamReader(System.in));
    static String shift(String s,int k)
    {
        String temp=s.substring(Math.abs(s.length()-k)%s.length(), s.length());
        temp+=s.substring(0, (s.length()-k)%s.length());
        return temp;
    }
    static String ans(String s,int K1,int K2,int K3)
    {
        String g1="";
        String g2="";
        String g3="";
        String ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>='a'&&s.charAt(i)<='i')
                g1+=s.charAt(i);
            else if(s.charAt(i)>='j'&&s.charAt(i)<='r')
                g2+=s.charAt(i);
            else
                g3+=s.charAt(i);
        }
        String gg1,gg2,gg3;
        gg1=shift(g1,K1);
        gg2=shift(g2,K2);
        gg3=shift(g3,K3);
        
        int e=0,r=0,t=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>='a'&& s.charAt(i)<='i')
            {
                ans+=gg1.charAt(e);
                e++;
            }
            else if(s.charAt(i)>='j'&& s.charAt(i)<='r')
            {
                ans+=gg2.charAt(r);
                r++;
            }
            else
            {
                ans+=gg3.charAt(t);
                t++;
            }
        }
        return ans;
    }
    public static void main(String[] args)throws IOException {
        int k1,k2,k3;
        k1=sc.nextInt();
        k2=sc.nextInt();
        k3=sc.nextInt();
        while(k1!=0&&k2!=0&&k3!=0&&(k1+k2+k3)!=0)
        {
            String s;
            s=din.readLine();
            System.out.println(ans(s,k1,k2,k3));
            k1=sc.nextInt();
            k2=sc.nextInt();
            k3=sc.nextInt();
        }

    }
    
}
