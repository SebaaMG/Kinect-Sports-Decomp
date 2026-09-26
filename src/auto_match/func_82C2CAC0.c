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
extern int fn_82A6E1C0();
extern int fn_82A6E290();
extern int fn_82C2C918();
extern int fn_82C2CA28();
extern int fn_82C314C8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;


undefined8 fn_82C2CAC0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  short *psVar4;
  uint uVar5;
  ulonglong uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  short sVar11;
  uint uVar10;
  short sVar12;
  int iVar14;
  ulonglong uVar13;
  double dVar15;
  double dVar16;
  
  if (*(int *)(param_1 + 0xb0) == 1) {
    if (0 < *(short *)(param_1 + 0x244)) {
      iVar8 = 0;
      iVar9 = 0;
      do {
        sVar7 = (short)iVar8 + 1;
        iVar8 = (int)sVar7;
        psVar4 = (short *)(iVar9 + *(int *)(param_1 + 0x248));
        iVar9 = iVar8 << 1;
        iVar14 = *psVar4 * 0x6f0 + *(int *)(param_1 + 0x140);
        uVar1 = *(undefined2 *)
                 (*(short *)(iVar14 + 0x72) * 2 + *(int *)(*(int *)(iVar14 + 0x1a8) + 8));
        *(undefined2 *)(iVar14 + 0x7c) = uVar1;
        *(undefined2 *)(iVar14 + 0x76) = uVar1;
      } while (sVar7 < *(short *)(param_1 + 0x244));
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0xb0) == 0) {
    if (0 < *(short *)(param_1 + 0x244)) {
      iVar8 = 0;
      iVar9 = 0;
      dVar15 = (double)lbl_82002C5C;
      dVar16 = (double)lbl_82005344;
      do {
        iVar14 = *(short *)(iVar9 + *(int *)(param_1 + 0x248)) * 0x6f0 + *(int *)(param_1 + 0x140);
        psVar4 = *(short **)(iVar14 + 0x1a8);
        iVar9 = *(short *)(iVar14 + 0x72) * 2;
        sVar7 = *(short *)(iVar9 + *(int *)(psVar4 + 4));
        *(short *)(iVar14 + 0x7c) = sVar7;
        *(undefined2 *)(iVar14 + 0x7a) = *(undefined2 *)(iVar9 + *(int *)(psVar4 + 4) + -2);
        *(undefined2 *)(iVar14 + 0x7e) = *(undefined2 *)(iVar9 + *(int *)(psVar4 + 4) + 2);
        if (*psVar4 < 2) {
          sVar11 = 0;
          uVar3 = **(undefined4 **)(param_1 + 0x154);
          *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x158);
          *(undefined4 *)(param_1 + 0x130) = uVar3;
          *(undefined4 *)(param_1 + 0x138) = **(undefined4 **)(param_1 + 0x160);
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x100);
          uVar13 = (ulonglong)sVar7;
          uVar10 = 0;
          sVar11 = 0;
          trapWord(6,uVar13,0);
          trapWord(5,uVar13 & ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f))
                               - 1),0xffff);
          if (1 < (uint)((int)uVar2 / (int)sVar7)) {
            trapWord(6,uVar13,0);
            trapWord(5,uVar13 & ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)
                                  ) - 1),0xffff);
            do {
              uVar10 = uVar10 + 1;
              sVar11 = (short)uVar10;
            } while (1 < (uint)((int)uVar2 / (int)sVar7) >> (uVar10 & 0x3f));
          }
          if (*(int *)(param_1 + 0xf4) <= (int)sVar11) {
            return 0xffffffff80040002;
          }
          if (0 < sVar11) {
            sVar12 = 0;
            do {
              sVar12 = sVar12 + 1;
            } while (sVar12 < sVar11);
          }
          *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(*(int *)(param_1 + 0x154) + sVar11 * 4)
          ;
          *(int *)(param_1 + 0x134) = sVar11 * 0x74 + *(int *)(param_1 + 0x158);
          *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(*(int *)(param_1 + 0x160) + sVar11 * 4)
          ;
        }
        uVar2 = *(uint *)(param_1 + 0x100);
        uVar6 = (ulonglong)uVar2;
        uVar5 = *(int *)(param_1 + 0x110) * (int)sVar7;
        uVar10 = *(int *)(param_1 + 0x114) * (int)sVar7;
        *(int *)(param_1 + 0x108) = (int)uVar5 / (int)uVar2;
        *(int *)(param_1 + 0x10c) = (int)uVar10 / (int)uVar2;
        *(short *)(iVar14 + 0x76) = sVar7;
        uVar13 = (((ulonglong)uVar10 & 0x7fffffff) << 1 | (ulonglong)(uVar10 >> 0x1f)) - 1;
        trapWord(6,uVar6,0);
        trapWord(6,uVar6,0);
        trapWord(5,uVar6 & ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1
                            ),0xffff);
        trapWord(5,uVar6 & ~uVar13,0xffff);
        *(int *)(iVar14 + 0x24) = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108);
        if (*(int *)(param_1 + 0x28) == 1) {
          iVar9 = (int)((double)((float)((double)(*(float *)(param_1 + 0x18c) *
                                                 (float)(longlong)(int)sVar7) * dVar16) /
                                (float)(longlong)*(int *)(param_1 + 0x50)) + dVar15);
          *(int *)(param_1 + 0x194) = iVar9;
          if (*(short *)(iVar14 + 0x76) < iVar9) {
            *(int *)(param_1 + 0x194) = (int)*(short *)(iVar14 + 0x76);
          }
          *(undefined4 *)(param_1 + 400) = *(undefined4 *)(sVar11 * 4 + *(int *)(param_1 + 0x19c));
        }
        fn_82C2C918(param_1,iVar14,uVar13);
        if (iVar8 == 0) {
          fn_82C2CA28(param_1,*(undefined2 *)(iVar14 + 0x78));
        }
        fn_82A6E1C0(param_1,1,*(undefined2 *)(iVar14 + 0x7a),*(undefined2 *)(iVar14 + 0x7c),
                     iVar14 + 0x80,iVar14 + 0x82);
        fn_82A6E290(param_1,1,*(undefined2 *)(iVar14 + 0x7c),*(undefined2 *)(iVar14 + 0x7e),
                     *(undefined4 *)(iVar14 + 0x8c),iVar14 + 0x84,iVar14 + 0x86);
        iVar8 = (int)(short)((short)iVar8 + 1);
        iVar9 = iVar8 << 1;
      } while (iVar8 < *(short *)(param_1 + 0x244));
    }
    fn_82C314C8(param_1);
  }
  return 0;
}

