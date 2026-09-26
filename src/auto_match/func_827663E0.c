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
extern int fn_8267B890();
extern int fn_8267BE38();
extern unsigned int lbl_831E7E64;


void fn_827663E0(undefined4 *param_1,ulonglong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 auStack_30 [12];
  
  if ((ulonglong)(uint)param_1[2] < (param_2 & 0xffffffff)) {
    fn_8267BE38(*param_1);
    param_3 = param_2 + param_3;
    param_1[2] = (int)param_3;
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      auStack_30[0] = 2;
      uVar1 = fn_8267B890(lbl_831E7E64,param_3,auStack_30);
    }
    *param_1 = uVar1;
  }
  param_1[1] = 0;
  return;
}

