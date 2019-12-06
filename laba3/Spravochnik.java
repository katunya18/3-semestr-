public class Spravochnik extends Book {
    private String type;

     public Spravochnik(String cipher, String autor, String name, int year, String izdatelstvo, String type) {
        super(cipher, autor, name, year, izdatelstvo);
        this.type=type;
    }
        @Override
    public void Information() {
        System.out.println("Справочник " + type + " автора "  + getautor()+ " выпущен " + getyear()+" "+getname()+" "+getcipher()+" "+getizdatelstvo());
     }

}
