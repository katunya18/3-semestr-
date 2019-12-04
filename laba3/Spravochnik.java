public class Spravochnik extends Book {
    private String typBook = "Справочик";

     public Spravochnik(String cipher, String autor, String name, int year, String izdatelstvo) {
        super(cipher, autor, name, year, izdatelstvo);
    }
    @Override
    public String toString() {
        return typBook + '\n' +
                getcipher() + '\n' +
                getautor()+ '\n' +
                getname()+ '\n' +
                getyear()+ '\n' +
                getizdatelstvo();
    }
}