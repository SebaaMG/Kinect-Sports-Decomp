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


void fn_82F429B8(undefined1 *param_1,byte *param_2,uint *param_3,int param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  iVar3 = param_5 * 2;
  iVar8 = param_4 + -2;
  *param_3 = (int)(((uint)*param_2 * 0xf + (uint)param_2[param_5] * 0xe + (uint)param_2[iVar3]) * 5
                   + ((uint)param_2[param_5 * 3] + (uint)param_2[param_5]) * -0xb + 0x3f) >> 7;
  if (2 < iVar8) {
    lVar4 = (ulonglong)(param_4 - 5U >> 1) + 1;
    pbVar10 = param_2 + param_5 * 3;
    pbVar11 = param_2 + param_5 * 2;
    puVar9 = param_3;
    pbVar5 = param_2;
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + iVar3;
      pbVar2 = pbVar5 + param_5;
      pbVar11 = pbVar11 + iVar3;
      pbVar10 = pbVar10 + iVar3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + iVar3;
      puVar9 = puVar9 + 2;
      *puVar9 = (int)((((uint)pbVar7[param_5] + (uint)*pbVar7) * 0xe + (uint)*pbVar2 +
                      (uint)*pbVar11) * 5 + ((uint)*pbVar10 + (uint)bVar1) * -0xb + 0x3f) >> 7;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  param_3[iVar8] =
       (int)(((uint)param_2[(param_4 + -3) * param_5] +
             (uint)param_2[(param_4 + -1) * param_5] * 0xf + (uint)param_2[iVar8 * param_5] * 0xe) *
             5 + ((uint)param_2[(param_4 + -4) * param_5] + (uint)param_2[iVar8 * param_5]) * -0xb +
            0x3f) >> 7;
  if (0 < param_4) {
    lVar4 = (ulonglong)(param_4 - 1U >> 1) + 1;
    do {
      uVar6 = *param_3;
      if (0xff < uVar6) {
        uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & 0xff;
      }
      *param_1 = (char)uVar6;
      param_3 = param_3 + 2;
      param_1[param_5] = 0;
      param_1 = param_1 + iVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

