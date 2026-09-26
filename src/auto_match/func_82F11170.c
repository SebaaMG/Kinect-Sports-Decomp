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


void fn_82F11170(short *param_1,short *param_2,ulonglong param_3,undefined4 *param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  *param_2 = (short)param_4[10] * *param_1;
  if ((param_3 & 0xffffffff) < 2) {
    return;
  }
  lVar6 = param_3 - 1;
  iVar4 = (int)param_1 - (int)param_2;
  do {
    param_2 = param_2 + 1;
    sVar1 = *(short *)(iVar4 + (int)param_2);
    if (sVar1 == 0) {
      *param_2 = 0;
    }
    else {
      sVar5 = sVar1 * (short)uVar2;
      if (sVar1 < 0) {
        *param_2 = sVar5 - (short)uVar3;
      }
      else {
        *param_2 = sVar5 + (short)uVar3;
      }
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

