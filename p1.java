class Main
{
    public static void main(String[] args)
    {
        int[]a=new int[4];//length of array is determined
        a[0]=2;
        a[1]=7;
        a[2]=11;
        a[3]=15;
        int s=9;//no we need as a sum
        int c=0;//variable to store sum of no's
        int f=0;//flag variable to check if no number is found
        for(int i=0;i<3;i++)
        {
            for(int j=i;j<4;j++)
            {
                c=a[i]+a[j];
                if(c==s)
                {
                    System.out.println("Sum was found");
                    System.out.println("Index of "+a[i]+" is "+i);
                    System.out.println("Index of "+a[j]+" is "+j);
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            System.out.println("Sum was not found");
        }
    }
} 