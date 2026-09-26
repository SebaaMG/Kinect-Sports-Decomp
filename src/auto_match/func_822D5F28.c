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
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822315A0();
extern int fn_822BD338();
extern int fn_822CE1C0();
extern int fn_822CEB28();
extern int fn_822CEC20();
extern int fn_82365BD8();
extern int fn_823730C0();
extern unsigned int iStack_84;
extern unsigned char lbl_831CD88C[];
extern unsigned int stack0x00000000;


void fn_822D5F28(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int *piVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [4];
  int iStack_84;
  int aiStack_80 [4];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  iVar9 = *(int *)(param_1 + 0xbc);
  if (iVar9 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) == 0) goto LAB_822d60bc;
  fn_82230110(&stack0x00000000 + -0x60,0xffffffff82196ea4);
  pcVar11 = lbl_831CD88C;
  do {
    pcVar10 = pcVar11;
    if (*(int *)(param_1 + 200) == *(int *)(pcVar11 + -4)) {
      do {
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      fn_82230360(&stack0x00000000 + -0x60,pcVar11,pcVar10 + (-1 - (int)pcVar11));
    }
    iVar8 = (int)in_r0;
    pcVar11 = pcVar11 + 0x24;
  } while ((int)pcVar11 < -0x7ce325c4);
  fn_822BD338(&stack0x00000000 + -0x60,0xffffffff82196ea4);
  iVar7 = *(int *)(iVar9 + 0x1c0);
  uVar2 = *(undefined4 *)(param_1 + 0xc4);
  puVar3 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(auStack_70 + iVar8) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
  if (iVar7 == 0) {
LAB_822d609c:
    iVar7 = 0;
  }
  else {
    piVar6 = (int *)fn_823730C0(&stack0x00000000 + -0x88,iVar7,uVar2);
    iVar7 = 0;
    iVar8 = 0;
    if ((int *)(&stack0x00000000 + -0x80) != piVar6) {
      iVar8 = piVar6[1];
      piVar6[1] = 0;
      iVar7 = *piVar6;
      *piVar6 = 0;
    }
    if (iStack_84 != 0) {
      fn_822315A0();
    }
    if ((iVar7 == 0) || (*(int *)(*(int *)(iVar9 + 0x1c0) + 0x84) == 0)) {
      if (iVar8 != 0) {
        fn_822315A0(iVar8);
      }
      goto LAB_822d609c;
    }
    uVar5 = fn_82365BD8(&stack0x00000000 + -0x80,&stack0x00000000 + -0x90);
    iVar7 = fn_822CEB28(iVar9,uVar5,&stack0x00000000 + -0x60,&stack0x00000000 + -0x70);
    if (iVar8 != 0) {
      fn_822315A0(iVar8);
    }
  }
  if (iVar7 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  fn_82230300(&stack0x00000000 + -0x60,1,0);
LAB_822d60bc:
  if ((*(int *)(param_1 + 0xe0) != 0) &&
     (iVar8 = fn_822CE1C0(iVar9,*(undefined4 *)(param_1 + 0xe4)), iVar8 != 0)) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if ((*(int *)(param_1 + 0xe8) != 0) &&
     (iVar9 = fn_822CEC20(iVar9,*(undefined4 *)(param_1 + 0xec),
                                *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4)),
     iVar9 != 0)) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  return;
}

