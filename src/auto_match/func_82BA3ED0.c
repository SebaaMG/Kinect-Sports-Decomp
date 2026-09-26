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
extern int fn_82B7BEB0();
extern int fn_82BAFDC0();
extern int fn_82BBFE98();
extern int fn_82BC6DC0();
extern unsigned int lbl_820E0214;


void fn_82BA3ED0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x85c);
  if (iVar1 != 0) {
    fn_82B7BEB0(*(undefined4 *)(iVar1 + -4),iVar1 + -4);
  }
  iVar1 = *(int *)(param_1 + 0x858);
  if (iVar1 != 0) {
    fn_82B7BEB0(*(undefined4 *)(iVar1 + -4),iVar1 + -4);
  }
  if (*(int *)(param_1 + 0x814) != 0) {
    fn_82BC6DC0(*(int *)(param_1 + 0x814),1);
  }
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 != 0) {
    fn_82BAFDC0(iVar1);
    fn_82B7BEB0(*(undefined4 *)(iVar1 + -4),iVar1 + -4);
  }
  fn_82BBFE98(param_1 + 0x80);
  fn_82B7BEB0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac),*(undefined4 *)(param_1 + 0x98)
                   );
  fn_82B7BEB0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac),*(undefined4 *)(param_1 + 0x9c)
                   );
  fn_82B7BEB0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac),*(undefined4 *)(param_1 + 0xa0)
                   );
  *(undefined ***)(param_1 + 0x8c) = &lbl_820E0214;
  *(undefined ***)(param_1 + 0x80) = &lbl_820E0214;
  return;
}

