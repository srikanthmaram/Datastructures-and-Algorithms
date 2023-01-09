public class LinkedList1
{
    public static void main(String args[])
    {
        System.out.println("Hai welcome back");
        LinkedList ll=new LinkedList();
        ll.add(8);
        ll.add(9);
        ll.add(2);
        ll.add(3);
        ll.add(12);
        ll.add(22);
        ll.delete();
        ll.addAt(10, 50);
        ll.display();
       
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
    void display()
    {
     while(head!=null)
     {
         System.out.println(head.data);
         head=head.link;
     }
    }
    void addFirst(int data)
    {
        node newNode=new node(data);
        if(head==null)
        {head=newNode;return;}
        newNode.link=head;
        head=newNode;
        
    }
    void addAt(int pos,int data)
    {
        node newNode=new node(data);
       node temp=head;
       for(int i=0;i<pos-1;i++)
       {
           if(temp==null)
           {
               System.out.print("please enter valid position");
               return;
           }
           temp=temp.link;
       }
       newNode.link=temp.link;
       temp.link=newNode;

    }
  void delete()
  {
     if(head==null)
     {
         System.out.println("List is empty");
         return;
     }
     if(head.link==null)
     {
         head=null;
     }
     node lastNode=head;
     node secondLastNode=head;
     while(lastNode.link!=null)
     {
         secondLastNode=lastNode;
         lastNode=lastNode.link;
     }
     secondLastNode.link=null;
     lastNode=null;
  }
}