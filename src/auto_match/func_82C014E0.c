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
extern int fn_823AA370();
extern int fn_8263CBB0();
extern int fn_828D45F8();


undefined8 fn_82C014E0(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar3 = fn_828D45F8(param_2);
  if ((*(int *)(param_1 + 0x7c) == iVar3) &&
     (iVar3 = fn_823AA370(param_2), *(int *)(param_1 + 0x80) == iVar3)) {
    return 0;
  }
  uVar4 = fn_828D45F8(param_2);
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  uVar5 = fn_823AA370(param_2);
  uVar1 = *(uint *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x164) = uVar5;
  uVar2 = uVar1 >> 1;
  *(uint *)(param_1 + 0x80) = uVar5;
  *(uint *)(param_1 + 0x168) = uVar5 >> 1;
  *(uint *)(param_1 + 0x150) = uVar2;
  *(uint *)(param_1 + 0x158) = uVar1;
  *(uint *)(param_1 + 0x14c) = uVar1;
  *(uint *)(param_1 + 0x154) = uVar2;
  *(uint *)(param_1 + 0x15c) = uVar2;
  *(uint *)(param_1 + 0x160) = uVar2;
  *(uint *)(param_1 + 0x16c) = uVar5 >> 1;
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(undefined4 *)(param_1 + 0x38),0,0,0x80000000);
}

