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


void fn_82CC44F8(int param_1,int param_2,int param_3,int param_4,int param_5,short param_6,
                  uint param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  short *psVar13;
  int iVar14;
  ulonglong uVar15;
  byte *pbVar16;
  int iVar17;
  undefined4 in_stack_00000054;
  short sStack_c2;
  short asStack_c0 [96];
  
  iVar9 = 4 << (param_8 & 0x3f);
  uVar10 = 1 << ((uint)LZCOUNT(in_stack_00000054) >> 5 & param_8) + 2;
  uVar15 = (ulonglong)uVar10;
  if (((param_8 == 0) || (param_8 == 1)) || (param_8 == 2)) {
    iVar11 = 8 - (param_7 & 0xff);
    asStack_c0[iVar9] = 0;
    if (0 < (int)uVar10) {
      do {
        iVar17 = 0;
        if (0 < iVar9) {
          psVar13 = &sStack_c2;
          iVar14 = (iVar9 - 1U >> 2) + 1;
          pbVar16 = (byte *)(param_1 + 1);
          iVar17 = iVar14 * 4;
          do {
            bVar1 = *pbVar16;
            bVar2 = pbVar16[1];
            bVar3 = pbVar16[2];
            bVar4 = pbVar16[param_2];
            bVar5 = pbVar16[param_2 + 1];
            bVar6 = pbVar16[param_2 + 2];
            psVar13[1] = ((ushort)pbVar16[param_2 + -1] - (ushort)pbVar16[-1]) * param_6 +
                         (ushort)pbVar16[-1] * 4;
            psVar13[2] = ((ushort)bVar4 - (ushort)bVar1) * param_6 + (ushort)bVar1 * 4;
            psVar13[3] = ((ushort)bVar5 - (ushort)bVar2) * param_6 + (ushort)bVar2 * 4;
            pbVar16 = pbVar16 + 4;
            psVar13 = psVar13 + 4;
            *psVar13 = ((ushort)bVar6 - (ushort)bVar3) * param_6 + (ushort)bVar3 * 4;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        iVar14 = 0;
        asStack_c0[iVar17] =
             ((ushort)*(byte *)(iVar17 + param_1 + param_2) - (ushort)*(byte *)(iVar17 + param_1)) *
             param_6 + (ushort)*(byte *)(iVar17 + param_1) * 4;
        if (0 < iVar9) {
          psVar13 = asStack_c0 + 1;
          lVar12 = (ulonglong)(iVar9 - 1U >> 1) + 1;
          do {
            sVar7 = *psVar13;
            sVar8 = psVar13[1];
            *(char *)(iVar14 + param_3) =
                 (char)(((int)sVar7 - (int)psVar13[-1]) * param_5 + psVar13[-1] * 4 + iVar11 >> 4);
            psVar13 = psVar13 + 2;
            *(char *)(param_3 + 1 + iVar14) =
                 (char)(((int)sVar8 - (int)sVar7) * param_5 + sVar7 * 4 + iVar11 >> 4);
            iVar14 = iVar14 + 2;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        uVar15 = uVar15 - 1;
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      } while (uVar15 != 0);
    }
  }
  return;
}

