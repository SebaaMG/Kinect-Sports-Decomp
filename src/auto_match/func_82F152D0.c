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
extern int fn_8265C940();
extern int fn_8265C990();


void fn_82F152D0(int param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) <= (int)param_2) {
    if (*(int *)(param_1 + 0x54) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x54),0x248c8000);
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(uint *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 0x58) = 0;
    lVar1 = ((ulonglong)param_2 & 0x3fffffff) << 2;
    if (0x3fffffff < param_2) {
      lVar1 = -1;
    }
    iVar2 = fn_8265C940(lVar1,0x248c8000);
    *(int *)(param_1 + 0x54) = iVar2;
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 == 0) {
      *param_3 = 1;
    }
  }
  return;
}

