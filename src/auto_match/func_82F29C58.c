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
extern unsigned int iStack_d4;


void fn_82F29C58(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                  undefined8 param_7,int param_8)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint in_stack_00000054;
  int iStack_d4;
  int aiStack_d0 [52];
  
  iVar5 = (param_5 & 3) * 4;
  iVar6 = (param_6 & 3) * 4;
  lVar12 = (ulonglong)in_stack_00000054 + 1;
  param_1 = param_1 - param_3;
  lVar11 = 4;
  do {
    if (0 < (int)lVar12) {
      sVar2 = *(short *)(iVar5 + -0x7ce46626);
      sVar3 = *(short *)(iVar5 + -0x7ce46628);
      piVar8 = &iStack_d4;
      pbVar9 = (byte *)(param_1 + param_3);
      lVar13 = lVar12;
      do {
        pbVar4 = pbVar9 + 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + param_2;
        piVar8 = piVar8 + 1;
        *piVar8 = (uint)*pbVar4 * (int)sVar2 + (uint)bVar1 * (int)sVar3;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (0 < (int)in_stack_00000054) {
      puVar7 = (undefined1 *)(param_3 - param_4);
      piVar8 = aiStack_d0;
      uVar14 = (ulonglong)in_stack_00000054;
      do {
        iVar10 = (((int)*(short *)(iVar6 + -0x7ce46626) * piVar8[1] +
                  (int)*(short *)(iVar6 + -0x7ce46628) * *piVar8) - param_8) + 8 >> 4;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        piVar8 = piVar8 + 1;
        puVar7 = puVar7 + param_4;
        *puVar7 = (char)iVar10;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    lVar11 = lVar11 + -1;
    param_3 = param_3 + 1;
  } while (lVar11 != 0);
  return;
}

