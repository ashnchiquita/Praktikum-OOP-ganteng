/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Box Operator */

import java.util.ArrayList;
import java.util.List;

public class BoxOperator {
    public static <T> List<T> getContents(Box<?> box, Class<T> type) {
        // Implement this function.
        // Case need to be handled: Box may contains null value, please make sure it is
        // not returned.
        List<?> contents = box.getContents();
        List<T> result = new ArrayList<>();

        for (Object o : contents) {
            if (o != null && type.isAssignableFrom(o.getClass())) {
                result.add(type.cast(o));
            }
        }

        return result;
    }

    // public static void main(String[] args) {
    // List<Object> l = new ArrayList<>();
    // l.add(21);
    // l.add(3.4f);
    // l.add(true);
    // l.add(null);
    // l.add("Test");
    // l.add('c');
    // Box<Object> b = new Box<>(l);

    // BoxOperator.getContents(b, String.class).forEach(System.out::println);
    // }
}