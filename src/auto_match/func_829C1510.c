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
extern unsigned int lbl_82055148;
extern unsigned int lbl_820551D0;
extern unsigned int lbl_8205578F;
extern unsigned int lbl_82055890;
extern unsigned int lbl_82055990;
extern unsigned int lbl_82055A90;
extern unsigned int lbl_82055B08;


void fn_829C1510(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = 0;
  if (*(int *)(param_1 + 0x1698) != 0) {
    iVar11 = 0;
    do {
      uVar4 = (uint)*(ushort *)(iVar11 + *(int *)(param_1 + 0x169c));
      iVar11 = iVar11 + 2;
      bVar1 = *(byte *)(uVar10 + *(int *)(param_1 + 0x1690));
      uVar10 = uVar10 + 1;
      uVar7 = *(uint *)(param_1 + 0x16b4);
      if (uVar4 == 0) {
        puVar5 = (ushort *)((uint)bVar1 * 4 + param_2);
        uVar2 = puVar5[1];
        uVar4 = (uint)uVar2;
        uVar3 = *puVar5;
        uVar6 = (uint)uVar3;
        if ((int)(0x10 - (uint)uVar2) < (int)uVar7) {
          uVar7 = uVar6 << (uVar7 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b0);
          *(short *)(param_1 + 0x16b0) = (short)uVar7;
          *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar7;
          iVar8 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar8;
          *(undefined1 *)(iVar8 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b0);
LAB_829c15c0:
          iVar8 = *(int *)(param_1 + 0x16b4) + uVar4 + -0x10;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(short *)(param_1 + 0x16b0) =
               (short)(uVar6 >> (0x10U - *(int *)(param_1 + 0x16b4) & 0x3f));
LAB_829c188c:
          *(int *)(param_1 + 0x16b4) = iVar8;
        }
        else {
          *(uint *)(param_1 + 0x16b4) = uVar7 + uVar2;
          *(ushort *)(param_1 + 0x16b0) = uVar3 << (uVar7 & 0x3f) | *(ushort *)(param_1 + 0x16b0);
        }
      }
      else {
        iVar8 = (uint)(byte)(&lbl_82055990)[bVar1] * 4;
        uVar2 = *(ushort *)(iVar8 + param_2 + 0x406);
        uVar3 = *(ushort *)(((byte)(&lbl_82055990)[bVar1] + 0x101) * 4 + param_2);
        if ((int)(0x10 - (uint)uVar2) < (int)uVar7) {
          uVar7 = (uint)uVar3 << (uVar7 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b0);
          *(short *)(param_1 + 0x16b0) = (short)uVar7;
          *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar7;
          iVar9 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar9;
          *(undefined1 *)(iVar9 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b0);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(ushort *)(param_1 + 0x16b0) = uVar3 >> (0x10U - *(int *)(param_1 + 0x16b4) & 0x3f);
          *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + (uint)uVar2 + -0x10;
        }
        else {
          *(uint *)(param_1 + 0x16b4) = uVar7 + uVar2;
          *(ushort *)(param_1 + 0x16b0) = uVar3 << (uVar7 & 0x3f) | *(ushort *)(param_1 + 0x16b0);
        }
        iVar9 = *(int *)(&lbl_82055148 + iVar8);
        if (iVar9 != 0) {
          uVar7 = *(uint *)(param_1 + 0x16b4);
          uVar6 = (uint)bVar1 - *(int *)(&lbl_82055A90 + iVar8);
          if (0x10 - iVar9 < (int)uVar7) {
            uVar7 = uVar6 << (uVar7 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b0);
            *(short *)(param_1 + 0x16b0) = (short)uVar7;
            *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar7;
            iVar8 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar8;
            *(undefined1 *)(iVar8 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b0);
            iVar9 = *(int *)(param_1 + 0x16b4) + iVar9 + -0x10;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(short *)(param_1 + 0x16b0) =
                 (short)((uVar6 & 0xffff) >> (0x10U - *(int *)(param_1 + 0x16b4) & 0x3f));
          }
          else {
            iVar9 = uVar7 + iVar9;
            *(ushort *)(param_1 + 0x16b0) =
                 (ushort)(uVar6 << (uVar7 & 0x3f)) | *(ushort *)(param_1 + 0x16b0);
          }
          *(int *)(param_1 + 0x16b4) = iVar9;
        }
        uVar6 = uVar4 - 1;
        if (uVar6 < 0x100) {
          bVar1 = (&lbl_8205578F)[uVar4];
        }
        else {
          bVar1 = (&lbl_82055890)[uVar6 >> 7];
        }
        iVar8 = (uint)bVar1 * 4;
        uVar7 = *(uint *)(param_1 + 0x16b4);
        uVar2 = ((ushort *)(iVar8 + param_3))[1];
        uVar3 = *(ushort *)(iVar8 + param_3);
        if ((int)(0x10 - (uint)uVar2) < (int)uVar7) {
          uVar7 = (uint)uVar3 << (uVar7 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b0);
          *(short *)(param_1 + 0x16b0) = (short)uVar7;
          *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar7;
          iVar9 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar9;
          *(undefined1 *)(iVar9 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b0);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(ushort *)(param_1 + 0x16b0) = uVar3 >> (0x10U - *(int *)(param_1 + 0x16b4) & 0x3f);
          *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + (uint)uVar2 + -0x10;
        }
        else {
          *(uint *)(param_1 + 0x16b4) = uVar7 + uVar2;
          *(ushort *)(param_1 + 0x16b0) = uVar3 << (uVar7 & 0x3f) | *(ushort *)(param_1 + 0x16b0);
        }
        uVar4 = *(uint *)(&lbl_820551D0 + iVar8);
        if (uVar4 != 0) {
          uVar7 = *(uint *)(param_1 + 0x16b4);
          uVar6 = uVar6 - *(int *)(&lbl_82055B08 + iVar8);
          if ((int)(0x10 - uVar4) < (int)uVar7) {
            uVar7 = uVar6 << (uVar7 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b0);
            uVar6 = uVar6 & 0xffff;
            *(short *)(param_1 + 0x16b0) = (short)uVar7;
            *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar7;
            iVar8 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar8;
            *(undefined1 *)(iVar8 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b0);
            goto LAB_829c15c0;
          }
          iVar8 = uVar7 + uVar4;
          *(ushort *)(param_1 + 0x16b0) =
               (ushort)(uVar6 << (uVar7 & 0x3f)) | *(ushort *)(param_1 + 0x16b0);
          goto LAB_829c188c;
        }
      }
    } while (uVar10 < *(uint *)(param_1 + 0x1698));
  }
  uVar2 = *(ushort *)(param_2 + 0x402);
  uVar10 = *(uint *)(param_1 + 0x16b4);
  uVar3 = *(ushort *)(param_2 + 0x400);
  if ((int)(0x10 - (uint)uVar2) < (int)uVar10) {
    uVar10 = (uint)uVar3 << (uVar10 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b0);
    *(short *)(param_1 + 0x16b0) = (short)uVar10;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar10;
    iVar11 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar11;
    *(undefined1 *)(iVar11 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b0);
    *(ushort *)(param_1 + 0x16b0) = uVar3 >> (0x10U - *(int *)(param_1 + 0x16b4) & 0x3f);
    *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + (uint)uVar2 + -0x10;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  else {
    *(uint *)(param_1 + 0x16b4) = uVar10 + uVar2;
    *(ushort *)(param_1 + 0x16b0) = uVar3 << (uVar10 & 0x3f) | *(ushort *)(param_1 + 0x16b0);
  }
  *(uint *)(param_1 + 0x16ac) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}

