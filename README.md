# SubscriptOperatorOverloading

Some out-of-the-box functionality obtained by overloading the subscript operator in C++

- ArrayIndexes.cpp
   
	- Ability to store values in Array at Negative Indexes.

		Example :
> a[-5] = 45; 	 
> a[-10] = 20;  
> 

	- Ability to fetch values from Floating Indexes.
		
		Example : 
>Suppose values stored in an array are as follows :
>a[1] = 20;
>a[2] = 20;
>       
>`cout<<a[1.5]` will print average of `a[1]` and `a[2]`.
>`cout<<a[1.8]` will give 80% of `a[1]` and 20% of `a[2]`.
