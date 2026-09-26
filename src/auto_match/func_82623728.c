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
extern int fn_82522ED8();


void fn_82623728(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  piVar2 = *(int **)(param_1 + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[1];
    if (*piVar2 != 0) {
      *(int **)(*piVar2 + 4) = piVar1;
    }
    if ((int *)piVar2[1] != (int *)0x0) {
      *(int *)piVar2[1] = *piVar2;
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    fn_82522ED8();
    piVar2 = piVar1;
  }
  *(int *)(param_1 + 0x20) = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_82522ED8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

