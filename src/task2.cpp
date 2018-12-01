/*
	"ночь"  - с 00:00 до 06:00
	"утро"  - с 06:00 до 11:00
	"день"  - с 11:00 до 18:00
	"вечер" - с 18:00 до 00:00
*/

const char* greet(int hour, int min)														//В соотв с ТЗ функция анализирует только часы и минуты
{
	int Time = 0;

	if ((hour > 24) || (hour < 0) || (min >= 60) || (min < 0)) return "Uncorrect time!";	//Проверка корректности ввода минут и секунд
	Time = min * 60 + hour * 60 * 60;														//Переводим время в секунды

	//Анализируем время суток и выводим соотв. приветствие
	if ((Time >= 0 * 60 * 60) && (Time < 6 * 60 * 60)) return "Good night!";
	if ((Time >= 6 * 60 * 60) && (Time < 11 * 60 * 60)) return "Good morning!";
	if ((Time >= 11 * 60 * 60) && (Time < 18 * 60 * 60)) return "Good day!";
	if ((Time >= 18 * 60 * 60) && (Time < 24 * 60 * 60)) return "Good evening!";
}