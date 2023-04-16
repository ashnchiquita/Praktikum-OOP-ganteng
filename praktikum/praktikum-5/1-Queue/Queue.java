/*  NIM       : 13521129
    Nama      : Chiquita Ahsanunnisa
    Tanggal   : 13 April 2023
    Deskripsi : Praktikum 5 - Queue */

import java.util.ArrayList;

public class Queue<T> {
  private ArrayList<T> data;
  private int lastElmIdx, size;
  private final static int DEFAULT_QUEUE_SIZE = 500;

//Instantiate dengan size default
  public Queue() {
    data = new ArrayList<T>();
    size = DEFAULT_QUEUE_SIZE;
    lastElmIdx = -1;
  }

//Instantiate dengan size = n
  public Queue(int n) {
    data = new ArrayList<T>();
    size = n;
    lastElmIdx = -1;
  }

//Copy queue
  public Queue(final Queue<T> q) {
    this.data = new ArrayList<T>();
    this.lastElmIdx = -1;
    this.size = q.size;
    for (T elmt : q.data) {
        this.push(elmt);
    }
  }

  public void push(T t) {
    if (!isFull()) {
        lastElmIdx++;
        data.add(t);
    }
  }

  public T pop() {
    if (!isEmpty()) {
        lastElmIdx--;
        return this.data.remove(0);
    } else {
        return null;
    }
  }

  public boolean isEmpty() {
    return lastElmIdx == -1;
  }

  public boolean isFull() {
    return lastElmIdx == size - 1;
  }
}