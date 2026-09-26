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
extern int fn_82766690();


void fn_82766718(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  uint *puVar7;
  
  if (param_1[6] != 0) {
    bVar1 = *(byte *)(*(int *)*param_1 + param_1[1]);
    uVar2 = (int)(char)bVar1 >> 1;
    if ((bVar1 & 1) == 0) {
      iVar4 = 1;
      param_1[4] = uVar2;
    }
    else {
      iVar4 = 2;
      param_1[4] = (int)(char)((byte *)(*(int *)*param_1 + param_1[1]))[1] << 7 | uVar2 & 0x7f;
    }
    iVar3 = param_1[1];
    param_1[1] = iVar3 + iVar4;
    pbVar5 = (byte *)(*(int *)*param_1 + iVar3 + iVar4);
    bVar1 = *pbVar5;
    uVar2 = (int)(char)bVar1 >> 1;
    if ((bVar1 & 1) == 0) {
      lVar6 = 1;
      param_1[5] = uVar2;
    }
    else {
      lVar6 = 2;
      param_1[5] = (int)(char)pbVar5[1] << 7 | uVar2 & 0x7f;
    }
    uVar2 = param_1[1];
    puVar7 = param_1 + 7;
    param_1[1] = (int)((ulonglong)uVar2 + lVar6);
    iVar3 = fn_82766690(param_1,(ulonglong)uVar2 + lVar6,puVar7);
    iVar4 = param_1[1];
    *(undefined1 *)(param_1 + 9) = 1;
    param_1[1] = iVar3 + iVar4;
    param_1[8] = iVar3 + iVar4;
    if ((param_1[7] & 1) != 0) {
      uVar2 = (uint)param_1[7] >> 1;
      param_1[8] = uVar2;
      iVar4 = fn_82766690(param_1,uVar2,puVar7);
      *(undefined1 *)(param_1 + 9) = 0;
      param_1[8] = iVar4 + param_1[8];
    }
    *puVar7 = *puVar7 >> 1;
  }
  return;
}

