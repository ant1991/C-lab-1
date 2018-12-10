const char* greet(int hour, int min)
  {
     if(hour>=00 && hour<06 && min>=00 && min<=59)
         return "Good night!";
     else if(hour>=06 && hour<11 && min>=00 && min<=59)
         return "Good morning!";
     else if(hour>=11 && hour<18 && min>=00 && min<=59)
         return "Good day!";
     else if(hour>=18 && hour<=23 && min>=00 && min<=59)
         return "Good evening!";
     else
         return "Uncorrect time!";
  }
