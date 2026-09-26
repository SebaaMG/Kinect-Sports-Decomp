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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


void fn_827DA660(int param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  undefined4 auStack_40 [4];
  undefined1 auStack_30 [32];
  
  if (param_3 != 0xffffffff) {
    if (param_3 < 0x40) {
      piVar1 = *(int **)((param_3 + 0x295) * 4 + param_1);
    }
    else {
      piVar1 = (int *)0x0;
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,param_2);
      return;
    }
  }
  auStack_40[0] = 3;
  fn_82811438(auStack_30,auStack_40,0x10);
  (**(code **)(*(int *)lbl_83156AA0 + 0x18))(lbl_83156AA0,param_2,auStack_30);
  return;
}

