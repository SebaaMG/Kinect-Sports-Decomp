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
extern int fn_824BD858();
extern int fn_824CD030();


void fn_8236A880(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x20));
  piVar1 = (int *)*piVar2;
  if (piVar2[1] - (int)piVar1 >> 2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((iVar3 != 0) && (iVar3 = fn_824CD030(), iVar3 != 0)) {
    param_1 = (param_3 + 0x1b) * 0x10 + param_1;
    fn_824BD858((double)*(float *)(param_1 + 8),(double)*(float *)(param_1 + 0xc));
  }
  return;
}

