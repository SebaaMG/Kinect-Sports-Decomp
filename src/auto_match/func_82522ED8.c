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
extern int fn_82558B08();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C4C0();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A277E0();
extern int fn_82A28E60();
extern unsigned int lbl_8326B7D0;
extern unsigned int lbl_832767CC;


void fn_82522ED8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar5;
  longlong lVar4;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  iVar3 = lbl_832767CC;
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  if (*(char *)(lbl_832767CC + 0xfc) != '\0') {
    fn_82A1BB18();
    iVar5 = fn_8259A230();
    if (iVar5 == 0) {
      fn_82558B08();
    }
  }
  lVar4 = fn_82A1BB18();
  fn_8259C5D8(iVar3 + 8,1,lVar4 + 1);
  uVar6 = fn_8259C4C0(param_1);
  iVar5 = fn_8259C458();
  fn_82A1BB18();
  iVar7 = fn_8259A230();
  uVar1 = *(undefined4 *)(iVar5 + 0x24);
  uVar2 = *(undefined4 *)(&lbl_8326B7D0 + iVar7 * 4);
  *(undefined4 *)(&lbl_8326B7D0 + iVar7 * 4) = uVar6;
  iVar7 = fn_82A277E0(uVar1,0,param_1);
  iVar8 = fn_82A28E60(*(undefined4 *)(iVar5 + 0x24),0,param_1);
  if (iVar8 != 0) {
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + -1;
    *(int *)(iVar5 + 0x2c) = (*(int *)(iVar5 + 0x2c) - iVar7) + 4;
  }
  fn_82A1BB18();
  iVar5 = fn_8259A230();
  *(undefined4 *)(&lbl_8326B7D0 + iVar5 * 4) = uVar2;
  fn_82A1BB18();
  fn_8259C738(iVar3 + 8);
  return;
}

