

// az is probléma az (a) esetben, hogy több azonos nevű változó kilátszódhat
// különböző object file-okból
// ezeket nem lehet összelinkelni, mert a linkelés során minden szimbólumnak
// egyedinek kell lennie
int count = 10;

void foo()
{
    --count;
}

