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
extern int fn_822B98F8();
extern int fn_82554860();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_822B99C0(int param_1,undefined8 param_2)

{
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      fn_822B98F8();
    }
    if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
      uStack_5c = lbl_821CA460;
      uStack_58 = lbl_821CC160;
      uStack_60 = 0x4d697850;
      uStack_4c = lbl_821CC160;
      uStack_54 = 0x20;
      uStack_50 = lbl_821917C0;
      uStack_48 = 0;
      uStack_40 = lbl_821917C0;
      uStack_44 = 0x40;
      uStack_3c = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      fn_82554860(*(int *)(param_1 + 0x20),0,param_2,&uStack_60);
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
  }
  return;
}

