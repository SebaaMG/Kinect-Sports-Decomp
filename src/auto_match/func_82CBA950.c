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


void fn_82CBA950(int param_1,int param_2,int param_3,int param_4,short *param_5,uint param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = param_2 * 3;
  iVar7 = param_2 * 2;
  param_1 = param_1 - param_2;
  lVar6 = 8;
  do {
    iVar5 = 0;
    lVar8 = 2;
    do {
      iVar2 = param_1 + iVar5;
      iVar2 = (int)((uint)*(byte *)(iVar7 + iVar2) * (int)param_5[2] +
                    (uint)*(byte *)(iVar1 + iVar2) * (int)param_5[3] +
                    (uint)*(byte *)(iVar2 + param_2) * (int)param_5[1] +
                    (int)*param_5 * (uint)*(byte *)(param_1 + iVar5) + param_7) >> (param_6 & 0x3f);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      iVar4 = param_1 + iVar5 + 1;
      *(char *)(param_3 + iVar5) = (char)iVar2;
      iVar2 = (int)((uint)*(byte *)(iVar7 + iVar4) * (int)param_5[2] +
                    (uint)*(byte *)(iVar1 + iVar4) * (int)param_5[3] +
                    (uint)*(byte *)(iVar4 + param_2) * (int)param_5[1] +
                    (int)*param_5 * (uint)*(byte *)(param_1 + iVar5 + 1) + param_7) >>
              (param_6 & 0x3f);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      pbVar3 = (byte *)(param_1 + iVar5 + 2);
      *(char *)(param_3 + iVar5 + 1) = (char)iVar2;
      iVar2 = (int)((uint)pbVar3[iVar7] * (int)param_5[2] + (uint)pbVar3[iVar1] * (int)param_5[3] +
                    (uint)pbVar3[param_2] * (int)param_5[1] + (int)*param_5 * (uint)*pbVar3 +
                   param_7) >> (param_6 & 0x3f);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      iVar4 = param_1 + 3 + iVar5;
      *(char *)(param_3 + iVar5 + 2) = (char)iVar2;
      iVar2 = (int)((uint)*(byte *)(iVar7 + iVar4) * (int)param_5[2] +
                    (uint)*(byte *)(iVar1 + iVar4) * (int)param_5[3] +
                    (uint)*(byte *)(iVar4 + param_2) * (int)param_5[1] +
                    (int)*param_5 * (uint)*(byte *)(param_1 + 3 + iVar5) + param_7) >>
              (param_6 & 0x3f);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(param_3 + 3 + iVar5) = (char)iVar2;
      iVar5 = iVar5 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar6 = lVar6 + -1;
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  } while (lVar6 != 0);
  return;
}

