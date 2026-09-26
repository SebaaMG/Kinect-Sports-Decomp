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
extern unsigned int *auStack_50;
extern int fn_8265C9E0();
extern int fn_8287FC28();
extern int fn_8287FD98();
extern int fn_82880270();
extern int fn_82881D60();
extern int fn_82883118();
extern int fn_82883310();
extern int fn_82883C18();
extern int fn_82886800();
extern int fn_82887EF0();
extern int fn_82888170();
extern int fn_8289F160();
extern int fn_828D5330();
extern int fn_82A1EFC0();
extern int fn_82F68CC0();
extern unsigned int iStack_4c;
extern unsigned int lbl_82022FD4;
extern unsigned int lbl_832129F8;
extern unsigned int lbl_83212A04;


void fn_828846A0(int *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar8;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int aiStack_48 [18];
  
  iVar8 = (int)param_2;
  bVar1 = false;
  iStack_4c = iVar8;
  fn_8289F160(aiStack_48,0xffffffff83212a00,&iStack_4c);
  if ((aiStack_48[0] == lbl_83212A04) || (*(int *)(aiStack_48[0] + 0x10) == 0)) {
    iVar4 = fn_8265C9E0(0x14a8);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_82883310();
    }
    *piVar5 = iVar8;
    piVar5[0x2d] = 0;
    piVar5[0x2e] = 0;
    aiStack_48[0] = iVar8;
    puVar6 = (undefined4 *)fn_82883118(0xffffffff83212a00,aiStack_48);
    bVar1 = true;
    *puVar6 = piVar5;
  }
  aiStack_48[0] = iVar8;
  piVar5 = (int *)fn_82883118(0xffffffff83212a00,aiStack_48);
  iVar8 = *piVar5;
  uVar7 = fn_82886800();
  *(undefined4 *)(iVar8 + 0xb4) = uVar7;
  *(int *)(iVar8 + 0x24) = param_1[2];
  *(int *)(iVar8 + 0x28) = param_1[3];
  *(int *)(iVar8 + 0x2c) = param_1[4];
  *(int *)(iVar8 + 0x30) = param_1[5];
  fn_82F68CC0(iVar8 + 0x34,param_1 + 6,0x24);
  uVar2 = fn_82880270(iVar8 + 0x34);
  *(ulonglong *)(iVar8 + 0x58) = uVar2 & 0xffffffff;
  fn_82883C18(iVar8 + 0x60,param_1 + 0xf);
  *(undefined1 *)(iVar8 + 4) = *(undefined1 *)(param_1 + 1);
  *(bool *)(iVar8 + 5) = *param_1 == 2;
  *(bool *)(iVar8 + 6) = *param_1 == 1;
  if ((*param_1 == 1) &&
     (puVar6 = (undefined4 *)fn_8265C9E0(0x1c), puVar6 != (undefined4 *)0x0)) {
    *puVar6 = &lbl_82022FD4;
    fn_828D5330(puVar6 + 1,auStack_50);
  }
  else {
    puVar6 = (undefined4 *)0x0;
  }
  *(undefined4 **)(iVar8 + 0x20) = puVar6;
  *(undefined4 *)(iVar8 + 0xb0) = 0;
  *(undefined4 *)(iVar8 + 8) = 0xffffffff;
  fn_82881D60(param_2);
  if (*(int *)(iVar8 + 0xb8) == 0) {
    uVar3 = fn_8265C9E0(lbl_832129F8);
    *(int *)(iVar8 + 0xb8) = (int)uVar3;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(uVar3,0,lbl_832129F8);
  }
  fn_82887EF0(param_2);
  fn_82888170(param_2,2,0x1f,1);
  if (bVar1) {
    uVar3 = fn_8287FD98();
    fn_8287FC28(uVar3,param_2);
  }
  return;
}

