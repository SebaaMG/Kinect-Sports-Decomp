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
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


void fn_82E35228(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar5 = (int *)fn_82F6A548();
  uVar4 = lbl_821AAD20;
  uVar3 = lbl_82186E6C;
  iVar1 = *piVar5;
  uVar2 = *(uint *)(iVar1 + 0x100);
  if (15999 < *(int *)(iVar1 + 0x50)) {
    trapWord(6,(ulonglong)(uint)piVar5[0x1de8],0);
    trapWord(5,(ulonglong)(uint)piVar5[0x1de8] &
               ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),0xffff);
  }
  if (*(short *)(iVar1 + 0x22) != 0) {
    *param_3 = param_2;
    param_2[0x2b] = param_3;
    param_2[0x11] = 0;
    param_3[0x13] =
         (uint)*(ushort *)(iVar1 + 0x22) * (int)param_4 * *(int *)(iVar1 + 0xfc) * 4 +
         piVar5[0x1db4];
    param_3[0x16] = piVar5[0x1db5];
    if (piVar5[0x41ea] != 0) {
      param_3[0x18] = piVar5[0x1db6];
    }
    iVar6 = piVar5[0x1db7];
    param_3[0x20] = 0;
    param_3[0x17] = iVar6;
    *param_2 = *(undefined4 *)(iVar1 + 0x13c);
    param_3[0x2e] = piVar5[0x1dd7] + 0x80;
    param_3[0x2f] = piVar5[0x1dd8] + 0x80;
    iVar6 = (int)(short)uVar2 >> 1;
    if (*(int *)(iVar1 + 0x1c0) != 0) {
      iVar6 = iVar6 << (*(uint *)(iVar1 + 0x1c8) & 0x3f);
    }
    iVar7 = *(int *)(iVar1 + 0x144);
    param_2[0x12] = uVar4;
    param_2[0x13] = uVar4;
    *(undefined2 *)(param_2 + 0x1c) = 0x7fff;
    param_2[0x14] = uVar4;
    *(undefined2 *)(param_2 + 0x1d) = 0;
    param_2[0x17] = uVar4;
    *(undefined2 *)((int)param_2 + 0x7a) = 0;
    param_2[0x19] = uVar4;
    *(undefined2 *)(param_2 + 0x20) = 0;
    param_2[0x1a] = uVar4;
    *(undefined2 *)(param_2 + 0x21) = 0;
    param_2[0x15] = uVar4;
    *(undefined2 *)((int)param_2 + 0x86) = 0;
    *(undefined2 *)((int)param_2 + 0x72) = 0;
    param_2[0x18] = uVar4;
    *(undefined2 *)(param_2 + 0x1f) = 0;
    param_2[0x16] = uVar4;
    *(undefined2 *)((int)param_2 + 0x82) = 0;
    param_2[0x1b] = uVar4;
    *(undefined2 *)((int)param_2 + 0x7e) = 0;
    *(undefined2 *)((int)param_2 + 0x76) = 0;
    iVar7 = iVar6 * 4 + iVar7;
    param_2[0xe] = iVar7;
    param_2[0x24] = iVar7;
    param_3[0x1e] = piVar5[0x1dd5];
    param_3[0x1f] = piVar5[0x1dd6];
    iVar6 = piVar5[0x1df5];
    param_3[1] = iVar6;
    param_3[4] = iVar6 + 0x70;
    param_3[3] = iVar6 + 0xe0;
    iVar6 = (uint)*(ushort *)(iVar1 + 0x22) * (int)param_4 * *(int *)(iVar1 + 0xe4) * 0x70 +
            piVar5[0x1df6];
    param_3[5] = iVar6;
    param_3[2] = iVar6;
    param_3[6] = iVar6;
    param_3[7] = iVar6;
    iVar7 = (int)param_4;
    param_3[8] = (uint)*(ushort *)(iVar1 + 0x22) * iVar7 * *(int *)(iVar1 + 0xe4) * 0x70 +
                 piVar5[0x1dfb];
    iVar6 = (uint)*(ushort *)(iVar1 + 0x22) * iVar7 * *(int *)(iVar1 + 0xe4) * 0x70 + piVar5[0x1df7]
    ;
    param_3[10] = iVar6;
    param_3[9] = iVar6;
    param_3[0xb] = iVar6;
    param_3[0xc] = piVar5[0x1dfa];
    param_3[0xd] = piVar5[0x41cb];
    param_3[0xe] = (uint)*(ushort *)(iVar1 + 0x22) * iVar7 * 0x14 + piVar5[0x41f7];
    param_3[0xf] = (uint)*(ushort *)(iVar1 + 0x22) * iVar7 * 0x200 + piVar5[0x41f8];
    param_3[0x10] = (uint)*(ushort *)(iVar1 + 0x22) * (int)param_4 * 0x200 + piVar5[0x41f9];
    *(undefined4 *)param_3[0xe] = uVar3;
    *(undefined4 *)(param_3[0xe] + 4) = uVar3;
    *(undefined4 *)(param_3[0xe] + 8) = uVar3;
    *(undefined4 *)(param_3[0xe] + 0xc) = uVar3;
    *(undefined4 *)(param_3[0xe] + 0x10) = uVar3;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_3[0xf],0,0x200);
  }
  fn_82F6A594();
  return;
}

