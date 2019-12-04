public class Main {
    public static void main(String[] args) {
    Book telephonebook1 = new Spravochnik("123-9781.256",
                      "Боич А.А", "Как прекрасно жить",2016,"Москва");
    Book telephonebook2 = new Enciklopediya("659-7814.456",
                "Душко М.В", "Всё о диких животных",2005,"Набережные Челны");
        System.out.println(telephonebook1);
        System.out.println(telephonebook2);
    }
}
