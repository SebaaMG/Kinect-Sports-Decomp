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
extern unsigned int *auStack_30;
extern int fn_82649240();
extern unsigned int lbl_8326B460;


byte fn_825F1048(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint auStack_30 [12];
  
  bVar3 = 1;
  uVar1 = *(uint *)(*(int *)(param_1 + 0xbc) + 0x200);
  param_1 = (uVar1 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0) & 0x3fffffff) *
                     -4) * 0xe0 + param_1;
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar2 = fn_82649240(*(undefined4 *)(param_1 + 0x10c),param_1 + 0x100,4,0);
    *(undefined4 *)(param_1 + 0x104) = 0;
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x108) == uVar1 - 4) {
    auStack_30[0] = 1;
    auStack_30[1] = 2;
    auStack_30[2] = 4;
    bVar3 = -((ulonglong)*(uint *)(param_1 + 0x100) < (ulonglong)auStack_30[lbl_8326B460] * 3) & 1;
  }
  return bVar3;
}

