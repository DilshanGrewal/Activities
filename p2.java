import java.util.Scanner;
public class p2
{
    public static void main(String[] args)
    {
        int b=0;                                        //flag variable to check if multiple outcomes are present
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter Length of Array");
        int g=obj.nextInt();                                         //length of array is determined
        int[]a=new int[g];                              //array is declared
        for(int z=0;z<g;z++)                            //loop to initialise array
        {
            a[z]=obj.nextInt();                                      //initialisation of array
        }
        int s=9;                                        //no we need as a sum
        int c=0;                                        //variable to store sum of nos
        int f=0;                                        //flag variable to check if no number is found
        for(int i=0;i<g-1;i++)
        {
            for(int j=i;j<g;j++)
            {
                c=a[i]+a[j];
                if(c==s)                                //checking of outcome
                {
                    if(b==0)                            //checking of multiple outcomes to display a correcr message
                    {
                        System.out.println("Sum was found");
                    }
                    else
                    {
                        System.out.println("Another Sum was found");
                    }
                    System.out.println("Index of "+a[i]+" is "+i);
                    System.out.println("Index of "+a[j]+" is "+j);
                    f=1;                                //change in flag variable coz atleast one no is found

                    b++;                                //incriment of multiple outcome to display message
                }
            }
        }
        if(f==0)
        {
            System.out.println("Sum was not found");
        }
        obj.close();
    }
} 