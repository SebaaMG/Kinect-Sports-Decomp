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
extern unsigned int lbl_8202971C;


longlong fn_828F9B30(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    lVar1 = -0x7789f794;
  }
  else {
    piVar2 = (int *)fn_8265C940(0x10,0x24810000);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[3] = 0;
      *piVar2 = (int)&lbl_8202971C;
      piVar2[2] = 0;
      piVar2[1] = 1;
    }
    if (piVar2 == (int *)0x0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      lVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,param_1);
      if (lVar1 < 0) {
        (**(code **)(*piVar2 + 0x14))(piVar2,1);
      }
      else {
        *param_2 = piVar2;
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}

