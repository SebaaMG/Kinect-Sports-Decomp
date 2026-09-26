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
extern int fn_83006528();
extern int fn_830182F0();
extern unsigned int lbl_832642FC;


void fn_830066E0(int *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char acStack_20 [8];
  
  if ((param_2 & 0xffffffff) == 0) {
    acStack_20[0] = '\0';
    if (lbl_832642FC != 0) {
      fn_830182F0(lbl_832642FC,param_1,param_4,param_5,acStack_20);
    }
    if (acStack_20[0] == '\0') {
      param_1[0x10] = param_1[0x10] & ~(1 << ((uint)param_4 & 0x3f));
    }
    (**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)(*param_1 + 0x120))(param_1);
  }
  else {
    fn_83006528(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

