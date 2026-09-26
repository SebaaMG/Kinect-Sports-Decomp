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
extern unsigned int *auStack_a0;
extern int fn_82F71B90();
extern int fn_82F71CD0();
extern int fn_82F71D30();
extern int fn_82F726A8();
extern int fn_82F77CB8();
extern int fn_82F780E4();
extern unsigned int lbl_832635A0;
extern unsigned int uRam832635a4;
extern unsigned int uRam832635a8;
extern unsigned int uRam832635ac;
extern unsigned int uRam832635b0;


undefined4
fn_82F78020(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined4 param_5,undefined2 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a0 [160];
  
  if ((param_4 != 0) && (iVar1 = fn_82F71B90(5), iVar1 != 0)) {
    fn_82F71CD0(5);
    uRam832635b0 = 0;
    uRam832635a8 = 0;
    uRam832635ac = 0;
    lbl_832635A0 = param_4;
    uRam832635a4 = param_5;
    fn_82F726A8(auStack_a0,param_1,param_2,param_3,0,param_6);
    uVar2 = fn_82F77CB8(auStack_a0);
    fn_82F71D30(0xffffffff832635a0);
    fn_82F780E4();
    return uVar2;
  }
  return 0;
}

