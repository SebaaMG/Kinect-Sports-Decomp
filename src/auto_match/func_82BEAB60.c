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
extern int fn_82BE5240();
extern int fn_82BEB838();


void fn_82BEAB60(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x14) == 0x1033) {
    fn_82BE5240(param_1,0x12e,0xffffffff820eacf8,*(undefined4 *)(param_1 + 0x38));
    uVar1 = 0;
  }
  else {
    if ((*(int *)(param_2 + 0x14) != 0x1065) ||
       (fn_82BE5240(param_1,0x199,0xffffffff820eacf8,*(undefined4 *)(param_1 + 0x38)),
       *(int *)(param_1 + 0x10) != 0xf)) goto LAB_82beabd8;
    uVar1 = 4;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
LAB_82beabd8:
  fn_82BEB838(param_1,param_2);
  return;
}

