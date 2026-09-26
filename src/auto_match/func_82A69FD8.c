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
extern int fn_82A6E360();
extern int fn_82C2C918();
extern int fn_82C2CA28();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;


undefined8 fn_82A69FD8(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar10;
  uint uVar9;
  double dVar11;
  double dVar12;
  
  if (*(int *)(param_1 + 0xb0) == 1) {
    if (0 < *(short *)(param_1 + 0x244)) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        sVar4 = (short)iVar5 + 1;
        iVar5 = (int)sVar4;
        psVar3 = (short *)(iVar6 + *(int *)(param_1 + 0x248));
        iVar6 = iVar5 << 1;
        iVar8 = *psVar3 * 0x6f0 + *(int *)(param_1 + 0x140);
        uVar1 = *(undefined2 *)
                 (*(short *)(iVar8 + 0x72) * 2 + *(int *)(*(int *)(iVar8 + 0x1a8) + 8));
        *(undefined2 *)(iVar8 + 0x7c) = uVar1;
        *(undefined2 *)(iVar8 + 0x76) = uVar1;
      } while (sVar4 < *(short *)(param_1 + 0x244));
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0xb0) == 0) {
    if (0 < *(short *)(param_1 + 0x244)) {
      iVar5 = 0;
      iVar6 = 0;
      dVar11 = (double)lbl_82002C5C;
      dVar12 = (double)lbl_82005344;
      do {
        iVar8 = *(short *)(iVar6 + *(int *)(param_1 + 0x248)) * 0x6f0 + *(int *)(param_1 + 0x140);
        psVar3 = *(short **)(iVar8 + 0x1a8);
        iVar6 = *(short *)(iVar8 + 0x72) * 2;
        sVar4 = *(short *)(iVar6 + *(int *)(psVar3 + 4));
        *(short *)(iVar8 + 0x7c) = sVar4;
        *(undefined2 *)(iVar8 + 0x7a) = *(undefined2 *)(iVar6 + *(int *)(psVar3 + 4) + -2);
        *(undefined2 *)(iVar8 + 0x7e) = *(undefined2 *)(iVar6 + *(int *)(psVar3 + 4) + 2);
        if (*psVar3 < 2) {
          sVar10 = 0;
          uVar2 = **(undefined4 **)(param_1 + 0x154);
          *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x158);
          *(undefined4 *)(param_1 + 0x130) = uVar2;
          *(undefined4 *)(param_1 + 0x138) = **(undefined4 **)(param_1 + 0x160);
        }
        else {
          uVar9 = 0;
          sVar10 = 0;
          if (1 < (uint)(*(int *)(param_1 + 0x100) / (int)sVar4)) {
            do {
              uVar9 = uVar9 + 1;
              sVar10 = (short)uVar9;
            } while (1 < (uint)(*(int *)(param_1 + 0x100) / (int)sVar4) >> (uVar9 & 0x3f));
          }
          if (*(int *)(param_1 + 0xf4) <= (int)sVar10) {
            return 0xffffffff80040002;
          }
          if (0 < sVar10) {
            sVar7 = 0;
            do {
              sVar7 = sVar7 + 1;
            } while (sVar7 < sVar10);
          }
          *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(*(int *)(param_1 + 0x154) + sVar10 * 4)
          ;
          *(int *)(param_1 + 0x134) = sVar10 * 0x74 + *(int *)(param_1 + 0x158);
          *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(*(int *)(param_1 + 0x160) + sVar10 * 4)
          ;
        }
        *(int *)(param_1 + 0x10c) =
             (*(int *)(param_1 + 0x114) * (int)sVar4) / *(int *)(param_1 + 0x100);
        *(int *)(param_1 + 0x108) =
             (*(int *)(param_1 + 0x110) * (int)sVar4) / *(int *)(param_1 + 0x100);
        *(short *)(iVar8 + 0x76) = sVar4;
        *(int *)(iVar8 + 0x24) = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108);
        if (*(int *)(param_1 + 0x28) == 1) {
          iVar6 = (int)((double)((float)((double)(*(float *)(param_1 + 0x18c) *
                                                 (float)(longlong)(int)sVar4) * dVar12) /
                                (float)(longlong)*(int *)(param_1 + 0x50)) + dVar11);
          *(int *)(param_1 + 0x194) = iVar6;
          if (*(short *)(iVar8 + 0x76) < iVar6) {
            *(int *)(param_1 + 0x194) = (int)*(short *)(iVar8 + 0x76);
          }
          *(undefined4 *)(param_1 + 400) = *(undefined4 *)(sVar10 * 4 + *(int *)(param_1 + 0x19c));
        }
        fn_82C2C918(param_1,iVar8);
        if (iVar5 == 0) {
          fn_82C2CA28(param_1,*(undefined2 *)(iVar8 + 0x78));
        }
        fn_82A6E1C0(param_1,1,*(undefined2 *)(iVar8 + 0x7a),*(undefined2 *)(iVar8 + 0x7c),
                     iVar8 + 0x80,iVar8 + 0x82);
        fn_82A6E290(param_1,1,*(undefined2 *)(iVar8 + 0x7c),*(undefined2 *)(iVar8 + 0x7e),
                     *(undefined4 *)(iVar8 + 0x8c),iVar8 + 0x84,iVar8 + 0x86);
        iVar5 = (int)(short)((short)iVar5 + 1);
        iVar6 = iVar5 << 1;
      } while (iVar5 < *(short *)(param_1 + 0x244));
    }
    fn_82A6E360(param_1);
  }
  return 0;
}

