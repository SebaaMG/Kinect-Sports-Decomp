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
extern int fn_8265C940();
extern int fn_82E233E0();
extern unsigned int lbl_8214BF70;
extern unsigned int lbl_8214BF74;
extern unsigned int lbl_821B4200;


longlong fn_82E23478(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)fn_8265C940(0x208,0x60908066);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)&lbl_821B4200;
    piVar1[2] = 1;
    *piVar1 = (int)&lbl_8214BF74;
    piVar1[1] = (int)&lbl_8214BF70;
  }
  if (piVar1 == (int *)0x0) {
    lVar2 = 0xe;
  }
  else {
    lVar2 = fn_82E233E0(piVar1,param_1);
    if (lVar2 == 0) {
      *param_2 = piVar1;
    }
    else {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  return lVar2;
}

