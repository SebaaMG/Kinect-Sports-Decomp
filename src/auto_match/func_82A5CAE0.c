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
extern int fn_82A40B38();
extern int fn_82A4F4E0();
extern int fn_82A5CA80();


undefined8 fn_82A5CAE0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  
  uVar4 = 0;
  piVar6 = *(int **)(param_1 + 0xd4);
  do {
    do {
      while( true ) {
        if (piVar6 == (int *)0x0) {
          return uVar4;
        }
        piVar5 = (int *)piVar6[1];
        piVar1 = (int *)*piVar6;
        piVar6 = piVar5;
        if (*piVar1 != 0) break;
        fn_82A40B38(param_1 + 8);
        uVar3 = fn_82A5CA80(param_1,piVar1);
        if ((int)uVar3 < 0) {
          uVar4 = uVar3;
        }
      }
    } while (*piVar1 != 3);
    iVar2 = piVar1[1];
    piVar5 = *(int **)(param_1 + 0xd4);
    while( true ) {
      do {
        if (piVar5 == (int *)0x0) {
          return uVar4;
        }
        piVar6 = (int *)piVar5[1];
        piVar1 = (int *)*piVar5;
        piVar5 = piVar6;
      } while ((piVar1[1] != iVar2) && (iVar2 != 0));
      fn_82A40B38(param_1 + 8);
      if (*piVar1 == 3) break;
      uVar3 = fn_82A5CA80(param_1,piVar1);
      if ((int)uVar3 < 0) {
        uVar4 = uVar3;
      }
    }
    if (piVar1[2] != 5) {
      fn_82A4F4E0(piVar1);
    }
  } while( true );
}

