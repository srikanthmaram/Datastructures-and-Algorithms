import java.util.Scanner;

import java.util.*;
import java.io.*;
public class Tree1
{
    public static void main(String args[])
    {
        System.out.println("hi");
    }
}
class Node
{
    int data;
    Node right;
    Node left;
}
class Tree{
   Node root=null;
   void createTree()
   {
    System.out.println("Enter data");
    Scanner sc =new Scanner(System.in);
    int data=sc.nextInt();


    root.left=root.createTree();


   }
}