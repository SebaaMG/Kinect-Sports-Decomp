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
extern int fn_82BE19A0();
extern int fn_82BE5240();
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern int fn_82F6D460();
extern unsigned int lbl_8322B1DC;


void fn_82BE7850(uint param_1,undefined4 param_2,ulonglong param_3)

{
  int iVar1;
  
  if ((lbl_8322B1DC != 0) && (param_1 < 0x10)) {
    fn_82BEA1F8(0xffffffff8322b1ec,0xffffffff820e99e8);
    *(undefined4 *)(param_1 * 0xc + -0x7ce8adb8) = param_2;
    if (((param_3 & 0xffffffff) != 0) && (iVar1 = fn_82F6D460(param_3,0x100), iVar1 != 0)) {
      iVar1 = fn_82BE19A0(param_3);
      *(int *)(param_1 * 0xc + -0x7ce8adb0) = iVar1;
      if (iVar1 == 0) {
        fn_82BE5240(lbl_8322B1DC,0x65,0xffffffff82196582);
      }
    }
    fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e99e8);
  }
  return;
}

