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
extern unsigned int lbl_82111130;
extern unsigned int lbl_82111132;


void fn_82CDB2B8(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                  uint param_7)

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
  ulonglong uVar12;
  ulonglong uVar13;
  int in_stack_00000054;
  uint in_stack_0000005c;
  int iStack_d4;
  int aiStack_d0 [52];
  
  iVar5 = (param_6 & 3) * 4;
  iVar6 = (param_7 & 3) * 4;
  uVar12 = (ulonglong)in_stack_0000005c + 1;
  if ((uVar12 & 0xffffffff) < 0x22) {
    param_2 = param_2 - param_4;
    lVar11 = 4;
    do {
      if (0 < (int)uVar12) {
        sVar2 = *(short *)(&lbl_82111132 + iVar5);
        sVar3 = *(short *)(&lbl_82111130 + iVar5);
        piVar8 = &iStack_d4;
        pbVar9 = (byte *)(param_2 + param_4);
        uVar13 = uVar12;
        do {
          pbVar4 = pbVar9 + 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + param_3;
          piVar8 = piVar8 + 1;
          *piVar8 = (uint)*pbVar4 * (int)sVar2 + (uint)bVar1 * (int)sVar3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (0 < (int)in_stack_0000005c) {
        puVar7 = (undefined1 *)(param_4 - param_5);
        piVar8 = aiStack_d0;
        uVar13 = (ulonglong)in_stack_0000005c;
        do {
          iVar10 = (((int)*(short *)(&lbl_82111132 + iVar6) * piVar8[1] +
                    (int)*(short *)(&lbl_82111130 + iVar6) * *piVar8) - in_stack_00000054) + 8 >> 4;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          piVar8 = piVar8 + 1;
          puVar7 = puVar7 + param_5;
          *puVar7 = (char)iVar10;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar11 = lVar11 + -1;
      param_4 = param_4 + 1;
    } while (lVar11 != 0);
  }
  return;
}

