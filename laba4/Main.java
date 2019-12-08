package sample;

import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.layout.AnchorPane;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class Main extends Application {
    private ObservableList<Phone> phoneList = FXCollections.observableArrayList();
    public Main(){
        phoneList.add(new Phone(1,"Kate","Polina","05.09.2019", "22:30",41));
        phoneList.add(new Phone(2,"Polina","Kate","09.12.2019","16:12",7));
        phoneList.add(new Phone(3, "Ivan", "Victor","09.06.2018","15:03",23));
    }
    ObservableList<Phone> getPhoneList(){
        return phoneList;
    }
    @Override
    public void start(Stage primaryStage) throws Exception{
        primaryStage.setTitle("phoneBook");
        FXMLLoader load = new FXMLLoader();
        load.setLocation(Main.class.getResource("BorderPane.fxml"));
        BorderPane pane = (BorderPane) load.load();
        Scene scene = new Scene(pane);
        primaryStage.setScene(scene);
        primaryStage.show();

        FXMLLoader load2 = new FXMLLoader();
        load2.setLocation(Main.class.getResource("Table.fxml"));
        AnchorPane table = (AnchorPane) load2.load();
        pane.setCenter(table);
        TableController control = load2.getController();
        control.setMain(this);
    }


    public static void main(String[] args) {
        launch(args);
    }
}
