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
extern int fn_8265C990();


void fn_82A374A0(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = 2;
  piVar1 = param_1;
  do {
    piVar3 = piVar1 + 10;
    if (*piVar3 != 0) {
      if (piVar1[5] == 0x103) {
        NtWaitForSingleObjectEx(*piVar3,1,0,0);
        piVar1[5] = piVar1[6];
        piVar1[4] = piVar1[7];
      }
      NtClose(*piVar3);
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      *piVar3 = 0;
    }
    if ((param_1[0x16] != 0) && (piVar1[3] != 0)) {
      fn_8265C990(piVar1[3],0x24830000);
    }
    piVar1[3] = 0;
    lVar2 = lVar2 + -1;
    piVar1[5] = 0;
    piVar1 = piVar3;
  } while (lVar2 != 0);
  *param_1 = 0;
  param_1[0x16] = 0;
  return;
}

