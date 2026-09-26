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
extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


int * fn_82FF7548(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  RtlEnterCriticalSection(param_1 + 0x50);
  piVar2 = (int *)(param_1 + 0x6c);
  if (param_3 != 1) {
    piVar2 = (int *)(param_1 + 0x78);
  }
  for (piVar1 = (int *)*piVar2; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if (param_2 == piVar1[4]) goto switchD_82f20fb0_default;
  }
  piVar1 = (int *)fn_82FA5060(lbl_831BC768,0x20);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = param_2;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    if (*piVar2 == 0) {
      piVar2[1] = (int)piVar1;
      *piVar2 = (int)piVar1;
      *piVar1 = 0;
    }
    else {
      *piVar1 = *piVar2;
      *piVar2 = (int)piVar1;
    }
    piVar2[2] = piVar2[2] + 1;
  }
switchD_82f20fb0_default:
  RtlLeaveCriticalSection(param_1 + 0x50);
  return piVar1;
}

