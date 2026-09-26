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
extern unsigned int *auStack_220;
extern unsigned int *auStack_240;
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack0000003c;


/* WARNING: Removing unreachable block (ram,0x8294b1d8) */
/* WARNING: Removing unreachable block (ram,0x8294b1e8) */

undefined8
fn_8294AC48(undefined8 param_1,uint *param_2,int *param_3,undefined4 *param_4,int *param_5,
             int param_6,int param_7,uint param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  int *piStack00000034;
  int iStack0000003c;
  int in_stack_00000054;
  undefined4 auStack_240 [8];
  undefined1 auStack_220 [64];
  int aiStack_1e0 [40];
  int aiStack_140 [80];
  
  if (((param_8 < (*param_2 & 0xfffff)) && (in_stack_00000054 == 0)) ||
     ((*param_2 & 0xfff00000) != param_3[1])) {
    uVar1 = 1;
  }
  else {
    lVar2 = 1;
    if (*param_3 == 0) {
      if (in_stack_00000054 != 0) {
        lVar2 = 2;
      }
      uVar3 = 0;
      puVar6 = auStack_240;
      lVar8 = 4;
      do {
        if (uVar3 < param_8) {
          uVar4 = *(undefined4 *)((param_7 - (int)auStack_240) + (int)puVar6);
        }
        else {
          uVar4 = 0xff;
        }
        *puVar6 = uVar4;
        uVar3 = uVar3 + 1;
        puVar6 = puVar6 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    piStack00000034 = param_5;
    iStack0000003c = param_6;
    if ((lVar2 != 0) && ((ulonglong)(uint)param_3[7] != 0xffffffffffffffff)) {
      fn_82F68CC0(auStack_220,param_4,*param_5 << 2);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(aiStack_1e0,0xff,0xa0);
    }
    fn_82F68CC0(param_4,auStack_220,0);
    *param_4 = param_2;
    *piStack00000034 = 1;
    iVar7 = 0;
    lVar2 = 0x28;
    do {
      iVar5 = *(int *)((int)aiStack_1e0 + iVar7);
      if ((iVar5 != -1) || (iVar5 = *(int *)((int)aiStack_140 + iVar7), iVar5 != -1)) {
        *(int *)(iVar7 + iStack0000003c) = iVar5;
      }
      iVar7 = iVar7 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    uVar1 = 0;
  }
  return uVar1;
}

