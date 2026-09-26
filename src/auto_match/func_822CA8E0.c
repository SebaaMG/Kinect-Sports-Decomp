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
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_822CA560();
extern int fn_822CB140();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_8289C940();
extern int fn_828AB870();
extern int fn_82F565A0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AD0F8;
extern unsigned int uStack_60;
extern unsigned int uStack_84;
extern unsigned int uStack_9c;


void fn_822CA8E0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int in_r0;
  char cVar6;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcStack_a0;
  undefined4 uStack_9c;
  undefined **ppuStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined4 *puStack_70;
  undefined8 uStack_60;
  int *piStack_58;
  
  iVar1 = param_1[0x2f];
  cVar6 = fn_8288B760();
  if (cVar6 != '\0') {
    uVar7 = *(undefined4 *)(iVar1 + 0x28);
    lVar4 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB870(lVar4 + 0x9c,uVar7);
    *(undefined1 *)((int)param_1 + 0x81) = 1;
    uVar7 = *(undefined4 *)(iVar1 + 0x2c);
    lVar4 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB870(lVar4 + 0x48,uVar7);
    *(undefined1 *)(param_1 + 0x20) = 1;
    puVar5 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    uVar9 = puVar5[3];
    pcVar2 = *(code **)(*param_1 + 8);
    puVar3 = (undefined4 *)((int)&pcStack_a0 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar5;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    lVar4 = (*pcVar2)(param_1);
    fn_822CB140(lVar4 + 0x144,&pcStack_a0);
  }
  uStack_9c = 0;
  pcStack_a0 = fn_822CA560;
  uStack_60 = 0x822ca56000000000;
  piStack_58 = param_1;
  puVar5 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &lbl_821AD0F8;
    fn_82F68CC0(puVar5 + 2,&uStack_60,0x38);
    puStack_70 = puVar5;
    fn_82F565A0(&pcStack_a0,auStack_80);
    lVar4 = (**(code **)(*param_1 + 8))(param_1);
    fn_8289C940(lVar4 + 0x144,&pcStack_a0);
    fn_82359C18(auStack_80);
    return;
  }
  uStack_84 = 0;
  ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_88);
}

