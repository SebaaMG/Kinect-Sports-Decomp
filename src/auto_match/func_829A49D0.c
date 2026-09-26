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
extern unsigned int *auStack_100;
extern unsigned int *auStack_b0;


undefined8 fn_829A49D0(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint auStack_100 [20];
  uint auStack_b0 [44];
  
  if (param_2 == (uint *)0x0) {
LAB_829a49e0:
    uVar9 = 1;
  }
  else {
    uVar1 = *param_2;
    if (((uVar1 & 0xfff00000) != 0) && ((uVar1 & 0xfff00000) != 0x20700000)) {
      uVar15 = (ulonglong)uVar1 & 0xfffff;
      uVar14 = param_2[1] / uVar15;
      trapWord(6,uVar15,0);
      if (1 < uVar14) {
        iVar2 = *(int *)(param_1 + 0x80);
        iVar3 = *(int *)(param_1 + 0x88);
        iVar4 = *(int *)(param_1 + 0x7c);
        iVar5 = *(int *)(param_1 + 0x94);
        auStack_100[iVar2] = 0;
        auStack_100[iVar3] = 0;
        auStack_100[iVar4] = 0;
        auStack_b0[iVar2] = 2;
        auStack_b0[iVar3] = 3;
        uVar13 = 0;
        auStack_b0[iVar4] = 2;
        uVar16 = 0;
        auStack_100[iVar5] = 0;
        auStack_b0[iVar5] = 1;
        if (uVar14 != 0) {
          uVar6 = param_2[2];
          uVar15 = (ulonglong)uVar6;
          lVar8 = ((ulonglong)uVar1 & 0xfffff) * 4;
          iVar2 = *(int *)(param_1 + 0x14);
          iVar3 = *(int *)(param_1 + 0x10);
          do {
            uVar11 = 0;
            iVar4 = *(int *)(*(int *)uVar15 * 4 + iVar2);
            uVar1 = *(uint *)(iVar4 + 4);
            if (uVar16 != 0) {
              lVar10 = 0;
              do {
                iVar5 = *(int *)(*(int *)((int)lVar10 + uVar6) * 4 + iVar2);
                if ((((uVar1 == *(uint *)(iVar5 + 4)) &&
                     (*(int *)(iVar4 + 8) == *(int *)(iVar5 + 8))) &&
                    (*(int *)(iVar4 + 0xc) == *(int *)(iVar5 + 0xc))) &&
                   ((((*(uint *)(*(int *)(*(int *)(param_1 + 0x10) + uVar1 * 4) + 4) & 0x100) == 0
                     || ((*(uint *)(*(int *)(*(uint *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) +
                                   4) & 0x100) == 0)) ||
                    (*(double *)(iVar4 + 0x20) == *(double *)(iVar5 + 0x20))))) break;
                uVar11 = uVar11 + 1;
                lVar10 = lVar8 + lVar10;
              } while (uVar11 < uVar16);
            }
            if (uVar11 == uVar16) {
              if (uVar1 == *(uint *)(param_1 + 0x80)) {
                uVar12 = *(uint *)(param_1 + 0x80);
                if (*(char *)(iVar4 + 0x6f) == '\x03') {
                  if (((*(short *)(param_1 + 0xca) == 0x101) && (uVar13 = uVar13 + 1, 2 < uVar13))
                     && (param_3 == (uint *)0x0)) goto LAB_829a49e0;
                  uVar12 = *(uint *)(param_1 + 0x88);
                }
              }
              else {
                uVar11 = *(uint *)(*(int *)(iVar3 + uVar1 * 4) + 4);
                if (((uVar11 & 0x200) == 0) || ((uVar11 & 0x80) != 0)) {
                  uVar12 = uVar1;
                  if ((uVar11 & 0x80) != 0) {
                    uVar12 = *(uint *)(param_1 + 0x94);
                  }
                }
                else {
                  uVar12 = *(uint *)(param_1 + 0x7c);
                }
              }
              if ((((*(int *)(iVar4 + 0x48) != -1) &&
                   (uVar11 = *(uint *)(param_1 + 0x88), uVar1 == uVar11)) &&
                  ((*(short *)(param_1 + 0xca) == 0x101 &&
                   (puVar7 = *(uint **)(*(int *)(iVar4 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
                   uVar12 = uVar11, puVar7 != (uint *)0x0)))) &&
                 (((((uVar1 = *puVar7 & 0xfff00000, uVar1 == 0x60f00000 || (uVar1 == 0x60500000)) ||
                    (uVar1 == 0x60a00000)) || (uVar1 == 0x60000000)) &&
                  ((uVar13 = uVar13 + 1, 2 < uVar13 && (param_3 == (uint *)0x0))))))
              goto LAB_829a49e0;
              if (uVar12 < 0x12) {
                uVar1 = auStack_100[uVar12];
                auStack_100[uVar12] = uVar1 + 1;
                if (auStack_b0[uVar12] < uVar1 + 1) {
                  if (param_3 != (uint *)0x0) {
                    *param_3 = uVar16;
                  }
                  goto LAB_829a49e0;
                }
              }
            }
            uVar16 = uVar16 + 1;
            uVar15 = uVar15 + lVar8;
          } while (uVar16 < uVar14);
        }
      }
    }
    uVar9 = 0;
  }
  return uVar9;
}

