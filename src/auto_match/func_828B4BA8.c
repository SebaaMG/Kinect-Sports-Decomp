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
extern int fn_828B30E8();
extern int fn_828B3DF8();
extern int fn_828B4B00();


void fn_828B4BA8(int param_1,longlong param_2)

{
  int *piVar1;
  int aiStack_30 [12];
  
  param_2 = param_2 + 0x30;
  piVar1 = (int *)fn_828B3DF8(aiStack_30,param_1 + 0x54,param_2);
  if (*piVar1 != *(int *)(param_1 + 0x58)) {
    fn_828B4B00(param_1,0,param_2);
  }
  fn_828B3DF8(aiStack_30,param_1 + 0x44,param_2);
  if (aiStack_30[0] != *(int *)(param_1 + 0x48)) {
    fn_828B30E8(aiStack_30,param_1 + 0x44);
  }
  return;
}

