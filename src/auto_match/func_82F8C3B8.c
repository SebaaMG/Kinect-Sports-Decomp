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


void fn_82F8C3B8(int param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  ushort uVar2;
  
  uVar10 = 0xffffffff;
  iVar12 = 7;
  iVar13 = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar12 = 0x8a;
    iVar13 = 3;
  }
  if (-1 < (int)param_3) {
    param_3 = param_3 + 1;
    puVar14 = (ushort *)(param_2 + 6);
    lVar6 = 0;
    uVar2 = *(ushort *)(param_2 + 2);
    do {
      uVar1 = *puVar14;
      lVar7 = lVar6 + 1;
      iVar8 = (int)lVar7;
      uVar5 = (uint)uVar2;
      if ((iVar12 <= iVar8) || (uVar5 != uVar1)) {
        if (iVar8 < iVar13) {
          do {
            uVar9 = *(ushort *)((uint)uVar2 * 4 + param_1 + 0xa7e);
            uVar10 = *(uint *)(param_1 + 0x16bc);
            uVar4 = *(ushort *)((uVar2 + 0x29f) * 4 + param_1);
            if ((int)(0x10 - (uint)uVar9) < (int)uVar10) {
              uVar10 = (uint)uVar4 << (uVar10 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
              *(short *)(param_1 + 0x16b8) = (short)uVar10;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
              iVar13 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar13;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar13) = *(undefined1 *)(param_1 + 0x16b8);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b8) = uVar4 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0x3f);
              *(uint *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (uint)uVar9 + -0x10;
            }
            else {
              *(uint *)(param_1 + 0x16bc) = uVar10 + uVar9;
              *(ushort *)(param_1 + 0x16b8) =
                   uVar4 << (uVar10 & 0x3f) | *(ushort *)(param_1 + 0x16b8);
            }
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        else {
          if (uVar5 == 0) {
            uVar10 = *(uint *)(param_1 + 0x16bc);
            uVar9 = *(ushort *)(param_1 + 0x16b8);
            iVar13 = (int)lVar6;
            if (iVar8 < 0xb) {
              uVar4 = *(ushort *)(param_1 + 0xac2);
              uVar3 = *(ushort *)(param_1 + 0xac0);
              if ((int)(0x10 - (uint)uVar4) < (int)uVar10) {
                uVar10 = (uint)uVar3 << (uVar10 & 0x3f) | (uint)uVar9;
                *(short *)(param_1 + 0x16b8) = (short)uVar10;
                *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
                iVar12 = *(int *)(param_1 + 0x14) + 1;
                *(int *)(param_1 + 0x14) = iVar12;
                *(undefined1 *)(*(int *)(param_1 + 8) + iVar12) = *(undefined1 *)(param_1 + 0x16b8);
                *(ushort *)(param_1 + 0x16b8) = uVar3 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0x3f)
                ;
                *(uint *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (uint)uVar4 + -0x10;
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              }
              else {
                *(uint *)(param_1 + 0x16bc) = uVar10 + uVar4;
                *(ushort *)(param_1 + 0x16b8) = uVar3 << (uVar10 & 0x3f) | uVar9;
              }
              uVar10 = *(uint *)(param_1 + 0x16bc);
              uVar9 = *(ushort *)(param_1 + 0x16b8);
              if ((int)uVar10 < 0xe) {
                iVar13 = iVar13 + 0xfffe;
                iVar12 = uVar10 + 3;
LAB_82f8c8b8:
                *(int *)(param_1 + 0x16bc) = iVar12;
                *(ushort *)(param_1 + 0x16b8) = (ushort)(iVar13 << (uVar10 & 0x3f)) | uVar9;
                goto LAB_82f8c8c8;
              }
              uVar11 = iVar13 - 2;
              uVar10 = uVar11 << (uVar10 & 0x3f) | (uint)uVar9;
              *(short *)(param_1 + 0x16b8) = (short)uVar10;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
              iVar13 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar13;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar13) = *(undefined1 *)(param_1 + 0x16b8);
              iVar13 = *(int *)(param_1 + 0x16bc);
              iVar12 = iVar13 + -0xd;
            }
            else {
              uVar4 = *(ushort *)(param_1 + 0xac6);
              uVar3 = *(ushort *)(param_1 + 0xac4);
              if ((int)(0x10 - (uint)uVar4) < (int)uVar10) {
                uVar10 = (uint)uVar3 << (uVar10 & 0x3f) | (uint)uVar9;
                *(short *)(param_1 + 0x16b8) = (short)uVar10;
                *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
                iVar12 = *(int *)(param_1 + 0x14) + 1;
                *(int *)(param_1 + 0x14) = iVar12;
                *(undefined1 *)(*(int *)(param_1 + 8) + iVar12) = *(undefined1 *)(param_1 + 0x16b8);
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(ushort *)(param_1 + 0x16b8) = uVar3 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0x3f)
                ;
                *(uint *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (uint)uVar4 + -0x10;
              }
              else {
                *(uint *)(param_1 + 0x16bc) = uVar10 + uVar4;
                *(ushort *)(param_1 + 0x16b8) = uVar3 << (uVar10 & 0x3f) | uVar9;
              }
              uVar10 = *(uint *)(param_1 + 0x16bc);
              uVar9 = *(ushort *)(param_1 + 0x16b8);
              if ((int)uVar10 < 10) {
                iVar12 = uVar10 + 7;
                iVar13 = iVar13 + 0xfff6;
                goto LAB_82f8c8b8;
              }
              uVar11 = iVar13 - 10;
              uVar10 = uVar11 << (uVar10 & 0x3f) | (uint)uVar9;
              *(short *)(param_1 + 0x16b8) = (short)uVar10;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
              iVar13 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar13;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar13) = *(undefined1 *)(param_1 + 0x16b8);
              iVar13 = *(int *)(param_1 + 0x16bc);
              iVar12 = iVar13 + -9;
            }
          }
          else {
            if (uVar5 != uVar10) {
              uVar10 = *(uint *)(param_1 + 0x16bc);
              uVar9 = *(ushort *)((uint)uVar2 * 4 + param_1 + 0xa7e);
              uVar4 = *(ushort *)((uVar2 + 0x29f) * 4 + param_1);
              lVar7 = lVar6;
              if ((int)(0x10 - (uint)uVar9) < (int)uVar10) {
                uVar10 = (uint)uVar4 << (uVar10 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
                *(short *)(param_1 + 0x16b8) = (short)uVar10;
                *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
                iVar13 = *(int *)(param_1 + 0x14) + 1;
                *(int *)(param_1 + 0x14) = iVar13;
                *(undefined1 *)(*(int *)(param_1 + 8) + iVar13) = *(undefined1 *)(param_1 + 0x16b8);
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(ushort *)(param_1 + 0x16b8) = uVar4 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0x3f)
                ;
                *(uint *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (uint)uVar9 + -0x10;
              }
              else {
                *(uint *)(param_1 + 0x16bc) = uVar10 + uVar9;
                *(ushort *)(param_1 + 0x16b8) =
                     uVar4 << (uVar10 & 0x3f) | *(ushort *)(param_1 + 0x16b8);
              }
            }
            uVar9 = *(ushort *)(param_1 + 0xabe);
            uVar10 = *(uint *)(param_1 + 0x16bc);
            uVar4 = *(ushort *)(param_1 + 0xabc);
            if ((int)(0x10 - (uint)uVar9) < (int)uVar10) {
              uVar10 = (uint)uVar4 << (uVar10 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
              *(short *)(param_1 + 0x16b8) = (short)uVar10;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
              iVar13 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar13;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar13) = *(undefined1 *)(param_1 + 0x16b8);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b8) = uVar4 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0x3f);
              *(uint *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (uint)uVar9 + -0x10;
            }
            else {
              *(uint *)(param_1 + 0x16bc) = uVar10 + uVar9;
              *(ushort *)(param_1 + 0x16b8) =
                   uVar4 << (uVar10 & 0x3f) | *(ushort *)(param_1 + 0x16b8);
            }
            uVar10 = *(uint *)(param_1 + 0x16bc);
            uVar9 = *(ushort *)(param_1 + 0x16b8);
            if ((int)uVar10 < 0xf) {
              iVar13 = (int)lVar7 + 0xfffd;
              iVar12 = uVar10 + 2;
              goto LAB_82f8c8b8;
            }
            uVar11 = (int)lVar7 - 3;
            uVar10 = uVar11 << (uVar10 & 0x3f) | (uint)uVar9;
            *(short *)(param_1 + 0x16b8) = (short)uVar10;
            *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
            iVar13 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar13;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar13) = *(undefined1 *)(param_1 + 0x16b8);
            iVar13 = *(int *)(param_1 + 0x16bc);
            iVar12 = iVar13 + -0xe;
          }
          *(int *)(param_1 + 0x16bc) = iVar12;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(short *)(param_1 + 0x16b8) = (short)((uVar11 & 0xffff) >> (0x10U - iVar13 & 0x3f));
        }
LAB_82f8c8c8:
        lVar7 = 0;
        uVar10 = (uint)uVar2;
        if (uVar1 == 0) {
          iVar12 = 0x8a;
        }
        else {
          if (uVar5 != uVar1) {
            iVar12 = 7;
            iVar13 = 4;
            goto LAB_82f8c8fc;
          }
          iVar12 = 6;
        }
        iVar13 = 3;
      }
LAB_82f8c8fc:
      puVar14 = puVar14 + 2;
      param_3 = param_3 + -1;
      lVar6 = lVar7;
      uVar2 = uVar1;
    } while (param_3 != 0);
  }
  return;
}

