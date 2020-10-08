using System;
class Arrays
{



	static void Main(string[] args)
	{
		int[,] exArray = new int[3,1] {
			{1} ,
			{2} ,
			{3} 
		};
		int[,] exArray2 = new int[3,1] {
			{1} ,
			{2} ,
			{3} 
		};
		

		for(int i = 0; i<3; i++){
			for(int j  =0; j< 1; j++){
				Console.WriteLine(exArray[i,j] + exArray2[i,j]);
			}	
		}
	}
}
