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
extern int fn_82A5A8E0();
extern int fn_82A5A9E0();


ulonglong fn_82A5ABE8(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = fn_82A5A8E0(param_1 + 0x84,param_3);
  }
  else {
    for (piVar1 = *(int **)(param_1 + 0x150); (piVar1 != (int *)0x0 && (*piVar1 != param_2));
        piVar1 = (int *)piVar1[1]) {
    }
    lVar2 = fn_82A5A9E0(param_1 + 0x84,piVar1);
  }
  return -(ulonglong)(lVar2 == 0) & 0xffffffff8007000e;
}

