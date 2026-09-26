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
extern int fn_82E916B0();
extern int fn_82F17D48();


void fn_82E91820(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    if (0 < piVar1[4]) {
      piVar2 = (int *)*piVar1;
      iVar3 = *piVar2;
      *piVar1 = iVar3;
      if (iVar3 == 0) {
        piVar1[1] = 0;
      }
      iVar3 = piVar2[1];
      *piVar2 = piVar1[2];
      piVar1[2] = (int)piVar2;
      if (piVar1[3] == 0) {
        piVar1[3] = (int)piVar2;
      }
      piVar1[4] = piVar1[4] + -1;
      while (iVar3 != 0) {
        fn_82F17D48(iVar3);
        if (iVar3 != 0) {
          fn_8265C990(iVar3,0x248c8000);
        }
        piVar1 = *(int **)(param_1 + 0xc);
        if (piVar1[4] < 1) break;
        piVar2 = (int *)*piVar1;
        iVar3 = *piVar2;
        *piVar1 = iVar3;
        if (iVar3 == 0) {
          piVar1[1] = 0;
        }
        iVar3 = piVar2[1];
        *piVar2 = piVar1[2];
        piVar1[2] = (int)piVar2;
        if (piVar1[3] == 0) {
          piVar1[3] = (int)piVar2;
        }
        piVar1[4] = piVar1[4] + -1;
      }
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 != 0) {
      fn_82E916B0(iVar3);
      fn_8265C990(iVar3,0x248c8000);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

