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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_83013880();
extern int fn_83014FE0();
extern int fn_830154F0();
extern int fn_83015C88();
extern int fn_83015CF8();
extern unsigned int iStack_78;
extern unsigned int uStack_74;


undefined8
fn_830158F8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,char param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined4 in_register_000103f0;
  undefined1 auStack_80 [8];
  int iStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  lVar8 = param_1 + 4;
  fn_83014FE0(auStack_80,lVar8,param_2);
  if (iStack_78 != 0) {
    if ((param_6 != '\0') && (*(char *)(iStack_78 + 0x29) == '\0')) {
      return 1;
    }
    piVar9 = *(int **)(iStack_78 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x10))(piVar9,0xffffffff831bc7f4);
    }
    fn_83015CF8(auStack_70,lVar8,auStack_80);
  }
  puVar4 = (undefined4 *)fn_83015C88(lVar8,param_2);
  if (puVar4 == (undefined4 *)0x0) {
    return 2;
  }
  *puVar4 = (int)param_3;
  *(char *)((int)puVar4 + 0x21) = param_6;
  *(undefined1 *)(puVar4 + 8) = 0;
  puVar7 = &uStack_74;
  altv300_21(in_vs32,in_vs40);
  puVar6 = puVar4 + 1;
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f0;
  puVar2[2] = in_register_000103f0;
  puVar2[3] = in_register_000103f0;
  puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f0;
  puVar2[2] = in_register_000103f0;
  puVar2[3] = in_register_000103f0;
  lVar8 = 6;
  do {
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar7;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  piVar9 = puVar4 + 1;
  iVar5 = fn_83013880(0xffffffff831bc7f4,param_3,piVar9,auStack_60,auStack_70,
                            0xffffffff82002ae0);
  if ((iVar5 == 1) && (piVar1 = (int *)*piVar9, piVar1 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,0xffffffff831bc7f4,param_4,param_5);
    if ((int)uVar3 != 1) {
      (**(code **)(*(int *)*piVar9 + 0x10))((int *)*piVar9,0xffffffff831bc7f4);
      fn_830154F0(param_1,param_2);
      return uVar3;
    }
    return uVar3;
  }
  fn_830154F0(param_1,param_2);
  return 1;
}

