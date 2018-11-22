float idealWeight(char gender, float height) // ф-ция для определения идеального веса
{
	switch (gender)
	{
	case 'm':
		return height - 100;
		break;
	case 'w':
		return height - 110;
		break;
	default:
		//printf("Enter the information about a gender correctly");
		return -2;
		break;
	}
}

int getRecommendation(char gender, float height, float weight)
{
	float ideal_weight = idealWeight(gender, height);  // идеальный вес
	
	if (ideal_weight == -2)
		return -2;
	
	float difference_in_weight = weight - ideal_weight; // разница в весе между идеальным и реальным
	if (difference_in_weight < 0)
		return -1;
	else if (difference_in_weight > 0)
		return 1;
	else
		return 0;
}




/*
-------------------old version---------------------------------

int getRecomendation(char gender, float height, float weight)
{
float ideal_weight = 0;  // идеальный вес

switch (gender)
{
case 'm':
ideal_weight = height - 100;
break;
case 'w':
ideal_weight = height - 110;
break;
default:
printf("Enter the information about a gender correctly");
break;
}

float difference_in_weight = weight - ideal_weight; // разница в весе между идеальным и реальным
if (difference_in_weight < 0)
return -1;
else if (difference_in_weight > 0)
return 1;
else
return 0;
}
*/