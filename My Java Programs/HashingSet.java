import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;
public class HashingSet
{
    public static void main(String[] args)
    {
        HashSet<Integer> set = new HashSet<>();
        for(int i=1; i<=10; i++)
        {
            set.add(i);
        }
        System.out.println(set);
        System.out.println("Set Size: "+set.size());
        for(int i=5; i<=15; i++)
        {
            set.add(i);
        }
        System.out.println(set);
        set.remove(12);
        set.remove(13);
        System.out.println("Set Size: "+set.size());
        if(set.contains(1))
            System.out.println("Set contains 1");
        else
            System.out.println("Set does not contain 1");

        if(set.contains(12))
            System.out.println("Set contains 12");
        else
            System.out.println("Set does not contain 12");

        Iterator it = set.iterator();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }
        System.out.println(it.hasNext());
    }
}