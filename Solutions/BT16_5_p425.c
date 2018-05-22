public class FooBad {
  public int pauseTime = 1000;
  public ReentrantLock lock1,lock2,lock3;
  public FooBad() {
    try {
      lock1 = new ReentrantLock();
      lock2 = new ReentrantLock();
      lock3 = new ReentrantLock();
      lock1.lock();
      lock2.lock();
      lock3.lock();
    } catch(...) { ... }
  }
  public void first() {
    try {
      lock1.unlock(); // mark finished with firstQ
    } catch(...) { ... }
  }
  public void second( ) {
    try {
      lock1.lock() ; // wait until finished with first()
      lock1.unlock();
      lock2.unlock(); // mark finished with second()
    } catch(...) { ... }
  }
  public void third() {
    try {
      lock2.lock(); // wait unti l finished with third()
      lock2.unlock();
    } catch(...) { ... }
  }
} 
