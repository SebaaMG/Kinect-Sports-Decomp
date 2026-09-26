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
extern int fn_8227FFA8();
extern int fn_82286BF0();
extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821BE838;
extern unsigned int lbl_821BE91C;


void fn_82487BA8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_821BE91C;
  if (param_1[0x116] != 0) {
    iVar1 = param_1[0x116];
    *(undefined4 *)(iVar1 + 0x7b0) = 0;
    *(undefined4 *)(iVar1 + 0x7ac) = 0;
    iVar1 = param_1[0x116];
    if (iVar1 != 0) {
      fn_82286BF0(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  iVar1 = param_1[0x117];
  if (iVar1 != 0) {
    fn_8227FFA8(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_82359C18(param_1 + 0x118);
  *param_1 = &lbl_821BE838;
  return;
}

