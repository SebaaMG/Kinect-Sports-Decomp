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


int fn_82F261D8(int param_1,uint *param_2,uint *param_3,ulonglong param_4,ulonglong param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = *param_3;
  iVar2 = 0;
  if ((uVar1 & 4) == 0) {
    lVar4 = -0x12;
    lVar3 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0xfffffff) << 4;
    lVar8 = ((ulonglong)*(uint *)(param_1 + 0x2d4) & 0xfffffff) << 4;
  }
  else {
    lVar4 = -0x11;
    lVar8 = ((ulonglong)*(uint *)(param_1 + 0x2d4) & 0xfffffff) * 0x10 + 1;
    lVar3 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0xfffffff) * 0x10 + 1;
  }
  lVar6 = (longlong)((int)*param_2 >> 2) + (param_4 & 0xfffffff) * 0x10;
  lVar5 = (longlong)((int)uVar1 >> 2) + (param_5 & 0xfffffff) * 0x10;
  lVar7 = lVar4;
  if (((int)lVar6 < (int)lVar4) || (lVar7 = lVar3, (int)lVar3 < (int)lVar6)) {
    iVar2 = 1;
    lVar6 = lVar7;
  }
  if ((int)lVar5 < (int)lVar4) {
    iVar2 = 1;
    lVar5 = lVar4;
  }
  else if ((int)lVar8 < (int)lVar5) {
    iVar2 = 1;
    lVar5 = lVar8;
  }
  else if (iVar2 == 0) {
    return 0;
  }
  *param_2 = (int)((lVar6 + (param_4 & 0xfffffff) * -0x10 & 0xffffffff) << 2) + (*param_2 & 3);
  *param_3 = (int)((lVar5 + (param_5 & 0xfffffff) * -0x10 & 0xffffffff) << 2) + (uVar1 & 3);
  return iVar2;
}

