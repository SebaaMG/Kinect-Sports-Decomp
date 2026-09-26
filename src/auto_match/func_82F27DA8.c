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


void fn_82F27DA8(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 1;
  lVar7 = 8;
  do {
    sVar1 = param_1[-1];
    sVar2 = *param_1;
    sVar3 = param_1[1];
    sVar4 = param_1[-2];
    iVar5 = (sVar3 * 8 - (int)sVar3) - uVar6;
    param_1[-2] = (short)((int)((sVar4 * 8 - (int)sVar4) + (int)sVar3 + uVar6 + 3) >> 3);
    param_1[-1] = (short)((int)((((sVar1 * 8 - (int)sVar1) - (int)sVar4) - uVar6) + (int)sVar2 +
                                (int)sVar3 + 4) >> 3);
    *param_1 = (short)((int)(((sVar2 * 8 - (int)sVar2) - (int)sVar3) + (int)sVar1 + (int)sVar4 +
                             uVar6 + 3) >> 3);
    uVar6 = uVar6 ^ 1;
    param_1[1] = (short)(iVar5 + sVar4 + 4 >> 3);
    param_1 = param_1 + param_2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

