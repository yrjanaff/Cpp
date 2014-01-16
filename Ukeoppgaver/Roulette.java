
/**
 *
 * @author yrjanaff
 */
public class Roulette
{  
    public static void main(String[] args)
    {
        final long startTime = System.currentTimeMillis();
        int MAX = 10000000;
        int count = 0;
        int rnd = (int)(2.0 * Math.random());
        int seq = 1;
        int[] vals = new int[2];
        int[] seqs = new int[10];
        
        //System.out.println(rnd);
        int prevRnd;
        while (count<MAX)
        {
            count++;     
            //Count black/red
            vals[rnd]+=1;
            //Remember this rounds result
            prevRnd=rnd;
            //Roll again
            rnd = (int)(2.0 * Math.random());
            //If it's the same, sequence lenght increased
            if (rnd==prevRnd)
                seq+=1;
            else //Otherwise, the sequence was done, and this is a new one
            {
                while (seq >= seqs.length)
                {
                    int[] newArray = new int[seqs.length + 100];
                    System.arraycopy(seqs, 0, newArray, 0, seqs.length);
                    seqs = newArray;
                }
                seqs[seq]++;
               
                seq=1;
            }
        }
        final long endTime = System.currentTimeMillis();
        System.out.println("Total execution time: " + (endTime - startTime) );
        
        System.out.print("\nR E S U L T S:\n");
        System.out.println("Len.\tCount");
        for(int i = 1; i < seqs.length; i++ )
            if (seqs[i] != 0)
                System.out.println(i + "\t" + seqs[i]);
    }
}
