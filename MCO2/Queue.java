public class Queue {

    public Queue(int s)
    {
        arr = new int[s];
        maxSize = s;
        head = 0;
        tail = 0;
    }
    public boolean isEmpty()
    {
        return (head == tail);

    }
    public boolean isFull()
    {
        return head == (tail+1)% (maxSize -1);
    }
    public void enqueue(int n)
    {
        if(isFull())
        {
            System.out.println("Overflow Error!");
            return;
        }
        arr[tail] = n;
        if(tail == maxSize -1)
        {
            tail = 0;
            return;
        }
        tail++;
    }
    public void printHead()
    {
        System.out.println("Head: " + arr[head] + "@ index" + head);
    }
    public void printTail()
    {
        System.out.println("Tail: " + arr[tail] + "@ index" + tail);
    }
    public void dequeue()
    {
        if(isEmpty())
        {
            System.out.println("Underflow Error!");
            return;  
        }
        System.out.print("Removed ");
        printHead();
        if(head == maxSize -1)
        {
            head = 0;
            return;
        }
        head++;
    }
    

    private int[] arr;
    private int maxSize, head, tail;

}