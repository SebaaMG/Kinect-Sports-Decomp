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
extern int fn_824CC9E8();
extern int fn_824CD030();
extern int fn_824D7320();
extern int fn_82F51FD0();
extern unsigned int lbl_821C0C34;
extern unsigned int lbl_821C0E54;


void fn_824D5FF8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_821C0E54;
  iVar1 = fn_824CD030();
  if (iVar1 != 0) {
    fn_824D7320(param_1,param_1 + 0x40);
    fn_824D7320(param_1,param_1 + 0x41);
    fn_824D7320(param_1,param_1 + 0x42);
    fn_824D7320(param_1,param_1 + 0x43);
    fn_824D7320(param_1,param_1 + 0x3c);
    fn_824D7320(param_1,param_1 + 0x3d);
    fn_824D7320(param_1,param_1 + 0x3e);
    fn_824D7320(param_1,param_1 + 0x3f);
    fn_824D7320(param_1,param_1 + 0x44);
    fn_824D7320(param_1,param_1 + 0x45);
    fn_824D7320(param_1,param_1 + 0x46);
    fn_824D7320(param_1,param_1 + 0x47);
    fn_824D7320(param_1,param_1 + 0x48);
    fn_824D7320(param_1,param_1 + 0x49);
    fn_824D7320(param_1,param_1 + 0x4a);
    fn_824D7320(param_1,param_1 + 0x4b);
    fn_824D7320(param_1,param_1 + 0x4c);
    fn_824D7320(param_1,param_1 + 0x4d);
    fn_824D7320(param_1,param_1 + 0x4e);
    fn_824D7320(param_1,param_1 + 0x4f);
    fn_824D7320(param_1,param_1 + 0x50);
    fn_824D7320(param_1,param_1 + 0x51);
    fn_824D7320(param_1,param_1 + 0x52);
    fn_824D7320(param_1,param_1 + 0x53);
    fn_824D7320(param_1,param_1 + 0x54);
    fn_824D7320(param_1,param_1 + 0x55);
    fn_824D7320(param_1,param_1 + 0x56);
  }
  fn_82F51FD0(param_1[8],0);
  *param_1 = &lbl_821C0C34;
  fn_824CC9E8(param_1);
  return;
}

