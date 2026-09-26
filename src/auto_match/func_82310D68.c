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
extern int fn_823CC7A0();


void fn_82310D68(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = fn_823CC7A0();
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[2] = 0;
  iVar2 = iVar4 * 300 + iVar2;
  if (param_4 == 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x5b4);
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x5ac);
  }
  param_2[3] = uVar1;
  if (param_4 == 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x5b0);
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x5a8);
  }
  param_2[4] = uVar1;
  uVar5 = 0;
  puVar3 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  if (param_2[0x28] != 0) {
    do {
      iVar2 = param_2[0x26];
      uVar5 = uVar5 + 1;
      param_2[0x26] = iVar2 + 4;
      if (iVar2 + 4 == param_2[0x25]) {
        param_2[0x26] = param_2[0x24];
      }
    } while (uVar5 < (uint)param_2[0x28]);
  }
  param_2[0x28] = 0;
  return;
}

