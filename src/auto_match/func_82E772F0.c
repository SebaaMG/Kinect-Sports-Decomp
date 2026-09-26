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
extern int fn_82E50BE8();


int * fn_82E772F0(int *param_1,ushort param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(ushort *)(param_1 + 1) = param_2;
  *param_1 = 0;
  uVar3 = 0;
  iVar1 = fn_82E50BE8((ulonglong)param_2 * 0x1a,0,0,0,0);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 1) = 0;
    uVar3 = 0x8007000e;
  }
  if (*(short *)(param_1 + 1) != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x1a + *param_1;
      uVar2 = uVar2 + 1 & 0xffff;
      *(undefined4 *)(iVar1 + 0x12) = 0;
      *(undefined4 *)(iVar1 + 0x16) = 0;
    } while (uVar2 < *(ushort *)(param_1 + 1));
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
  return param_1;
}

