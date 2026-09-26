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
extern unsigned int lbl_8215F67C;
extern unsigned int lbl_8215F68C;
extern unsigned int lbl_8215F6B0;
extern unsigned int lbl_8215F6C0;


void fn_82E86F80(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int aiStack_70 [28];
  
  if (*(uint *)(param_1 + 0xa1c) != 0) {
    aiStack_70[2] = *(int *)(param_1 + 0x2d0) * 2;
    aiStack_70[1] = 1;
    aiStack_70[0] = 0;
    iVar14 = 0;
    iVar13 = 0;
    iVar5 = 0;
    aiStack_70[3] = aiStack_70[2] + 1;
    iVar12 = 0;
    iVar4 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x2d4)) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x2d4);
      iVar15 = 0;
      do {
        iVar7 = 0;
        if (0 < aiStack_70[2]) {
          do {
            lVar9 = 4;
            if (*(char *)(*(int *)(param_1 + 0x1a88) + iVar4) != '\x01') {
              lVar9 = 1;
            }
            piVar8 = aiStack_70;
            do {
              iVar6 = (*piVar8 + iVar15 + iVar7) * 2;
              sVar1 = *(short *)(iVar6 + *(int *)(param_1 + 0x9f0));
              iVar10 = (int)sVar1;
              iVar3 = iVar14;
              if (sVar1 != 0x4000) {
                sVar2 = *(short *)(*(int *)(param_1 + 0x9f4) + iVar6);
                iVar6 = iVar10;
                if ((iVar5 <= sVar1) && (iVar6 = iVar5, iVar12 < iVar10)) {
                  iVar12 = iVar10;
                }
                iVar5 = iVar6;
                iVar3 = (int)sVar2;
                if ((iVar14 <= sVar2) && (iVar3 = iVar14, iVar13 < sVar2)) {
                  iVar13 = (int)sVar2;
                }
              }
              iVar14 = iVar3;
              piVar8 = piVar8 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            iVar7 = iVar7 + 2;
            iVar4 = iVar4 + 1;
          } while (iVar7 < aiStack_70[2]);
        }
        uVar11 = uVar11 - 1;
        iVar15 = *(int *)(param_1 + 0x2d0) * 4 + iVar15;
      } while (uVar11 != 0);
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0xa1c) - 1;
    if (-1 < (longlong)uVar11) {
      lVar9 = (uVar11 & 0x3fffffff) << 2;
      do {
        *(int *)(param_1 + 0xa1c) = (int)uVar11;
        if ((((iVar5 < -*(int *)(&lbl_8215F6B0 + (int)lVar9)) ||
             (*(int *)(&lbl_8215F6B0 + (int)lVar9) <= iVar12)) ||
            (iVar14 < -*(int *)(&lbl_8215F6C0 + (int)lVar9))) ||
           (*(int *)(&lbl_8215F6C0 + (int)lVar9) <= iVar13)) {
          *(int *)(param_1 + 0xa1c) = (int)uVar11 + 1;
          break;
        }
        uVar11 = uVar11 - 1;
        lVar9 = lVar9 + -4;
      } while (-1 < (longlong)uVar11);
    }
    iVar12 = *(int *)(param_1 + 0xa1c);
    if (*(int *)(param_1 + 0xa40) < *(int *)(param_1 + 0xa1c)) {
      iVar12 = *(int *)(param_1 + 0xa40);
    }
    *(int *)(param_1 + 0xa1c) = iVar12;
    iVar5 = *(int *)(&lbl_8215F68C + iVar12 * 4);
    *(int *)(param_1 + 0xa24) = iVar5;
    iVar12 = *(int *)(&lbl_8215F67C + iVar12 * 4);
    *(int *)(param_1 + 0xa28) = iVar12;
    iVar12 = 1 << (iVar12 - 1U & 0x3f);
    iVar5 = 1 << (iVar5 - 1U & 0x3f);
    *(int *)(param_1 + 0xa30) = iVar12;
    *(int *)(param_1 + 0xa2c) = iVar5;
    *(int *)(param_1 + 0x1aec) = iVar5 >> 2;
    *(int *)(param_1 + 0x1af0) = iVar12 >> 2;
    *(int *)(param_1 + 0x1af4) = iVar5 >> 3;
    *(int *)(param_1 + 0xa34) = iVar5 * 2 + -1;
    *(int *)(param_1 + 0xa38) = iVar12 * 2 + -1;
    *(int *)(param_1 + 0x1af8) = iVar12 >> 3;
  }
  return;
}

