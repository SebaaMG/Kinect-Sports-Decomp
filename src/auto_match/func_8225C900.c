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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern int fn_822509A0();
extern int fn_8225E360();
extern int fn_8225F580();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_825231B8();
extern int fn_82526608();
extern int fn_8265C9E0();
extern int fn_82829120();
extern int fn_828EA5F8();
extern int fn_828EA600();
extern int fn_82A1EFC0();
extern int fn_82F63108();
extern unsigned int lbl_831CF9D0;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832760B0;
extern unsigned int lbl_832767BC;
extern unsigned int lbl_832767C0;
extern unsigned int lbl_832767C4;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_70;


void fn_8225C900(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar7;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulonglong uVar8;
  undefined4 uStack0000001c;
  uint uStack_70;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [16];
  int *piStack_50;
  undefined1 auStack_48 [72];
  
  uStack0000001c = (undefined4)param_2;
  fn_8225E360(&uStack_70,param_1,&stack0x0000001c);
  uVar1 = *(uint *)(uStack_70 + 0x10);
  uStack_70 = uVar1;
  fn_8225F580(uVar1);
  if (lbl_832760B0 == 0) {
    lbl_832760AC = 6;
    lbl_832760B0 = 1;
  }
  cVar7 = fn_828EA5F8(uVar1);
  if (cVar7 != '\0') {
    cVar7 = fn_828EA600(uVar1);
    if (cVar7 == '\0') {
      if (*(int *)(uVar1 + 0xfc) != 0) {
        fn_82522ED8();
        *(undefined4 *)(uVar1 + 0xfc) = 0;
      }
      iVar3 = fn_825231B8(lbl_832760AC);
      *(int *)(uVar1 + 0xfc) = iVar3;
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(*(undefined4 *)(iVar3 + 8),0,*(undefined4 *)(iVar3 + 4));
    }
  }
  if (lbl_832767C4 == 0) {
    lbl_832767BC = 0x359;
    lbl_832767C0 = &lbl_831CF9D0;
    lbl_832767C4 = 1;
  }
  cVar7 = fn_828EA5F8(uVar1);
  if (cVar7 != '\0') {
    cVar7 = fn_828EA600(uVar1);
    if (cVar7 == '\0') {
      if (*(int *)(uVar1 + 0x100) != 0) {
        fn_82522ED8();
        *(undefined4 *)(uVar1 + 0x100) = 0;
      }
      uVar4 = fn_82522DF8(lbl_832767BC << 2);
      *(undefined4 *)(uVar1 + 0x100) = uVar4;
    }
  }
  piVar5 = (int *)fn_82829120(auStack_6c,param_1 + 0x48,&uStack_70);
  if (*piVar5 == *(int *)(param_1 + 0x4c)) {
    iVar3 = fn_8265C9E0(0x410);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x404) = 0;
      *(undefined4 *)(iVar3 + 0x408) = 0;
      *(undefined4 *)(iVar3 + 0x40c) = 3;
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(iVar3,0,1000);
    }
    puVar6 = (undefined4 *)fn_82526608(param_1 + 0x48,&uStack_70);
    *puVar6 = 0;
  }
  puVar2 = *(uint **)(param_1 + 0x38);
  uStack_70 = *puVar2;
  while( true ) {
    uVar8 = (ulonglong)uStack_70;
    if (uVar8 == ZEXT48(puVar2)) {
      return;
    }
    fn_822C5B18(auStack_60,uVar8 + 0x18);
    fn_822C5B18(auStack_48,uVar8 + 0x30);
    if (piStack_50 == (int *)0x0) break;
    (**(code **)(*piStack_50 + 4))(piStack_50,param_2);
    fn_82359C18(auStack_48);
    fn_82359C18(auStack_60);
    fn_822509A0(&uStack_70);
    puVar2 = *(uint **)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

