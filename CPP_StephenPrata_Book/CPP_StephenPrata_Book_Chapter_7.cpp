//Chapter review #2

	void igor(); // or void igor(void);

	float tofu(int); //or float tofu(int n)

	double mpg(double a, double b); 

	long summation(long arr[], int size);

	double doctor(const char *str);

	void ofcourse(boss struct_1);

	char *plot(map *pmap);


//Chapter review #3

	void set_arr(int arr[], int size, int value)
	{
		for (int i = 0; i < size; i++)
			arr[i] = value;
	}

//Chapter review #4

	void  set_arr_range(int *start, int *end, int value)
	{
		for (int * pointer = start; pointer != end; pointer++)
			pointer* = value;

	}

//Chapter review #5

	double arr_bigger(const double arr[], int size)
	{
		double is_bigger = arr[0];

		for (int i = 1; i < size; i++)
			if(arr[i] > is_bigger)
				 is_bigger = arr[i];
		
		return is_bigger;
	}

//Chapter review #8

	int replace(char* str, char c1, char c2)
	{
		int count{};
		while (*str)   // пока не достигнем 0 (конца строки)
		{
			if (*str == c1)  // проверяем разыменованный указатель на соответствие значения
			{
				*str = c2;
				count++;
			}

			str++; // увеличиваем на 1 указатель без разыменования
		}

		return count;

	}


	//Chapter review #11