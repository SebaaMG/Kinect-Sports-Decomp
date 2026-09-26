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
extern int fn_825604A0();
extern int fn_82F63108();


void fn_82493210(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x5c);
  if (puVar1[0x1f] != 0) {
    iVar2 = *(int *)(*(int *)*puVar1 + 8);
    if (*(int *)(iVar2 + 0x22c) != 0) {
      fn_825604A0(iVar2 + 0x20);
      *(undefined4 *)(iVar2 + 0x22c) = 0;
    }
  }
  piVar3 = (int *)puVar1[9];
  if ((int *)puVar1[8] != piVar3) {
    piVar5 = (int *)puVar1[8] + 4;
    do {
      if ((int *)*piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(*(int *)*piVar5 + 4))();
      piVar4 = piVar5 + 2;
      piVar5 = piVar5 + 6;
    } while (piVar4 != piVar3);
  }
  return;
}

