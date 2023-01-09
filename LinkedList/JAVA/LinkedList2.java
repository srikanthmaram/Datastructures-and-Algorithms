public class LinkedList2 {
    public static void main(String args[])
    {

        LinkedList ll=new LinkedList();
        ll.add(8);
        ll.add(9);
        ll.add(2);
        ll.add(3);
        ll.add(12);
        ll.add(22);
        ll.add(23);
        LinkedList ll2=new LinkedList();
        ll2.head=ll.reverse();
        ll.display();
        System.out.println("Reverse LinkedList");
        ll2.display();
        

    }
}
class node {
    int data;
    node link;
    node(int data)
    {
        this.data=data;
        this.link=null;
    }
}
class LinkedList{
    node head;
    void add(int data)
    {
       node newNode=new node(data);
       if(head==null){
       head=newNode;
       return;}
       node temp=head;
       while(temp.link!=null)
       {
           temp=temp.link;
       }
       temp.link=newNode;
    }
    int size()
    {
        int count=0;
        while(head!=null)
        {
            count++;
            head=head.link;
        }
        return count;
    }
     node reverse()
    {
     node prev=null;
     System.out.println("head is :"+head);
     node curr=head;
     while(curr.link!=null)
     {
         node temp=curr.link;
         curr.link=prev;
         prev=curr;
         curr=temp;
     }
     curr.link=prev;
     System.out.println("head is :"+head);
     System.out.println(curr);
     return curr;
       
    }
    void deleteAt(int pos)
    {
        node pre=head;
        node curr=head;
        for(int i=0;i<pos-1;i++)
        {
            pre=curr;
            curr=curr.link;
        }
        pre.link=curr.link;
        curr=null;
      
    }

    void display()
    {
     while(head!=null)
     {
         System.out.println(head.data);
         head=head.link;
     }
    }
}
