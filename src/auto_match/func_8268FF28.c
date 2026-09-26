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
extern int fn_8268F3D8();
extern int fn_8268F848();


undefined8 fn_8268FF28(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = fn_8268F848();
  iVar3 = (int)uVar4 * 0xc + param_1;
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4));
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  param_3 = param_3 >> (uVar2 & 0x3f);
  fn_8268F3D8(((ulonglong)*(uint *)(iVar3 + 0x1c) -
                (((ulonglong)((uVar1 * 8 + *(uint *)(iVar3 + 0x20)) - 1 >> (uVar2 + 3 & 0x3f)) +
                 (ulonglong)uVar1) - 1 & ~((ulonglong)uVar1 - 1))) +
                (ulonglong)*(uint *)(iVar3 + 0x20),
                (int)(param_2 - *(uint *)(iVar3 + 0x1c)) >> (uVar2 & 0x3f),param_3);
  *(uint *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) - param_3;
  *(uint *)(param_1 + 0x18) =
       *(int *)(param_1 + 0x18) - (param_3 << (*(uint *)(param_1 + 0xc) & 0x3f));
  return uVar4;
}

