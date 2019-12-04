public class Enciklopediya extends Book {
    private String typeBook = "Энциклопедия";

    public Enciklopediya(String cipher, String autor, String name, int year, String izdatelstvo) {
        super(cipher, autor, name, year, izdatelstvo);
    }
    @Override
    public String toString() {
        return typeBook + '\n' +
                getcipher() + '\n' +
                getautor()+ '\n' +
                getname()+ '\n' +
                getyear()+ '\n' +
                getizdatelstvo();
    }
}