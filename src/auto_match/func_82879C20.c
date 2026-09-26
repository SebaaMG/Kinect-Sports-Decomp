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
extern int fn_8265CA20();
extern int fn_82864898();
extern int fn_828681F8();
extern int fn_8286BCB8();
extern int fn_8286C910();
extern int fn_82877998();
extern int fn_82878D48();
extern int fn_82879878();
extern int fn_8287BD28();
extern unsigned int lbl_82022994;
extern unsigned int lbl_82022A0C;
extern unsigned int lbl_82022A1C;
extern unsigned int lbl_82022A34;


void fn_82879C20(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &lbl_82022A34;
  param_1[1] = &lbl_82022A1C;
  fn_82878D48(param_1,1);
  if (param_1[0x14] != 0) {
    uVar1 = fn_828681F8();
    fn_8286C910(uVar1,param_1 + 0x14);
  }
  fn_82879878(param_1);
  if (param_1[0x1f] != 0) {
    fn_8265CA20();
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  fn_82877998(param_1 + 0x16);
  fn_8286BCB8(param_1 + 0x11);
  param_1[0x10] = &lbl_82022A0C;
  fn_82864898(param_1 + 6);
  fn_8287BD28(param_1 + 1);
  *param_1 = &lbl_82022994;
  return;
}

