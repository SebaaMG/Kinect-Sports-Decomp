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
extern int fn_82F07900();
extern unsigned int lbl_8324DBB0;


short fn_82F1A430(int param_1,ushort *param_2,int param_3,longlong param_4,int param_5,
                   undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort uVar11;
  short sVar12;
  longlong lVar13;
  longlong lVar14;
  ushort *puVar15;
  ulonglong uVar16;
  short asStack_60 [48];
  
  uVar2 = *(uint *)(param_5 + 0x10);
  uVar16 = (ulonglong)uVar2;
  sVar12 = 0;
  sVar7 = 0;
  asStack_60[0] = 0;
  lVar14 = 0;
  if (*(int *)(param_1 + 0x594) != 0) {
    param_8 = 5;
    lVar14 = (longlong)((int)(uVar2 << 1) / 5);
  }
  lVar13 = uVar16 - lVar14;
  if ((param_7 & 0xffffffff) == 0) {
    if (1 < (int)param_4) {
      lVar8 = param_4 + -1;
      puVar15 = param_2;
      do {
        puVar15 = puVar15 + 1;
        sVar12 = *(short *)((param_3 - (int)param_2) + (int)puVar15);
        param_8 = (ulonglong)sVar12;
        param_7 = (ulonglong)((int)sVar12 >> 0x1f);
        lVar9 = (param_8 ^ param_7) - param_7;
        if ((int)lVar9 < (int)lVar13) {
          *puVar15 = 0;
        }
        else {
          sVar7 = sVar7 + 1;
          uVar10 = lVar9 + lVar14;
          trapWord(6,uVar16,0);
          param_8 = uVar16 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1);
          uVar11 = *(ushort *)(&lbl_8324DBB0 + ((int)uVar10 / (int)uVar2) * 2);
          param_7 = (ulonglong)uVar11;
          trapWord(5,param_8,0xffff);
          if (sVar12 < 0) {
            uVar11 = -uVar11;
          }
          *puVar15 = uVar11;
        }
        lVar8 = lVar8 + -1;
        asStack_60[0] = sVar7;
      } while (lVar8 != 0);
    }
  }
  else {
    iVar3 = *(int *)(param_5 + 0x14);
    if (1 < (int)param_4) {
      lVar9 = param_4 + -1;
      iVar5 = (int)param_7;
      iVar6 = (int)param_2 - iVar5;
      lVar8 = lVar13;
      uVar10 = param_7;
      do {
        uVar10 = uVar10 + 2;
        psVar4 = (short *)uVar10;
        sVar1 = *(short *)((param_3 - iVar5) + (int)psVar4);
        param_8 = (ulonglong)sVar1;
        param_7 = (ulonglong)((int)sVar1 >> 0x1f);
        param_7 = (param_8 ^ param_7) - param_7;
        if (0 < *psVar4) {
          lVar8 = (longlong)(int)*psVar4 * (longlong)iVar3 + lVar13;
        }
        if ((int)param_7 < (int)lVar8) {
          *(undefined2 *)(iVar6 + (int)psVar4) = 0;
        }
        else {
          sVar7 = sVar12 + 1;
          param_7 = param_7 + lVar14;
          trapWord(6,uVar16,0);
          param_8 = uVar16 & ~(((param_7 & 0x7fffffff) << 1 | (param_7 & 0xffffffff) >> 0x1f) - 1);
          uVar11 = *(ushort *)(&lbl_8324DBB0 + ((int)param_7 / (int)uVar2) * 2);
          param_7 = (ulonglong)uVar11;
          trapWord(5,param_8,0xffff);
          if (sVar1 < 0) {
            uVar11 = -uVar11;
          }
          *(ushort *)(iVar6 + (int)psVar4) = uVar11;
          sVar12 = sVar7;
        }
        lVar9 = lVar9 + -1;
        asStack_60[0] = sVar7;
      } while (lVar9 != 0);
    }
  }
  if ((int)param_6 != 0) {
    fn_82F07900(param_1,param_2,asStack_60,param_6,param_4,(int)param_6,param_7,param_8);
  }
  return asStack_60[0];
}

