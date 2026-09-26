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
extern int fn_83018DD8();
extern unsigned int lbl_832642FC;


void fn_83005690(int *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 in_stack_00000054;
  
  if ((param_2 & 0xffffffff) == 0) {
    param_1[0x10] = 1 << ((uint)param_5 & 0x3f) | param_1[0x10];
    if (lbl_832642FC != 0) {
      (**(code **)(*param_1 + 0x138))();
      fn_83018DD8(lbl_832642FC,param_1,param_4,param_5,param_6,param_7,param_8,
                        in_stack_00000054);
    }
    (**(code **)(*param_1 + 0x120))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

