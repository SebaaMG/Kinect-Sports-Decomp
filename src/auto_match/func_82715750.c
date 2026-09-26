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
extern int fn_8267C498();


void fn_82715750(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  param_2 = param_2 * 4;
  piVar2 = *(int **)(param_2 + *(int *)(param_1 + 0xa4));
  if (piVar2 != (int *)0x0) {
    if (((-(uint)((*(byte *)((int)piVar2 + 0x66) & 0x80) != 0) & (uint)piVar2) != 0) &&
       (cVar3 = (**(code **)(*piVar2 + 0x78))(piVar2), cVar3 != '\0')) {
      (**(code **)(*piVar2 + 0x74))(piVar2);
    }
    iVar1 = *(int *)(param_1 + 0xa4);
    if (*(int *)(param_2 + iVar1) != 0) {
      fn_8267C498();
    }
    *(undefined4 *)(param_2 + iVar1) = 0;
  }
  return;
}

