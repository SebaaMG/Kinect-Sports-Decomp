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
extern unsigned int *auStack_88;
extern int fn_828F0170();
extern int fn_829050F0();
extern int fn_829301D0();
extern int fn_82964760();
extern int fn_82F68CC0();
extern unsigned int uStack_84;
extern unsigned int uStack_8c;


undefined8
fn_82907DE8(undefined4 *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,ulonglong param_7,undefined4 *param_8)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar5;
  undefined8 uVar4;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint in_stack_00000054;
  int in_stack_0000005c;
  undefined4 *in_stack_00000064;
  undefined4 uStack_8c;
  undefined1 auStack_88 [4];
  uint uStack_84;
  
  uStack_8c = 0;
  if ((param_2 & 0xffffffff) != 0) {
    if (((int)param_5 == 0) && ((ulonglong)in_stack_00000054 != 0)) {
      param_8 = &uStack_8c;
      param_5 = 1;
      param_7 = (ulonglong)in_stack_00000054;
    }
    if ((((int)param_6 == 0) && (in_stack_0000005c != 0)) && (param_1[0x22] == 0)) {
      do {
        iVar5 = *(int *)(in_stack_0000005c + 8);
        pcVar6 = (char *)0x0;
        pcVar11 = (char *)0x0;
        pcVar9 = (char *)0x0;
        pcVar7 = pcVar6;
        pcVar10 = pcVar9;
        if (*(int *)(iVar5 + 4) == 0x12) {
          pcVar2 = *(char **)(*(int *)(iVar5 + 0x14) + 0x18);
          pcVar10 = pcVar2;
          if (((*(int *)(iVar5 + 0x10) != 0) &&
              (iVar5 = fn_828F0170(*(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x18),0,auStack_88
                                        ), pcVar10 = pcVar9, -1 < iVar5)) &&
             ((pcVar7 = pcVar2, param_1[4] != uStack_84 &&
              (pcVar7 = pcVar6, (param_1[4] & 0xffff0000) == uStack_84)))) {
            pcVar11 = pcVar2;
          }
        }
        in_stack_0000005c = *(int *)(in_stack_0000005c + 0xc);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = pcVar11;
          if (pcVar11 == (char *)0x0) {
            pcVar7 = pcVar10;
          }
          if (pcVar7 != (char *)0x0) goto LAB_82907f04;
        }
        else {
LAB_82907f04:
          if ((param_4 & 0xffffffff) < (ulonglong)*(uint *)(param_1[2] + 4)) {
            iVar5 = *(int *)(*(int *)(param_1[2] + 0x10) + (int)((param_4 & 0xffffffff) << 2));
          }
          else {
            iVar5 = 0;
          }
          if (iVar5 == 0) {
            return 0xffffffff80004005;
          }
          param_4 = fn_82964760();
          if ((param_4 & 0xffffffff) < (ulonglong)*(uint *)(param_1[2] + 4)) {
            piVar8 = *(int **)(*(int *)(param_1[2] + 0x10) + (int)((param_4 & 0xffffffff) << 2));
          }
          else {
            piVar8 = (int *)0x0;
          }
          if (piVar8 == (int *)0x0) {
            return 0xffffffff8007000e;
          }
          uVar3 = piVar8[1];
          if ((uVar3 & 0x800) == 0) {
            *piVar8 = (int)pcVar7;
            piVar8[1] = uVar3 | 0x840;
            if (((uVar3 & 0x10) != 0) && ((uVar3 & 0x80) == 0)) {
              if (((uVar3 & 0x200) != 0) && ((*(uint *)(param_1[2] + 0x70) & 0x200000) != 0)) {
                piVar8[1] = uVar3 | 0xc40;
              }
              if (((piVar8[1] & 0x200U) == 0) && ((*(uint *)(param_1[2] + 0x70) & 0x100000) != 0)) {
                piVar8[1] = piVar8[1] | 0x100400;
              }
            }
          }
          else {
            pcVar10 = (char *)*piVar8;
            do {
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            pcVar10 = pcVar10 + (-1 - *piVar8);
            pcVar11 = pcVar7;
            do {
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            pcVar11 = pcVar11 + (-1 - (int)pcVar7);
            iVar5 = fn_829301D0(*param_1,pcVar11 + (int)pcVar10 + 3,4);
            if (iVar5 == 0) {
              return 0xffffffff8007000e;
            }
            fn_82F68CC0(iVar5,*piVar8,pcVar10);
            pcVar10[iVar5] = ';';
            pcVar10[iVar5 + 1] = ' ';
            fn_82F68CC0(pcVar10 + iVar5 + 2,pcVar7,pcVar11);
            (pcVar11 + iVar5 + (int)pcVar10)[2] = '\0';
            *piVar8 = iVar5;
          }
          param_6 = 1;
        }
      } while (in_stack_0000005c != 0);
    }
    uVar4 = fn_829050F0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
  }
  if (in_stack_00000064 != (undefined4 *)0x0) {
    *in_stack_00000064 = 0;
  }
  return 0;
}

