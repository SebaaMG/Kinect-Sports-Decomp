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
extern int fn_82BE57C0();
extern int fn_82BE70C0();
extern int fn_82BE7678();
extern int fn_82BE89E0();
extern int fn_82BE8FB8();
extern int fn_82BE90E0();
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern unsigned int *lbl_8322B130;
extern unsigned int *lbl_8322B134;


undefined8 fn_82BE1A20(void)

{
  undefined8 uVar1;
  
  fn_82BEA1F8(0xffffffff8322b13c,0xffffffff820e8994);
  if (lbl_8322B130 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    fn_82BE7678();
    fn_82BE70C0();
    fn_82BE89E0();
    fn_82BE90E0();
    uVar1 = fn_82BE8FB8();
    if (lbl_8322B134 != (undefined4 *)0x0) {
      (**(code **)*lbl_8322B134)(lbl_8322B134,1);
      lbl_8322B134 = (undefined4 *)0x0;
    }
    if (lbl_8322B130 != (undefined4 *)0x0) {
      (**(code **)*lbl_8322B130)(lbl_8322B130,1);
    }
    lbl_8322B130 = (undefined4 *)0x0;
    fn_82BE57C0();
  }
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8994);
  return uVar1;
}

