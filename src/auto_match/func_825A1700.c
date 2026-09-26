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
extern int fn_825A1AE0();


void fn_825A1700(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  
  fn_825A1AE0();
  piVar4 = (int *)(*param_1 + 0x98);
  if ((piVar4 != (int *)0x0) &&
     (uVar1 = *(uint *)(*param_1 + 0x9c), uVar2 = (ulonglong)uVar1, 0 < (int)uVar1)) {
    iVar5 = 0;
    do {
      puVar3 = (uint *)(*piVar4 + iVar5);
      if (puVar3[7] == 0) {
        fn_825A1700((ulonglong)*puVar3 + 0x11c,param_2,param_3);
      }
      uVar2 = uVar2 - 1;
      iVar5 = iVar5 + 0x1a0;
    } while (uVar2 != 0);
  }
  return;
}

