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
extern unsigned int lbl_821AAD20;


void fn_82E92098(int *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = lbl_821AAD20;
  if (*param_1 == 0) {
    return;
  }
  if ((ulonglong)(uint)param_1[1] <= (param_2 & 0xffffffff)) {
    return;
  }
  iVar2 = (int)((param_2 + (param_2 & 0x3fffffff) * 4 & 0x1fffffff) << 3);
  param_2 = param_2 + (param_2 & 0x3fffffff) * 4;
  puVar1 = *(undefined4 **)(iVar2 + *param_1 + 4);
  puVar1[5] = lbl_821AAD20;
  puVar1[0x206] = 0;
  *puVar1 = uVar4;
  puVar1[4] = 0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar4;
  iVar3 = (int)((param_2 & 0x1fffffff) << 3);
  *(undefined4 *)(iVar3 + *param_1 + 8) = 0;
  *(undefined4 *)(iVar3 + *param_1 + 0xc) = 0;
  *(undefined4 *)((int)((param_2 + 2 & 0xffffffff) << 3) + *param_1) = 0;
  *(undefined4 *)(iVar3 + *param_1 + 0x14) = 0;
  *(undefined4 *)((int)((param_2 + 3 & 0xffffffff) << 3) + *param_1) = 0;
  *(undefined4 *)(iVar3 + *param_1 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + *param_1 + 0x20) = 0;
  *(undefined4 *)(iVar2 + *param_1 + 0x24) = 0;
  return;
}

