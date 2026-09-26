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


void fn_82CBAB88(int param_1,int param_2,int param_3,int param_4,short *param_5,uint param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 8;
  do {
    iVar3 = 0;
    lVar5 = 2;
    do {
      iVar1 = param_1 + iVar3;
      iVar1 = (int)((uint)*(byte *)(iVar1 + 1) * (int)param_5[2] +
                    (uint)*(byte *)(param_1 + iVar3) * (int)param_5[1] +
                    (uint)*(byte *)(iVar1 + 2) * (int)param_5[3] +
                    (int)*param_5 * (uint)*(byte *)(iVar1 + -1) + param_7) >> (param_6 & 0x3f);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      iVar2 = param_1 + iVar3;
      *(char *)(param_3 + iVar3) = (char)iVar1;
      iVar1 = (int)((uint)*(byte *)(iVar2 + 2) * (int)param_5[2] +
                    (uint)*(byte *)(iVar2 + 1) * (int)param_5[1] +
                    (uint)*(byte *)(iVar2 + 3) * (int)param_5[3] +
                    (int)*param_5 * (uint)*(byte *)(param_1 + iVar3) + param_7) >> (param_6 & 0x3f);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      iVar2 = param_1 + iVar3;
      *(char *)(param_3 + iVar3 + 1) = (char)iVar1;
      iVar1 = (int)((uint)*(byte *)(iVar2 + 3) * (int)param_5[2] +
                    (uint)*(byte *)(iVar2 + 2) * (int)param_5[1] +
                    (uint)*(byte *)(iVar2 + 4) * (int)param_5[3] +
                    (int)*param_5 * (uint)*(byte *)(iVar2 + 1) + param_7) >> (param_6 & 0x3f);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      iVar2 = param_1 + 2 + iVar3;
      *(char *)(param_3 + iVar3 + 2) = (char)iVar1;
      iVar1 = (int)((uint)*(byte *)(iVar2 + 2) * (int)param_5[2] +
                    (uint)*(byte *)(iVar2 + 1) * (int)param_5[1] +
                    (uint)*(byte *)(iVar2 + 3) * (int)param_5[3] +
                    (int)*param_5 * (uint)*(byte *)(param_1 + 2 + iVar3) + param_7) >>
              (param_6 & 0x3f);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      *(char *)(param_3 + 3 + iVar3) = (char)iVar1;
      iVar3 = iVar3 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar4 = lVar4 + -1;
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  } while (lVar4 != 0);
  return;
}

