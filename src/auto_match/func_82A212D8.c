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
extern int fn_82A1E228();
extern int fn_82A1FBD8();
extern unsigned int lbl_8315D2F0;
extern unsigned int uStack_20;


void fn_82A212D8(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uStack_20;
  
  RtlEnterCriticalSection();
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  fn_82A1E228(&uStack_20);
  *(undefined1 *)((int)param_2 + 0x1a) = 1;
  param_2[4] = (int)(uStack_20 / 10000000) - (int)lbl_8315D2F0;
  fn_82A1FBD8(param_1,param_2);
  RtlLeaveCriticalSection();
  return;
}

