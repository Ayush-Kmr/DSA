import java.util.*;
class search{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length of the array:");
        int x=sc.nextInt();
        int arr[]=new int[x];
        System.out.println("Enter the elements:");
        for(int i=0; i<x; i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter the number you want to search");
        int y=sc.nextInt();
        for(int i=0; i<x; i++){
            if(arr[i]==y){
                System.out.println("Yes the number is available at index"+" "+i);
                break;
            }
            else {
                continue;
            }
        }
    }
}