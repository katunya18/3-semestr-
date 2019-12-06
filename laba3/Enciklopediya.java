public class Enciklopediya extends Book {
        private int list;

        public Enciklopediya(String cipher, String autor, String name, int year, String izdatelstvo, int list) {
            super(cipher, autor, name, year, izdatelstvo);
            this.list=list;
        }
        @Override
        public void Show() {
            System.out.println("Энциклопедия " + getname() + " автора "  + getautor()+ " с количнсьвом страниц  " + list);
        }

    }
