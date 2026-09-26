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


void fn_82F117F0(int param_1,short *param_2,short *param_3,ulonglong param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0x6d24) + param_5 * 0x34);
  uVar2 = *puVar7;
  uVar3 = puVar7[1];
  *param_3 = (short)puVar7[10] * *param_2;
  if ((param_4 & 0xffffffff) < 2) {
    return;
  }
  lVar6 = param_4 - 1;
  iVar4 = (int)param_2 - (int)param_3;
  do {
    param_3 = param_3 + 1;
    sVar1 = *(short *)(iVar4 + (int)param_3);
    if (sVar1 == 0) {
      *param_3 = 0;
    }
    else {
      sVar5 = sVar1 * (short)uVar2;
      if (sVar1 < 0) {
        *param_3 = sVar5 - (short)uVar3;
      }
      else {
        *param_3 = sVar5 + (short)uVar3;
      }
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

