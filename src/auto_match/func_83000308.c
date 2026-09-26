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
extern int fn_82FA5190();
extern int fn_83027398();
extern unsigned int lbl_831BC768;


undefined8 fn_83000308(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1[0x19] == 0) {
    uVar1 = 2;
  }
  else {
    if (param_1[0x1d] != 0) {
      fn_82FA5190(lbl_831BC768);
      param_1[0x1d] = 0;
    }
    uVar1 = fn_83027398(param_1[0x19],param_2);
    (**(code **)(*param_1 + 0x48))((double)(longlong)(int)param_2,param_1);
  }
  return uVar1;
}

