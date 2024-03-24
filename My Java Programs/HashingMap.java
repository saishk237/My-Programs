import java.util.*;
public class HashingMap
{
    public static void main(String args[])
    {
        int arr []={1,2};
        int n=arr.length;
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int val : arr)
        {
            if(map.containsKey(val))
            {
                map.put(val, map.get(val)+1);
            }
            else
            {
                map.put(val,1);
            }
        }
        for(int key : map.keySet())
        {
            if(map.get(key)>n/3)
                System.out.print(key+ " ");
        }
    }
    
}
