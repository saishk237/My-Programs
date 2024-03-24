import java.util.*;

//class name as per Problem statement
class Battleship
{
    String teamName;
    int SectorX;
    int SectorY;

    Battleship(String teamN, int secX, int secY)
    {
        teamName = teamN;
        SectorX = secX;
        SectorY = secY;
    } 
}

public class BattleshipBoard
{
    public static void main(String args[])
    {
        ArrayList<Battleship> bShip = new ArrayList<>();
        bShip.add(new Battleship("A", 3, 5));
        bShip.add(new Battleship("Z", 7, 1));
        bShip.add(new Battleship("Z", 4, 4));
        bShip.add(new Battleship("A", 2, 6));

        char[][] map = createMap(bShip);
        displayMap(map);
    }

    // Function to create Map according to given condition
    public static char[][] createMap(ArrayList<Battleship> bShip)
    {
        int high_X = 0;
        int high_Y = 0;

        for(Battleship temp:bShip)
        {
            high_X=Math.max(high_X, temp.SectorX);
            high_Y=Math.max(high_Y, temp.SectorY);
        }

        char[][] map = new char[high_Y][high_X];

        for (Battleship ship : bShip)
        {
            int x = ship.SectorX - 1;
            int y = ship.SectorY - 1;
            map[y][x] = ship.teamName.charAt(0);
        }

        for(Battleship ship:bShip)
        {
            int x,y;
            x=ship.SectorX-1;
            y=ship.SectorY-1;
            for(int i=-1; i<=1; i++)
            {
                for(int j=-1; j<=1; j++)
                {
                    if(x+i>=0 && x+i<high_X && y+j>=0 && y+j<high_Y)
                    {
                        if(map[y+j][x+i]!=ship.teamName.charAt(0))
                        {
                            map[y+j][x+i]=Character.toLowerCase(map[y+j][x+i]);
                        }
                    }
                }
            }
        }
        return map;
    }

    // Function to print Map as said
    public static void displayMap(char[][] map)
    {
        int high_X = map[0].length;
        int high_Y = map.length;

        //Print Y axis(outer loop)
        for(int i=0; i<high_Y; i++)
        {
            System.out.print(i+1+"  ");

            //Print Positions (inner loop)
            for(int j=0; j<high_X; j++)
            {
                System.out.print(map[i][j]+"  ");
            }
            System.out.println("");
        }

        //Print X axis
        for(int i=1; i<=high_X; i++)
        {
            System.out.print(i+"  ");
        }
        System.out.println("");
    }
} //end of class 