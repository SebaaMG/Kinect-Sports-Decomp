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
extern unsigned int *auStack_bc;
extern int fn_82C97A60();
extern int fn_82CAF338();
extern int fn_82CAF7F8();
extern int fn_82CBD918();
extern unsigned int iStack_c0;


void fn_82CB1DF0(int param_1,uint *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
                  short *param_6,int param_7,int param_8)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  short sVar11;
  ulonglong uVar10;
  int iVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  int in_stack_00000054;
  int in_stack_0000005c;
  int iStack_c0;
  uint auStack_bc [3];
  int aiStack_b0 [44];
  
  if (*(int *)(param_1 + 0x5118) == 0) {
    aiStack_b0[0] = in_stack_0000005c;
    aiStack_b0[1] = in_stack_00000054;
    aiStack_b0[3] = in_stack_0000005c;
    if (*(int *)(param_1 + 0x18c) == 0) {
      iVar12 = param_1 + 0xb64;
      iVar13 = param_1 + 0xb70;
    }
    else {
      uVar16 = *param_2 >> 0x16 & 3;
      iVar13 = (uVar16 + 0x2e2) * 4 + param_1;
      iVar12 = (uVar16 + 0x2df) * 4 + param_1;
    }
    uVar16 = 0;
    iVar5 = iStack_c0;
    aiStack_b0[2] = param_8;
    do {
      iStack_c0 = iVar5;
      psVar14 = param_6;
      iVar15 = param_7;
      fn_82CBD918(param_1,&iStack_c0,*(undefined4 *)(param_1 + 0x830),0x77,
                        *(undefined4 *)(param_1 + 300));
      if (iStack_c0 != 0) {
        return;
      }
      iVar3 = (in_stack_00000054 + 2) * 4;
      psVar7 = *(short **)(param_8 * 4 + iVar15);
      psVar2 = *(short **)(iVar3 + iVar15);
      sVar11 = **(short **)((aiStack_b0[uVar16] + 4) * 4 + iVar15);
      uVar8 = (int)sVar11 - (int)*psVar7;
      uVar6 = (int)sVar11 - (int)*psVar2;
      uVar4 = (int)uVar8 >> 0x1f;
      uVar9 = (int)uVar6 >> 0x1f;
      if ((int)((uVar6 ^ uVar9) - uVar9) <
          (int)(((uVar8 ^ uVar4) - uVar4) + *(int *)(param_1 + 0x794))) {
        psVar2 = psVar7;
      }
      sVar11 = *psVar2 + (short)**(undefined4 **)(param_1 + 0x6e4);
      *psVar14 = sVar11;
      **(int **)(param_1 + 0x6e4) = (int)sVar11 * *(int *)(param_1 + 300);
      iStack_c0 = fn_82CAF338(param_1,iVar13,param_2,param_3,*(undefined4 *)(param_1 + 0xcc),
                                    uVar16,psVar14);
      if (iStack_c0 != 0) {
        return;
      }
      uVar10 = 8;
      if (uVar16 == 1) {
        uVar10 = (ulonglong)*(uint *)(param_1 + 0xec);
      }
      uVar16 = uVar16 + 1;
      param_3 = uVar10 + param_3;
      param_6 = psVar14 + 0x10;
      param_7 = iVar15 + 0x18;
      iVar5 = 0;
    } while (uVar16 < 4);
    fn_82CBD918(param_1,&iStack_c0,*(undefined4 *)(param_1 + 0x834),0x77,
                      *(undefined4 *)(param_1 + 0x130));
    if (iStack_c0 == 0) {
      psVar7 = *(short **)(param_8 * 4 + param_7);
      psVar2 = *(short **)(iVar3 + param_7);
      sVar11 = **(short **)((in_stack_0000005c + 4) * 4 + param_7);
      uVar6 = (int)sVar11 - (int)*psVar7;
      uVar9 = (int)sVar11 - (int)*psVar2;
      uVar16 = (int)uVar6 >> 0x1f;
      uVar4 = (int)uVar9 >> 0x1f;
      bVar1 = (int)(((uVar6 ^ uVar16) - uVar16) + *(int *)(param_1 + 0x794)) <=
              (int)((uVar9 ^ uVar4) - uVar4);
      if (!bVar1) {
        psVar2 = psVar7;
      }
      auStack_bc[0] = (uint)bVar1;
      sVar11 = *psVar2 + (short)**(undefined4 **)(param_1 + 0x6e4);
      *param_6 = sVar11;
      **(int **)(param_1 + 0x6e4) = (int)sVar11 * *(int *)(param_1 + 0x130);
      iStack_c0 = fn_82CAF338(param_1,iVar12,param_2,param_4,*(undefined4 *)(param_1 + 0xd0),4
                                    ,param_6);
      if (iStack_c0 == 0) {
        fn_82CBD918(param_1,&iStack_c0,*(undefined4 *)(param_1 + 0x834),0x77,
                          *(undefined4 *)(param_1 + 0x130));
        if (iStack_c0 == 0) {
          psVar7 = (short *)fn_82CAF7F8(param_1,iVar15 + 0x30,param_8,in_stack_00000054,
                                          in_stack_0000005c,auStack_bc);
          sVar11 = *psVar7 + (short)**(undefined4 **)(param_1 + 0x6e4);
          psVar14[0x20] = sVar11;
          **(int **)(param_1 + 0x6e4) = (int)sVar11 * *(int *)(param_1 + 0x130);
          fn_82CAF338(param_1,iVar12,param_2,param_5,*(undefined4 *)(param_1 + 0xd0),5,
                            psVar14 + 0x20,psVar7);
        }
      }
    }
  }
  else {
    **(uint **)(param_1 + 0x164) = **(uint **)(param_1 + 0x164) | 4;
    fn_82C97A60();
  }
  return;
}

