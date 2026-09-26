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
extern unsigned int *auStack_a8;
extern int fn_82AD12C8();
extern int fn_82B80EE0();
extern int fn_82B82D28();
extern int fn_82B8C058();
extern unsigned int iStack_94;
extern unsigned int iStack_a0;
extern unsigned int iStack_ac;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_b0;


void fn_82AF59F0(undefined8 param_1,int param_2,int param_3,ulonglong param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,uint param_8)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_stack_00000054;
  int *in_stack_0000005c;
  uint uStack_b0;
  int iStack_ac;
  uint auStack_a8 [2];
  int iStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_94;
  
  *in_stack_0000005c = (int)param_6;
  in_stack_0000005c[1] = param_8;
  if ((param_8 & 8) != 0) {
    iVar4 = fn_82AD12C8(in_stack_00000054);
    in_stack_0000005c[2] = iVar4;
  }
  do {
    iVar4 = in_stack_0000005c[7];
    bVar3 = false;
    iVar1 = in_stack_0000005c[0x28];
    iVar11 = 0;
    uVar8 = 0;
    uVar12 = 0;
    piVar10 = (int *)(param_3 + 0x2c);
    for (uVar9 = 0; uVar9 < (*(uint *)(param_3 + 8) >> 0x13 & 7); uVar9 = uVar9 + 1) {
      puVar2 = (uint *)*piVar10;
      fn_82B82D28(puVar2,param_4,&iStack_ac,auStack_a8,&uStack_b0,
                        *(undefined4 *)(param_3 + 0x1c),0,1);
      if (((uStack_b0 & 4) != 0) && ((param_5 & 2) != 0)) {
        uStack_b0 = uStack_b0 - 4;
      }
      uVar6 = param_5;
      if ((uStack_b0 & param_5 & 4) != 0) {
        uStack_b0 = uStack_b0 - 4;
        uVar6 = param_5 - 4;
      }
      if (((uStack_b0 & 1) != 0) && ((uVar6 & 2) != 0)) {
        uVar6 = uVar6 - 2;
      }
      uStack_b0 = uStack_b0 | uVar6;
      if (((iStack_ac == *in_stack_0000005c) && (uStack_b0 == in_stack_0000005c[1])) &&
         (((uStack_b0 & 8) == 0 || (iVar5 = fn_82AD12C8(param_3), iVar5 == in_stack_0000005c[2]))))
      {
        if (in_stack_0000005c[7] == 4) {
          bVar3 = false;
          break;
        }
        bVar3 = true;
        in_stack_0000005c[in_stack_0000005c[7] + 3] = auStack_a8[0];
        in_stack_0000005c[7] = in_stack_0000005c[7] + 1;
      }
      else if (((uStack_b0 == 0 && (uStack_b0 & 0xfffffffb) == 0) &&
               (((*(uint *)(iStack_ac + 8) ^ *(uint *)(param_2 + 8)) & 0x3f80) == 0)) &&
              (in_stack_0000005c[0x31] + 1U < 8)) {
        if (iVar11 != 0) {
          iVar11 = 0;
          break;
        }
        for (iVar5 = *(int *)(iStack_ac + 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
          if ((*(int *)(iVar5 + 0x10) != 0) && (*(int *)(iVar5 + 0x10) != param_3))
          goto LAB_82af5bb8;
        }
        uVar8 = (ulonglong)auStack_a8[0];
        iVar11 = iStack_ac;
        uVar12 = uStack_b0;
      }
      else {
LAB_82af5bb8:
        uVar6 = *puVar2;
        uStack_9c = (uVar6 >> 5 & 0xff) >> ((uint)((param_4 & 0xffffffff) << 1) & 0x3e) & 3;
        uVar7 = uVar6 & 0x1f;
        if (((uVar6 & 4) != 0) && ((param_5 & 2) != 0)) {
          uVar7 = uVar7 - 4;
        }
        uStack_98 = param_5;
        if ((uVar7 & param_5 & 4) != 0) {
          uVar7 = uVar7 - 4;
          uStack_98 = param_5 - 4;
        }
        if (((uVar7 & 1) != 0) && ((uStack_98 & 2) != 0)) {
          uStack_98 = uStack_98 - 2;
        }
        uStack_98 = uStack_98 | uVar7;
        iVar5 = in_stack_0000005c[0x28];
        in_stack_0000005c[iVar5 * 4 + 8] = puVar2[3];
        in_stack_0000005c[iVar5 * 4 + 9] = uStack_9c;
        in_stack_0000005c[iVar5 * 4 + 10] = uStack_98;
        in_stack_0000005c[iVar5 * 4 + 0xb] = param_3;
        in_stack_0000005c[0x28] = in_stack_0000005c[0x28] + 1;
        iStack_94 = param_3;
        if ((((*(uint *)(iStack_ac + 8) & 0x3f80) == 16000) && (in_stack_0000005c[1] == 0)) &&
           (in_stack_0000005c[0x34] == 0)) {
          fn_82B80EE0(iStack_ac,auStack_a8[0],uStack_b0);
          iVar5 = fn_82B8C058(param_1,param_6);
          in_stack_0000005c[0x35] = iVar5;
          if (iVar5 != 4) {
            in_stack_0000005c[0x34] = in_stack_0000005c[0x28];
          }
        }
      }
      piVar10 = piVar10 + 1;
    }
    if ((!bVar3) && (iVar11 == 0)) {
      in_stack_0000005c[7] = iVar4;
      in_stack_0000005c[0x28] = iVar1;
      uVar8 = param_4;
      uVar12 = param_5;
      goto LAB_82af5d38;
    }
    in_stack_0000005c[in_stack_0000005c[0x31] + 0x29] = param_3;
    in_stack_0000005c[0x31] = in_stack_0000005c[0x31] + 1;
    if (iVar11 == 0) {
      return;
    }
    param_4 = uVar8;
    param_3 = iVar11;
    param_5 = uVar12;
    if (in_stack_0000005c[7] == 4) {
LAB_82af5d38:
      iVar4 = in_stack_0000005c[0x28];
      in_stack_0000005c[iVar4 * 4 + 8] = iStack_a0;
      in_stack_0000005c[iVar4 * 4 + 9] = (int)uVar8;
      in_stack_0000005c[iVar4 * 4 + 10] = uVar12;
      in_stack_0000005c[iVar4 * 4 + 0xb] = 0;
      in_stack_0000005c[0x28] = in_stack_0000005c[0x28] + 1;
      return;
    }
  } while( true );
}

