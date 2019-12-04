public abstract class Book {
    private String cipher;
    private String autor;
    private String name;
    private int year;
    private String izdatelstvo;

    public Book (String cipher, String autor, String name, int year, String izdatelstvo){
        this. cipher=cipher;
        this.autor=autor;
        this.name=name;
        this.year=year;
        this.izdatelstvo=izdatelstvo;
    }

    public String getcipher() {
        return cipher;
    }

    public String getautor() {
        return autor;
    }

    public String getname() {
        return name;
    }

    public int getyear() {
        return year;
    }
    public String getizdatelstvo() {
        return izdatelstvo;
    }
}



