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
extern unsigned int *auStack_af;
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A9A860();
extern int fn_82F691F0();
extern unsigned int lbl_820D28B4;


void fn_82A9E960(int param_1,undefined8 param_2)

{
  undefined1 auStack_af [175];
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2da0);
  fn_82A9A860(param_2);
  if (*(uint *)(param_1 + 0x10) < *(int *)(param_1 + 0x14) * 0x1dc + *(uint *)(param_1 + 0x10)) {
    fn_82A99BC8(param_2,0xffffffff82010000,0xffffffff820d0000,0xffffffff821d0000,
                  0xffffffff820d0000,0xffffffff82020000,0xffffffff820276c0,0xffffffff82030000);
    fn_82A99B70(param_2,&lbl_820D28B4,0xffffffff820014b8);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_af,0,0xf);
  }
  fn_82A99C28(param_2,0xffffffff820d2da0);
  return;
}

