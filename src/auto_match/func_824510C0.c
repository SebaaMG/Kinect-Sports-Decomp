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
extern int fn_82433068();
extern int fn_82437E38();
extern int fn_82450F88();
extern int fn_8265C9E0();
extern unsigned int lbl_821BA3D0;


undefined4 * fn_824510C0(undefined4 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  fn_82433068();
  *param_1 = &lbl_821BA3D0;
  uVar1 = fn_8265C9E0(0x80);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82450F88(uVar1,param_2);
  }
  param_1[0x11] = uVar2;
  fn_82437E38(param_1,2,0);
  fn_82437E38(param_1,6,0);
  fn_82437E38(param_1,7,0);
  fn_82437E38(param_1,8,0);
  fn_82437E38(param_1,9,0);
  fn_82437E38(param_1,10,0);
  fn_82437E38(param_1,0xb,0);
  fn_82437E38(param_1,0xf,0);
  fn_82437E38(param_1,0xc,0);
  fn_82437E38(param_1,0xd,0);
  fn_82437E38(param_1,0xe,0);
  return param_1;
}

