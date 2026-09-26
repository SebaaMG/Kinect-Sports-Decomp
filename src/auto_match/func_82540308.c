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
extern int fn_82522838();
extern int fn_82522CF8();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A1EFC0();
extern unsigned int lbl_8326B7D0;
extern unsigned int *lbl_832767CC;


void fn_82540308(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar4;
  undefined8 uVar3;
  uint uVar5;
  
  if (lbl_832767CC == (int *)0x0) {
    fn_82522838();
    if (lbl_832767CC == (int *)0x0) {
      fn_82522838();
    }
  }
  piVar1 = lbl_832767CC;
  if (*lbl_832767CC == 0) {
    fn_82522838();
  }
  lVar2 = fn_82A1BB18();
  fn_8259C5D8(piVar1 + 2,1,lVar2 + 1);
  fn_82A1BB18();
  iVar4 = fn_8259A230();
  iVar4 = fn_8259C458(*(undefined4 *)(&lbl_8326B7D0 + iVar4 * 4));
  uVar5 = *(uint *)(iVar4 + 0x28);
  *(undefined4 *)(iVar4 + 0x28) = 0x10;
  uVar3 = fn_82522CF8(iVar4,0xac40);
  if (0x10 < uVar5) {
    uVar5 = 0x10;
  }
  *(uint *)(iVar4 + 0x28) = uVar5;
  fn_82A1BB18();
  fn_8259C738(piVar1 + 2);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(uVar3,0,0xac40);
}

