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
extern int fn_82366AE8();
extern int fn_825604A0();


void fn_82358BC8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_2 == 0x52) {
    for (piVar2 = *(int **)(param_1 + 0x30); piVar2 != *(int **)(param_1 + 0x34);
        piVar2 = piVar2 + 2) {
      iVar1 = *piVar2;
      *(int *)(iVar1 + 0x230) = *(int *)(iVar1 + 0x22c);
      if (*(int *)(iVar1 + 0x22c) != 0) {
        fn_825604A0(iVar1 + 0x20);
        *(undefined4 *)(iVar1 + 0x22c) = 0;
      }
    }
  }
  else if (*param_2 == 0x53) {
    for (piVar2 = *(int **)(param_1 + 0x30); piVar2 != *(int **)(param_1 + 0x34);
        piVar2 = piVar2 + 2) {
      fn_82366AE8(*piVar2,*(undefined4 *)(*piVar2 + 0x230));
    }
  }
  return;
}

