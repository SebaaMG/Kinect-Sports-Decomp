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
extern int fn_83026548();


void fn_8301BA90(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0xc);
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 == (int *)0x0) {
      return;
    }
    (**(code **)(*(int *)piVar1[0x3f] + 0x24))();
    piVar5 = piVar1 + 0x40;
    lVar4 = 4;
    do {
      if (*piVar5 != 0) {
        fn_83026548();
      }
      lVar4 = lVar4 + -1;
      piVar5 = piVar5 + 1;
    } while (lVar4 != 0);
    (**(code **)(*piVar1 + 8))(piVar1);
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 2);
  return;
}

