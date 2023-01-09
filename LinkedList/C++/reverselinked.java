import java.util.*;
class node{
    int data;
    node link;
    node(int d)
    {
        data=d;
        link=null;
    }
}
class LinkedList{
    node head=null;
    void add(int data)
    {
        node tempnode=new node(data);
        if(head==null)
        {
            head=tempnode;
            return;
        }
        node temp=head;
        while (temp.link!=null)
        {
            temp=temp.link;
        }
        temp.link=tempnode;

    }
    void display()
    {
      node temp=head;
      while(temp!=null)
      {
        System.out.println(temp.data);
        temp=temp.link;
      }
    }
    void reverse()
    {
        node prev=null,current,next;
        current=head;
        while(current!=null)
        {
            next=current.link;
            current.link=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
}
public class reverselinked
{
    public static void main(String[] args)
    {
        LinkedList ll=new LinkedList();
       Scanner sc=new Scanner(System.in);
       System.out.println("enter size:");
       int n=sc.nextInt();
        System.out.println("enter list:");
       for(int i=0;i<n;i++)
       {
           int x=sc.nextInt();
           ll.add(x);
       }
        ll.reverse();
         System.out.println("reverse list:");
        ll.display();

    }

}