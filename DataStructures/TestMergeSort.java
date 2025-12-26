package p1;

import java.util.Scanner;

public class TestMergeSort {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		int[] arr=new int[4];
		System.out.println("Enter elements of the array");
		for(int i=0;i<arr.length;i++) {
			arr[i]=sc.nextInt();
		}
		
//		int start=0;
//		int end=arr.length-1;
		
		
		merge(arr,0,arr.length-1);

		System.out.println("Sorted array:"); 
		for (int num : arr) { 
			System.out.print(num + " "); 
		}
	}
	static void merge(int[] arr,int start,int end) {
		if(start!=end) {
			int mid=(start+end)/2;
			merge(arr,start,mid);
			merge(arr,mid+1,end);
			combine(arr,start,mid,end);
			
		}
	}

	static void combine(int[] arr,int start,int mid,int end) {
		int i=start;
		int j=mid+1;
		int k=0;
		int[] new_arr=new int[end-start+1];
		
		while(i<=mid&&j<=end) {
			if(arr[i]<=arr[j]) {
				new_arr[k++]=arr[i++];
//				k++;
//				i++;
			
			}
			else{
				new_arr[k++]=arr[j++];
//				j++;
//				k++;
			}
		}
		
		while(i<=mid) {
			new_arr[k++]=arr[i++];
//			k++;
//			i++;
		
		}
		
		while(j<=end) {
			new_arr[k++]=arr[j++];
//			j++;
//			k++;
			
		}
		int y=start;
		for(int x=0;x<new_arr.length;x++) {
			arr[y]=new_arr[x];
			y++;
		}
	}

}

