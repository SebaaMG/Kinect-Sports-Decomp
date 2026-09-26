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
extern int fn_82558B08();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int iRam832767d0;
extern unsigned int lbl_8326B7D0;
extern unsigned int lbl_832767CC;


undefined8 fn_82522A48(int *param_1,undefined8 param_2)

{
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    fn_82522838();
  }
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  if (*(char *)(lbl_832767CC + 0xfc) != '\0') {
    fn_82A1BB18();
    iVar3 = fn_8259A230();
    if (iVar3 == 0) {
      fn_82558B08();
    }
  }
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 2,1,lVar1 + 1);
  iRam832767d0 = iRam832767d0 + 1;
  fn_82A1BB18();
  iVar3 = fn_8259A230();
  uVar2 = fn_8259C458(*(undefined4 *)(&lbl_8326B7D0 + iVar3 * 4));
  uVar2 = fn_82522CF8(uVar2,param_2);
  fn_82A1BB18();
  fn_8259C738(param_1 + 2);
  return uVar2;
}

