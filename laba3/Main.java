import java.util.Arrays;
import java.util.List;
public class Main {

    public static void main(String[] args) {

        Spravochnik telephonebook1 = new Spravochnik("123-9781.256",

                "Боич А.А", " ", 2016, "Москва", "телефонов");

        Enciklopediya telephonebook2 = new Enciklopediya("659-7814.456",

                "Душко М.В", "Всё о диких животных", 2005, "Набережные Челны", 123);

        List<Book> lst = Arrays.asList(telephonebook1, telephonebook2)
    }
}
