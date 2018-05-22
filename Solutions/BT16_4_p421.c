boolean checkForCycle(locks[] locks ) {
  touchedNode s = hash table(lock > boolean )
  initialize touchedNodes to false for each lock in locks
  for each (lock x in process.locks ) {
    if (touchedNodes[x] = = false) {
      if (hasCycle(x , touchedNodes) ) { return true; }
    }
  }
  return false;
}
boolean hasCycle(node x, touchedNodes) {
  touchedNodes[r] = true;
  if (x.state == VISITING) {
    return true;
  } else if (x.state == FRESH) {
    ... (see full code below)
  }
}
