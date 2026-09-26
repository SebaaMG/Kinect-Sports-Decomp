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
extern int fn_8226D6A0();
extern int fn_822848B8();
extern int fn_82292BC0();
extern int fn_82359C18();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_8251FA58();
extern int fn_8254B438();
extern unsigned int lbl_8329618C;


void fn_82276BC8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_82292BC0(0,0,0);
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_822848B8();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_8226D6A0();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = fn_8249ABC0();
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 0x34) != -1) {
    uVar2 = 0xffffffff;
    fn_8249D980(*(undefined4 *)(iVar1 + 0x110));
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  if (*(int *)(param_1 + 0x38) != -1) {
    fn_8249DA08();
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    if (lbl_8329618C == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(lbl_8329618C + 4);
    }
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x8c8) != 0)) {
      fn_8254B438();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  fn_82359C18(param_1);
  return;
}

