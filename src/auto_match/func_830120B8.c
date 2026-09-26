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
extern int fn_82FAB9C0();
extern int fn_83010BF0();
extern int fn_83011240();
extern int fn_83011CF8();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_4a;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_830120B8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  
  piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
  if (piVar1 != (int *)0x0) {
    uStack_5c = (undefined4)param_3;
    uStack_4c = 0;
    uStack_4a = 0;
    uStack_58 = 0;
    uStack_4b = 0;
    uStack_54 = param_5;
    uStack_50 = param_6;
    if (param_4 == 0) {
      fn_83011240(lbl_832642E4,param_2,param_3);
      uStack_60 = 0;
    }
    else if (param_4 == 1) {
      fn_83010BF0(lbl_832642E4,param_2,param_3,1);
      uStack_60 = 1;
    }
    else {
      if (2 < param_4) {
        return;
      }
      fn_83011CF8(lbl_832642E4,param_2,param_3,0);
      uStack_60 = 2;
    }
    (**(code **)(*piVar1 + 0x1c))(piVar1,&uStack_60);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

