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


void fn_82F431F8(int param_1,byte *param_2,uint *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 4;
  *param_3 = (int)((5 - (uint)param_2[2]) * 3 + (uint)*param_2 * 0x22 + (uint)param_2[4]) >> 5;
  param_3[1] = (int)((uint)*param_2 * 0x19 + ((uint)param_2[2] * 8 - (uint)param_2[2]) + 0xf) >> 5;
  param_3[2] = (int)((((uint)*param_2 * 2 - (uint)param_2[4]) + 5) * 3 + (uint)param_2[6] +
                    (uint)param_2[2] * 0x1c) >> 5;
  param_3[3] = (int)((((uint)param_2[4] * 3 + (uint)param_2[2] * 0xe) - (uint)*param_2) * 2 + 0xf)
               >> 5;
  if (4 < param_4 + -4) {
    lVar5 = (ulonglong)(param_4 - 9U >> 1) + 1;
    puVar6 = param_3 + 3;
    do {
      puVar6[1] = (int)((((uint)param_2[iVar7 + -2] * 2 - (uint)param_2[iVar7 + 2]) + 5) * 3 +
                        (uint)param_2[iVar7 + 4] + (uint)param_2[iVar7] * 0x1c) >> 5;
      iVar3 = iVar7 + -2;
      pbVar1 = param_2 + iVar7;
      iVar4 = iVar7 + -4;
      iVar2 = iVar7 + 2;
      iVar7 = iVar7 + 2;
      puVar6 = puVar6 + 2;
      *puVar6 = (int)((((uint)param_2[iVar2] * 2 - (uint)param_2[iVar3]) + 5) * 3 +
                      (uint)param_2[iVar4] + (uint)*pbVar1 * 0x1c) >> 5;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  iVar7 = 0;
  param_3[param_4 + -4] =
       (int)((((uint)param_2[param_4 + -6] * 3 + (uint)param_2[param_4 + -4] * 0xe) -
             (uint)param_2[param_4 + -2]) * 2 + 0xf) >> 5;
  param_3[param_4 + -3] =
       (int)((((uint)param_2[param_4 + -2] * 2 - (uint)param_2[param_4 + -6]) + 5) * 3 +
             (uint)param_2[param_4 + -8] + (uint)param_2[param_4 + -4] * 0x1c) >> 5;
  param_3[param_4 + -2] =
       (int)(((uint)param_2[param_4 + -4] * 8 - (uint)param_2[param_4 + -4]) +
             (uint)param_2[param_4 + -2] * 0x19 + 0xf) >> 5;
  param_3[param_4 + -1] =
       (int)((5 - (uint)param_2[param_4 + -4]) * 3 + (uint)param_2[param_4 + -2] * 0x22 +
            (uint)param_2[param_4 + -6]) >> 5;
  if (0 < param_4) {
    do {
      uVar8 = *param_3;
      if (0xff < uVar8) {
        uVar8 = 0xffffffffU - ((int)uVar8 >> 0x1f) & 0xff;
      }
      *(char *)(iVar7 + param_1) = (char)uVar8;
      param_3 = param_3 + 1;
      iVar7 = iVar7 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

