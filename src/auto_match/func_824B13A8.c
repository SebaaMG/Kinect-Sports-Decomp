/* Reset the 0x20-byte slot ring: advance the cursor once per active slot,
   wrapping back to the start when it reaches the end, then clear the
   active count and the active flag. */
int fn_824B13A8(int param_1)
{
    int *state = *(int *)(param_1 + 0x3c);
    int count = 0;
    int *ring = state + 1;

    while (count < ring[4]) {
        count = count + 1;
        ring[2] = ring[2] + 0x20;
        if (ring[2] == ring[1]) {
            ring[2] = ring[0];
        }
    }
    ring[4] = 0;
    *(char *)(state + 7) = 0;
    return 0;
}
