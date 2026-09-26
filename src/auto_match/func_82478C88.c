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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_82292D50();
extern int fn_82476988();
extern int fn_82536590();
extern int fn_8254B438();
extern int fn_8255B1E0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_82191564;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832766EC;


void fn_82478C88(int param_1)

{
  int iVar1;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [48];
  
  fn_82476988(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  fn_82292BC0(0,0,0);
  fn_82292C30(0);
  fn_82292D50(1);
  fn_8254B438(*(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0x8c8));
  if (*(int *)(param_1 + 8) == 3) {
    fn_82864988(auStack_40,0xffffffff821bcf70);
    auStack_50[0] = fn_828647D8();
    fn_82864898(auStack_40);
    fn_82536590(auStack_50,0);
    if (*(int *)(param_1 + 0x1ac) != 0) {
      fn_8255B1E0((double)lbl_82191564,*(undefined4 *)(param_1 + 0x1b0),param_1 + 0x1ac,1,0,0,
                        0,1);
      iVar1 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
      *(byte *)(iVar1 + 8) = *(byte *)(iVar1 + 8) | 0x40;
    }
  }
  lbl_832766EC = 0;
  return;
}

