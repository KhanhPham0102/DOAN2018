 public class LockedATM {
	private Lock lock;
	private int balance = 100;
	public LockedATM() {
		lock = new ReentrantLock();
	}
	public int withdraw(int value) {
		lock.lock();
		int temp = balance;
		try {
			Thread.sleep(100);
			temp = temp - value;
			Thread.sleep(108);
			balanc e = temp;
		} catch (interruptedException e) { }
		lock.unlock();
		return temp;
	}
  public int deposit(int value) {
	   lock.lock();
	   int temp = balance;
	   try {
	      Thread.sleep(100);
	      temp = temp + value;
	      Thread.sleep(300);
	      balance = temp;
	   } catch (InterruptedException e) { }
	   lock.unlock();
     return temp;
	}
}
