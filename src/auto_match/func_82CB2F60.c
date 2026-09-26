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
extern int fn_82CAF338();
extern int fn_82CAF7F8();
extern int fn_82CB0760();
extern int fn_82CBD918();
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_ac;


void fn_82CB2F60(int param_1,uint *param_2,longlong param_3,undefined4 param_4,undefined4 param_5,
                  short *param_6,int param_7,undefined8 param_8)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  uint uVar6;
  short sVar7;
  ulonglong uVar5;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  short *psVar17;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  int in_stack_00000054;
  int in_stack_0000005c;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  
  if ((int)param_8 == 0) {
    iStack_a8 = 0;
LAB_82cb2fc4:
    uVar9 = 0;
  }
  else {
    if ((param_2[-6] & 0x20000) == 0) {
      iStack_a8 = 1;
      goto LAB_82cb2fc4;
    }
    uVar9 = 1;
    iStack_a8 = 0;
  }
  if (in_stack_00000054 == 0) {
    iVar8 = 0;
  }
  else {
    if ((param_2[*(int *)(param_1 + 0x88) * -6] & 0x20000) != 0) {
      iVar8 = 0;
      uVar12 = 1;
      goto LAB_82cb3014;
    }
    iVar8 = 1;
  }
  uVar12 = 0;
LAB_82cb3014:
  if (in_stack_0000005c == 0) {
    uVar10 = 0;
  }
  else if ((param_2[(*(int *)(param_1 + 0x88) + 1) * -6] & 0x20000) == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iVar11 = param_1 + 0xb64;
    iVar13 = param_1 + 0xb70;
  }
  else {
    uVar6 = *param_2 >> 0x16 & 3;
    iVar13 = (uVar6 + 0x2e2) * 4 + param_1;
    iVar11 = (uVar6 + 0x2df) * 4 + param_1;
  }
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  fn_82CBD918(param_1,&iStack_b0,*(undefined4 *)(param_1 + 0x830),0x77,
                    *(undefined4 *)(param_1 + 300));
  if (iStack_b0 == 0) {
    uStack_ac = *(byte *)(param_2 + 5) >> 1 & 1;
    psVar2 = (short *)fn_82CB0760(param_1,param_3,param_7,param_8,in_stack_00000054,
                                        in_stack_0000005c,uVar9,uVar12);
    sVar7 = *psVar2 + (short)**(undefined4 **)(param_1 + 0x6e4);
    *param_6 = sVar7;
    **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 300);
    iVar3 = fn_82CAF338(param_1,iVar13,param_2,param_3,*(undefined4 *)(param_1 + 0xcc),0,
                              param_6,psVar2);
    if (iVar3 == 0) {
      param_3 = param_3 + 8;
      uVar16 = 1;
      psVar2 = param_6 + 0x10;
      iVar3 = param_7 + 0x18;
      do {
        iVar15 = iVar3;
        psVar17 = psVar2;
        iStack_b0 = 0;
        fn_82CBD918(param_1,&iStack_b0,*(undefined4 *)(param_1 + 0x830),0x77,
                          *(undefined4 *)(param_1 + 300));
        if (iStack_b0 != 0) {
          return;
        }
        uVar14 = uVar16 + 1;
        uStack_ac = (int)(1 << ((uint)uVar14 & 0x3f) & (uint)*(byte *)(param_2 + 5)) >>
                    ((uint)uVar14 & 0x3f);
        iVar3 = iStack_a8;
        if (uStack_ac != 0) {
          iVar3 = iVar8 + 2;
        }
        sVar7 = **(short **)(iVar3 * 4 + iVar15) + (short)**(undefined4 **)(param_1 + 0x6e4);
        *psVar17 = sVar7;
        **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 300);
        iStack_b0 = fn_82CAF338(param_1,iVar13,param_2,param_3,*(undefined4 *)(param_1 + 0xcc)
                                      ,uVar16,psVar17);
        if (iStack_b0 != 0) {
          return;
        }
        uVar5 = 8;
        if ((uVar16 & 0xffffffff) == 1) {
          uVar5 = (ulonglong)*(uint *)(param_1 + 0xec);
        }
        param_3 = uVar5 + param_3;
        psVar2 = psVar17 + 0x10;
        uVar16 = uVar14;
        iVar3 = iVar15 + 0x18;
      } while ((uVar14 & 0xffffffff) < 3);
      fn_82CBD918(param_1,&iStack_b0,*(undefined4 *)(param_1 + 0x830),0x77,
                        *(undefined4 *)(param_1 + 300));
      if (iStack_b0 == 0) {
        psVar4 = (short *)fn_82CAF7F8(param_1,iVar15 + 0x18,iStack_a8,iVar8,uVar10,&uStack_ac);
        sVar7 = *psVar4 + (short)**(undefined4 **)(param_1 + 0x6e4);
        *psVar2 = sVar7;
        **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 300);
        iStack_b0 = fn_82CAF338(param_1,iVar13,param_2,param_3,*(undefined4 *)(param_1 + 0xcc)
                                      ,3,psVar2,psVar4);
        if (iStack_b0 == 0) {
          fn_82CBD918(param_1,&iStack_b0,*(undefined4 *)(param_1 + 0x834),0x77,
                            *(undefined4 *)(param_1 + 0x130));
          uVar1 = uStack0000002c;
          if (iStack_b0 == 0) {
            uStack_ac = *(byte *)(param_2 + 5) >> 5 & 1;
            psVar2 = (short *)fn_82CB0760(param_1,uStack0000002c,iVar15 + 0x30,param_8,
                                                in_stack_00000054,in_stack_0000005c,uVar9,uVar12);
            sVar7 = *psVar2 + (short)**(undefined4 **)(param_1 + 0x6e4);
            psVar17[0x20] = sVar7;
            **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 0x130);
            iStack_b0 = fn_82CAF338(param_1,iVar11,param_2,uVar1,
                                          *(undefined4 *)(param_1 + 0xd0),4,psVar17 + 0x20,psVar2);
            if (iStack_b0 == 0) {
              fn_82CBD918(param_1,&iStack_b0,*(undefined4 *)(param_1 + 0x834),0x77,
                                *(undefined4 *)(param_1 + 0x130));
              uVar1 = uStack00000034;
              if (iStack_b0 == 0) {
                uStack_ac = *(byte *)(param_2 + 5) >> 6 & 1;
                psVar2 = (short *)fn_82CB0760(param_1,uStack00000034,iVar15 + 0x48,param_8,
                                                    in_stack_00000054,in_stack_0000005c,uVar9,uVar12
                                                   );
                sVar7 = *psVar2 + (short)**(undefined4 **)(param_1 + 0x6e4);
                psVar17[0x30] = sVar7;
                **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 0x130);
                fn_82CAF338(param_1,iVar11,param_2,uVar1,*(undefined4 *)(param_1 + 0xd0),5,
                                  psVar17 + 0x30,psVar2);
              }
            }
          }
        }
      }
    }
  }
  return;
}

