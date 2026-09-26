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
extern int fn_82BE6720();
extern int fn_82BE6760();
extern int fn_82BE67A0();
extern int fn_82BE67E0();
extern int fn_82BE6A00();
extern int fn_82BE6C60();
extern int fn_82BE6E28();
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D0;


undefined8
fn_82BF5790(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5,ulonglong param_6)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82BE6720(param_1,0x47,0);
  if (((((((iVar2 != 0) && (iVar2 = fn_82BE6E28(param_1,param_2,0), iVar2 != 0)) &&
         (iVar2 = fn_82BE6720(param_1,0x3d,0), iVar2 != 0)) &&
        ((iVar2 = fn_82BE6E28(param_1,param_3,0), iVar2 != 0 &&
         (iVar2 = fn_82BE6720(param_1,0x2a,0), iVar2 != 0)))) &&
       ((iVar2 = fn_82BE67E0(param_1,lbl_8322B1D0,0), iVar2 != 0 &&
        ((iVar2 = fn_82BE6720(param_1,0x2b,0), iVar2 != 0 &&
         (iVar2 = fn_82BE67E0(param_1,lbl_8322B1C8,0), iVar2 != 0)))))) &&
      (iVar2 = fn_82BE6A00(param_1), iVar2 != 0)) &&
     (((((param_4 & 0xffffffff) == 0 || ((param_5 & 0xffffffff) == 0)) || ((param_6 & 0xffff) == 0))
      || ((((iVar2 = fn_82BE6720(param_1,0x10,0), iVar2 != 0 &&
            (iVar2 = fn_82BE67A0(param_1,param_4,0), iVar2 != 0)) &&
           ((iVar2 = fn_82BE6720(param_1,0x11,0), iVar2 != 0 &&
            ((iVar2 = fn_82BE67A0(param_1,param_5,0), iVar2 != 0 &&
             (iVar2 = fn_82BE6720(param_1,0x12,0), iVar2 != 0)))))) &&
          (iVar2 = fn_82BE6760(param_1,param_6,0), iVar2 != 0)))))) {
    uVar1 = fn_82BE6C60(param_1,0xcd,1,1);
    return uVar1;
  }
  return 0;
}

