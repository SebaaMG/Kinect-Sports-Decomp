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
extern unsigned int *auStack_120;
extern unsigned int *auStack_d0;


undefined8 fn_829A4CA8(int param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint auStack_120 [20];
  uint auStack_d0 [52];
  
  if (param_2 == (uint *)0x0) {
LAB_829a4cb8:
    uVar9 = 1;
  }
  else {
    uVar2 = *param_2;
    if ((uVar2 & 0xfff00000) != 0) {
      iVar3 = *(int *)(param_1 + 0x80);
      uVar4 = *param_3;
      uVar16 = (ulonglong)uVar2 & 0xfffff;
      iVar13 = *(int *)(param_1 + 0x88);
      uVar14 = param_2[1];
      uVar12 = (ulonglong)uVar4 & 0xfffff;
      iVar5 = *(int *)(param_1 + 0x7c);
      uVar15 = param_3[1];
      auStack_120[iVar3] = 0;
      uVar20 = uVar14 / uVar16;
      auStack_120[iVar13] = 0;
      auStack_d0[iVar3] = 2;
      auStack_d0[iVar13] = 5;
      trapWord(6,uVar16,0);
      trapWord(6,uVar12,0);
      auStack_120[iVar5] = 0;
      uVar16 = uVar15 / uVar12 + uVar20;
      auStack_d0[iVar5] = 3;
      uVar15 = 0;
      uVar14 = 0;
      uVar21 = 0;
      if (uVar16 != 0) {
        iVar3 = *(int *)(param_1 + 0x10);
        lVar7 = ((ulonglong)uVar2 & 0xfffff) * 4;
        lVar17 = (-((longlong)(int)uVar12 * (longlong)(int)uVar20) & 0x3fffffffU) << 2;
        lVar8 = ((ulonglong)uVar4 & 0xfffff) * 4;
        lVar18 = 0;
        lVar19 = lVar17;
        do {
          if ((uVar21 & 0xffffffff) < uVar20) {
            iVar13 = *(int *)(param_2[2] + (int)lVar18);
          }
          else {
            iVar13 = *(int *)(param_3[2] + (int)lVar19);
          }
          uVar12 = 0;
          iVar5 = *(int *)(iVar13 * 4 + *(int *)(param_1 + 0x14));
          iVar13 = *(int *)(iVar5 + 4);
          if ((uVar21 & 0xffffffff) != 0) {
            lVar10 = 0;
            lVar11 = lVar17;
            do {
              if ((uVar12 & 0xffffffff) < uVar20) {
                iVar6 = *(int *)(param_2[2] + (int)lVar10);
              }
              else {
                iVar6 = *(int *)(param_3[2] + (int)lVar11);
              }
              iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14));
              if (((iVar13 == *(int *)(iVar6 + 4)) && (*(int *)(iVar5 + 8) == *(int *)(iVar6 + 8)))
                 && (*(int *)(iVar5 + 0xc) == *(int *)(iVar6 + 0xc))) break;
              uVar12 = uVar12 + 1;
              lVar11 = lVar8 + lVar11;
              lVar10 = lVar7 + lVar10;
            } while ((uVar12 & 0xffffffff) < (uVar21 & 0xffffffff));
          }
          if ((uVar12 & 0xffffffff) == (uVar21 & 0xffffffff)) {
            iVar6 = *(int *)(param_1 + 0x88);
            if (((iVar13 == iVar6) && (1 < *(uint *)(iVar5 + 0xc))) &&
               (uVar15 = uVar15 + 1, 3 < uVar15)) goto LAB_829a4cb8;
            if (iVar13 == *(int *)(param_1 + 0x80)) {
              iVar13 = *(int *)(param_1 + 0x80);
              if (((*(char *)(iVar5 + 0x6f) == '\x03') &&
                  (iVar13 = iVar6, *(short *)(param_1 + 0xca) == 0x101)) &&
                 (uVar15 = uVar15 + 1, 3 < uVar15)) goto LAB_829a4cb8;
LAB_829a4eb0:
              bVar1 = auStack_d0[iVar13] < auStack_120[iVar13] + 1;
              auStack_120[iVar13] = auStack_120[iVar13] + 1;
            }
            else {
              uVar2 = *(uint *)(*(int *)(iVar13 * 4 + iVar3) + 4);
              if ((uVar2 & 0x80) != 0) break;
              if ((uVar2 & 0x200) == 0) {
                iVar13 = *(int *)(iVar5 + 4);
                goto LAB_829a4eb0;
              }
              uVar14 = uVar14 + 1;
              bVar1 = 3 < uVar14;
            }
            if (bVar1) goto LAB_829a4cb8;
          }
          uVar21 = uVar21 + 1;
          lVar19 = lVar19 + lVar8;
          lVar18 = lVar7 + lVar18;
        } while ((uVar21 & 0xffffffff) < (uVar16 & 0xffffffff));
      }
    }
    uVar9 = 0;
  }
  return uVar9;
}

