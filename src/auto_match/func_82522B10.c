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
extern unsigned int lbl_8326B7D0;


undefined8 fn_82522B10(int *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  int iVar3;
  undefined8 uVar2;
  uint uVar4;
  
  if (*param_1 == 0) {
    fn_82522838();
  }
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 2,1,lVar1 + 1);
  fn_82A1BB18();
  iVar3 = fn_8259A230();
  iVar3 = fn_8259C458(*(undefined4 *)(&lbl_8326B7D0 + iVar3 * 4));
  uVar4 = *(uint *)(iVar3 + 0x28);
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  *(uint *)(iVar3 + 0x28) = param_3;
  uVar2 = fn_82522CF8(iVar3,param_2);
  if (0x10 < uVar4) {
    uVar4 = 0x10;
  }
  *(uint *)(iVar3 + 0x28) = uVar4;
  fn_82A1BB18();
  fn_8259C738(param_1 + 2);
  return uVar2;
}

