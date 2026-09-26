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
extern int fn_8282EB50();


void fn_8282F098(undefined4 *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 auStack_30 [12];
  
  uVar1 = param_2 - (int)param_1;
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    auStack_30[0] = *(undefined4 *)((int)param_1 + (uVar1 - 4));
    *(undefined4 *)((int)param_1 + (uVar1 - 4)) = *param_1;
    fn_8282EB50(param_1,0,(int)(uVar1 - 4) >> 2,auStack_30,param_3);
    uVar1 = uVar1 - 4;
  }
  return;
}

