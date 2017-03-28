How to compile the program for question A:
	make lab3_A
How to compile the program for question B:
	make lab3_B
-
The discussion of question B:
	the data recorded in the B_record.out are n = 1000, n = 10000, and n = 100000. The process will carry out for 1000*1000, 10000*10000, 100000*100000 at least respectively.

	(1) Insertion sort : belong to O(n^2)
		n = 1000  , insertion_sort(): 0.020977 seconds
		n = 10000 , insertion_sort(): 1.23384 seconds
		n = 100000, insertion_sort(): 119.397 seconds 
	(2) Sort in the algorithm header file : belong to O(nlogn)
		n = 1000  , sort(): 0.000542 seconds
		n = 10000 , sort(): 0.006992 seconds
		n = 100000, sort(): 0.049793 seconds 

	It is obvious that Sort in the algorithm header file is more effective than Insertion sort, and considered about the CPU clock timing unit that generates, we can compute a approximate ratio that the two different sort process takes.
	Suppose that the clock rate of a computer is 1 G 
	when n = 1000:
		Insertion_sort(): (1000 * 1000) / 10^9 / 10^3 = 10^(-6)
		Sort(): (1000 * log1000) / 10^9 / 10^3 = 10^(-8)
		10^(-6) / 10^(-8) = 100 (times)
        when n = 10000:
                Insertion_sort(): (10000 * 10000) / 10^9 / 10^3 = 10^(-4)
                Sort(): (10000 * log10000) / 10^9 / 10^3 = 10^(-7)
		10^(-4) / 10^(-7) = 1000 (times)
        when n = 100000:
                Insertion_sort(): (100000 * 100000) / 10^9 / 10^3 = 10^(-2)
                Sort(): (100000 * log100000) / 10^9 / 10^3 = 10^(-6)
		10^(-2) / 10^(-6) = 10000 (times)		
