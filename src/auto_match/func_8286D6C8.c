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
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8287A4E0();
extern unsigned int lbl_8201FBC8;
extern unsigned int lbl_82186E64;


int * fn_8286D6C8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                   undefined8 param_5)

{
  ulonglong uVar1;
  int *apiStack_40 [10];
  
  uVar1 = fn_8265C9E0(0x58);
  if ((uVar1 & 0xffffffff) == 0) {
    apiStack_40[0] = (int *)0x0;
  }
  else {
    apiStack_40[0] = (int *)fn_8287A4E0(param_1,param_2,param_3,uVar1,param_5);
  }
  if (apiStack_40[0] != (int *)0x0) {
    (**(code **)(*apiStack_40[0] + 0x24))((double)lbl_8201FBC8,(double)lbl_82186E64);
    fn_8257A9F0(param_4 + 4,apiStack_40);
  }
  return apiStack_40[0];
}

