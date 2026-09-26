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
extern unsigned int *auStack_22e;
extern unsigned int *auStack_460;
extern unsigned int *auStack_490;
extern int fn_82250A18();
extern int fn_822848B8();
extern int fn_82292AE8();
extern int fn_822931D8();
extern int fn_82350888();
extern int fn_82351510();
extern int fn_823545A8();
extern int fn_8249ABC0();
extern int fn_82536590();
extern int fn_82547C80();
extern int fn_8254B438();
extern int fn_8254EDB0();
extern int fn_82555A88();
extern int fn_8255B1E0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;
extern unsigned int lbl_831D450C;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832765BC;
extern int (*lbl_83276798)();
extern unsigned int lbl_832975B0;
extern unsigned int uStack_230;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82351198(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined4 auStack_490 [12];
  undefined1 auStack_460 [560];
  undefined2 uStack_230;
  undefined1 auStack_22e [558];
  
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) == '\0') {
    iVar4 = fn_8249ABC0();
    if (*(int *)(iVar4 + 8) == 2) {
      return;
    }
    if (*(int *)(iVar4 + 8) == 1) {
      return;
    }
    iVar4 = fn_8249ABC0();
    if (*(int *)(iVar4 + 0x88) == 0) {
      return;
    }
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x844);
  puVar5 = (undefined4 *)fn_82292AE8();
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  fn_822931D8();
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x8c8);
  if (iVar2 != 0) {
    fn_8254B438(iVar2);
    fn_8254EDB0((double)lbl_82192604,(double)lbl_821CA460,iVar2,0);
  }
  if ((*(int *)(param_1 + 800) == 0) &&
     ((uVar3 = *(uint *)(param_1 + 0x318), uVar3 == 0 ||
      (((uint)*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + (uVar3 >> 3)) &
       1 << (uVar3 & 7)) == 0)))) {
    puVar7 = (uint *)0x0;
    if ((*(int *)(param_1 + 0x3e0) == 0) || (lbl_832765BC == 0)) {
      puVar7 = (uint *)(param_1 + 0x310);
    }
    if (*(int *)(param_1 + 0x3e0) != 0) {
      puVar7 = (uint *)(-(uint)(lbl_832765BC == 0) & (uint)puVar7);
    }
    if ((puVar7 != (uint *)0x0) &&
       (uVar8 = (ulonglong)*puVar7, uVar8 != (uVar8 - 1) + (ulonglong)(uVar8 == 0))) {
      uVar6 = fn_8255B1E0((double)lbl_821CC160,iVar4,puVar7,1,0,1,param_1 + 0x314,1);
      *(undefined4 *)(param_1 + 800) = uVar6;
      fn_82351510(param_1,1);
      pcVar9 = (char *)(param_1 + 0x2cc);
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if ((int)pcVar9 - (param_1 + 0x2cc) == 1) {
        return;
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x3e4);
      if (iVar4 == 0) {
        return;
      }
      uVar8 = (ulonglong)*(uint *)(iVar4 + 0x8c0);
      if (uVar8 == 0) {
        return;
      }
      puVar7 = (uint *)fn_82555A88(uVar8 + 0x98);
      if (puVar7 == (uint *)0x0) {
        return;
      }
      fn_82547C80((ulonglong)*puVar7 + 0xd0,0,1);
      return;
    }
  }
  else if (*(int *)(iVar4 + 0x358) != 0) {
    if (lbl_83276798 == (code *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*lbl_83276798)();
    }
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x31c) != 0) {
      return;
    }
    uStack_230 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_22e,0,0x1fe);
  }
  fn_823545A8(param_1);
  if (*(int *)(param_1 + 0x31c) != 0) {
    fn_822848B8();
    *(undefined4 *)(param_1 + 0x31c) = 0;
  }
  *(undefined4 *)(param_1 + 800) = 0;
  lbl_831D44F8 = lbl_821CC160;
  lbl_831D450C = 0xff;
  lbl_831D4508 = 0;
  fn_82864988(auStack_460,0xffffffff821b20bc);
  auStack_490[0] = fn_828647D8();
  fn_82864898(auStack_460);
  fn_82536590(auStack_490,0);
  fn_82350888(param_1,5);
  return;
}

