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
extern int fn_82C108A8();


undefined8
fn_82C10710(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,int *param_7,int param_8)

{
  undefined8 uVar1;
  int *piVar2;
  
  if ((param_2 < 0) || (0x7e < param_2)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    piVar2 = (int *)(param_2 * 0xc + param_1);
    if (*piVar2 == 0) {
      uVar1 = 0xffffffff805000b6;
    }
    else {
      uVar1 = (*(code *)piVar2[1])(piVar2[2],param_4,param_5,param_6,param_7);
      if (param_8 != 0) {
        if (*param_7 == 1) {
          fn_82C108A8(param_1,param_7[4],param_7[2],param_7[3],param_7[5],1,param_2);
        }
        else if (*param_7 == 2) {
          uVar1 = 0xffffffff805000bd;
        }
      }
    }
  }
  return uVar1;
}

