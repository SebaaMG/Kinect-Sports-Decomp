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


undefined8
fn_82ABCF88(int param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5,
             int *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  if (param_6 != (int *)0x0) {
    if (param_4 == 0) {
      uVar2 = param_5 >> 5;
      iVar5 = (uVar2 + 4) * 4;
      uVar1 = 1 << (param_5 & 0x1f);
      uVar6 = *(uint *)(iVar5 + param_1) & ~uVar1;
      iVar3 = (uVar2 + 0xec) * 4;
      *(uint *)(iVar5 + param_1) = uVar6;
      iVar4 = (uVar2 + 0xf6) * 4;
      *(uint *)(iVar5 + param_1) = (uint)(*param_6 != 0) << (param_5 & 0x1f) | uVar6;
      *(uint *)(iVar3 + param_1) = uVar1 | *(uint *)(iVar3 + param_1);
      *(uint *)(iVar4 + param_1) = uVar1 | *(uint *)(iVar4 + param_1);
    }
    else if (param_4 == 1) {
      puVar7 = (undefined1 *)((param_5 + 0xc) * 4 + param_1);
      iVar3 = ((param_5 >> 5) + 0xf4) * 4;
      *puVar7 = (char)*param_6;
      iVar4 = ((param_5 >> 5) + 0xfe) * 4;
      uVar1 = 1 << (param_5 & 0x1f);
      puVar7[1] = (char)param_6[1];
      puVar7[2] = (char)param_6[2];
      puVar7[3] = (char)param_6[3];
      *(uint *)(iVar3 + param_1) = *(uint *)(iVar3 + param_1) | uVar1;
      *(uint *)(iVar4 + param_1) = *(uint *)(iVar4 + param_1) | uVar1;
    }
  }
  return 0;
}

