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
extern unsigned int lbl_83217128;


int * fn_829CFAB0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  RtlEnterCriticalSection(0xffffffff8315c428);
  iVar2 = (&lbl_83217128)[param_1];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x38) == 0)) {
    piVar3 = *(int **)(iVar2 + 0x24);
    if (piVar3 == (int *)(iVar2 + 0x24)) {
      piVar3 = *(int **)(iVar2 + 0x20);
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    else {
      iVar2 = *piVar3;
      piVar1 = (int *)piVar3[1];
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
    }
    piVar3[0x1b] = 2;
  }
  RtlLeaveCriticalSection(0xffffffff8315c428);
  return piVar3;
}

