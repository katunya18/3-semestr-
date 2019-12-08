package sample;

import javafx.beans.property.*;

public class Phone {
    private IntegerProperty nomer;
    private StringProperty name1;
    private StringProperty name2;
    private StringProperty data;
    private StringProperty vremya;
    private IntegerProperty dlit;

    public Phone(Integer nomer, String name1, String name2, String data, String vremya,Integer dlit) {
        this.nomer = new SimpleIntegerProperty(nomer);
        this.name1 = new SimpleStringProperty(name1);
        this.name2 = new SimpleStringProperty(name2);
        this.data = new SimpleStringProperty(data);
        this.vremya = new SimpleStringProperty(vremya);
        this.dlit = new SimpleIntegerProperty(dlit);
    }

    public int getNomer() {
        return nomer.get();
    }

    public IntegerProperty nomerProperty() {
        return nomer;
    }

    public void setNomer(int nomer) {
        this.nomer.set(nomer);
    }

    public String getName1() {
        return name1.get();
    }

    public StringProperty name1Property() {
        return name1;
    }

    public void setName1(String name1) {
        this.name1.set(name1);
    }

    public String getName2() {
        return name2.get();
    }

    public StringProperty name2Property() {
        return name2;
    }

    public void setName2(String name2) {
        this.name2.set(name2);
    }

    public String getData() {
        return data.get();
    }

    public StringProperty dataProperty() {
        return data;
    }

    public void setData(String data) {
        this.data.set(data);
    }

    public String getVremya() {
        return vremya.get();
    }

    public StringProperty vremyaProperty() {
        return vremya;
    }

    public void setVremya(String vremya) {
        this.vremya.set(vremya);
    }

    public int getDlit() {
        return dlit.get();
    }

    public IntegerProperty dlitProperty() {
        return dlit;
    }

    public void setDlit(int dlit) {
        this.dlit.set(dlit);
    }
}
