typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern int fn_82F63108();
extern unsigned int lbl_821B3020;
extern unsigned int uStack_41;


undefined4 fn_8236C890(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined ***pppuVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 auStack_50 [3];
  undefined1 uStack_41;
  undefined **ppuStack_40;
  undefined4 *puStack_3c;
  undefined ***pppuStack_30;
  
  piVar5 = *(int **)(param_1 + 0x20);
  piVar1 = *(int **)(param_1 + 0x24);
  puStack_3c = auStack_50;
  auStack_50[0] = 0;
  pppuVar3 = &ppuStack_40;
  ppuStack_40 = &lbl_821B3020;
  pppuStack_30 = pppuVar3;
  if (piVar5 < piVar1) {
    do {
      piVar2 = (int *)((undefined4 *)*piVar5)[1];
      for (piVar6 = *(int **)*piVar5; piVar6 < piVar2; piVar6 = piVar6 + 1) {
        if (*piVar6 != 0) {
          if (pppuVar3 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          (*(code *)(*pppuVar3)[1])();
          pppuVar3 = pppuStack_30;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 < piVar1);
    if (pppuVar3 == (undefined ***)0x0) {
      return auStack_50[0];
    }
  }
  iVar4 = (int)&ppuStack_40 + -(int)pppuVar3;
  (*(code *)(*pppuVar3)[3])
            (pppuVar3,iVar4 - (int)(&uStack_41 + (uint)(iVar4 == 0) + -(int)pppuVar3));
  return auStack_50[0];
}

