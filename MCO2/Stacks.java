public class Stacks {

    private int MAX, top;
    private int[] arr;

    public Stacks(int size)
    {
        MAX = size;
        arr = new int[size];
        top = 0;
    }

    public void push(int n)
    {
        if(isFull())
        {
            System.out.println("Overflow Error!");
            return;
        }
        arr[top] = n;

    }
    public int pop()
    {
        int t;
        if(isEmpty())
        {
            System.out.println("Underflow Error!");
            return 0;  
        }
        t = arr[top-1];
        top = top - 2;
        return t;
    }

    public boolean isEmpty()
    {
        return arr.length == 0;
    }

    public boolean isFull()
    {
        return arr.length == MAX - 1;
    }

    public void printTop()
    {
        System.out.println("Top: " + arr[top-1]);
    }
}