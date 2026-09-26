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
extern int fn_82F64D08();


bool fn_828BA358(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)(param_1 + 8);
  if (*(byte *)(param_1 + 8) != *param_2) {
    return false;
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_2 + 0xc) != 0)) &&
       ((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 8) && (iVar3 = fn_82F64D08(), iVar3 == 0)))
       ) {
      return true;
    }
    return false;
  }
  if (*(int *)(param_1 + 0x18) != 6) {
    do {
      bVar1 = *pbVar7;
      bVar2 = *param_2;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      param_2 = param_2 + 1;
    } while (pbVar7 != (byte *)(param_1 + 0x18));
    return (int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0;
  }
  pbVar7 = *(byte **)(param_1 + 0x14);
  if (((pbVar7 != (byte *)0x0) && (pbVar6 = *(byte **)(param_2 + 0xc), pbVar6 != (byte *)0x0)) &&
     (iVar3 = *(int *)(param_2 + 8), *(int *)(param_1 + 0x10) == iVar3)) {
    lVar4 = 0;
    if (iVar3 != 0) {
      pbVar5 = pbVar7 + iVar3;
      do {
        lVar4 = (ulonglong)*pbVar7 - (ulonglong)*pbVar6;
        if (lVar4 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != pbVar5);
    }
    if ((int)lVar4 == 0) {
      return true;
    }
  }
  return false;
}

