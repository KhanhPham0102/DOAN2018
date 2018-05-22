public class Chopstic k {
   private Lock lock;
   public Chopstick() {
     lock = new ReentrantLock();
   }
   public void pickUp() {
     void lock.lock();
   }
   public void putDown() {
     lock.unlock();
   }
   public boolean pickUp() {
     return lock.tryLock();
   }
}
public class Philosopher extends Thread {
   private int bites = 10;
   private Chopstick left;
   private Chopstick right;
   public Philosopher(Chopstick left , Chopstick right) {
     this.left = left;
     this.right = right;
   }
   public void eat() {
     if (pickUp()) {
       chew();
       putDown();
     }
   }
   public void pickUp() {
     left.pickUp();
     right.pickUp();
   }
   public void chew() { }
   public void putDown() {
     left.putDown();
     right.putDown();
   }
   public void run() {
     for (int i = 0; i < bites; i++)
     {
       eat();
     }
   }
    public boolean pickup() {
      /* attempt to pick up */
      if (!left.pickUp()) {
        return false;
      }
      if (!right.pickUp()) {
        left.putDown();
        return false;
      }
      return true;
    }
}
