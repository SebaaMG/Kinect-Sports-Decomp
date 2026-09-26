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
extern int fn_82E50BE8();
extern int fn_82EE8BB8();
extern int fn_82EE8C68();
extern int fn_82EEAC40();
extern unsigned int lbl_82160048;


longlong fn_82EEACD0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)fn_82E50BE8(0xb8,0,0,0,0);
  if (piVar1 == (int *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    fn_82EE8BB8(piVar1);
    *piVar1 = (int)&lbl_82160048;
    lVar2 = fn_82EEAC40(piVar1,param_2,param_1);
    if (lVar2 < 0) {
      fn_82EE8C68(piVar1);
    }
    else {
      *param_3 = piVar1;
      (**(code **)(*piVar1 + 4))();
    }
  }
  return lVar2;
}

