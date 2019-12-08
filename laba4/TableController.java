package sample;

import javafx.beans.property.SimpleObjectProperty;
import javafx.fxml.FXML;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;

public class TableController {
    @FXML
    private TableView<Phone> table;
    @FXML
    private TableColumn<Phone, Integer> nomer;
    @FXML
    private TableColumn<Phone, String> name1;
    @FXML
    private TableColumn<Phone, String> name2;
    @FXML
    private TableColumn<Phone, String> data;
    @FXML
    private TableColumn<Phone, String> vremya;
    @FXML
    private TableColumn<Phone, Integer> dlit;

    private Main main;
    public TableController(){}

    @FXML
    private void initialize(){
        nomer.setCellValueFactory(Phone -> Phone.getValue().nomerProperty().asObject());
        name1.setCellValueFactory(Phone -> Phone.getValue().name1Property());
        name2.setCellValueFactory(Phone -> Phone.getValue().name2Property());
        data.setCellValueFactory(Phone -> Phone.getValue().dataProperty());
        vremya.setCellValueFactory(Phone -> Phone.getValue().vremyaProperty());
        dlit.setCellValueFactory(Phone -> Phone.getValue().dlitProperty().asObject());
    }
    @FXML
    private void delete(){
        table.getItems().remove(table.getSelectionModel().getSelectedItem());
    }

    public void setMain(Main main){
        this.main = main;
        table.setItems(main.getPhoneList());
    }
}
