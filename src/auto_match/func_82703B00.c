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
extern int fn_82703910();


int * fn_82703B00(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = param_1[1];
  if (*(int *)(iVar3 + 0x48) != *param_1) {
    param_1[3] = 0;
    *param_1 = *(int *)(iVar3 + 0x48);
  }
  piVar5 = (int *)0x0;
  do {
    if (5 < param_1[3]) {
LAB_82703c0c:
      if (param_1[2] != 0) {
        fn_82703910(param_1[1]);
      }
      param_1[2] = (int)piVar5;
      return piVar5;
    }
    iVar2 = param_1[3] * 0xc;
    piVar5 = *(int **)(iVar2 + iVar3);
    if (piVar5 != (int *)0x0) {
      piVar1 = (int *)0x0;
      do {
        piVar4 = piVar5;
        piVar5 = piVar4;
        if (piVar4[0xf] == param_1[4]) break;
        piVar5 = (int *)*piVar4;
        piVar1 = piVar4;
      } while (piVar5 != (int *)0x0);
      if (piVar5 != (int *)0x0) {
        if (piVar1 == (int *)0x0) {
          *(int *)(iVar2 + iVar3) = *piVar5;
        }
        else {
          *piVar1 = *piVar5;
        }
        if (*piVar5 == 0) {
          *(int **)(param_1[3] * 0xc + param_1[1] + 8) = piVar1;
        }
        iVar3 = param_1[3] * 0xc + param_1[1];
        if (piVar5 == *(int **)(iVar3 + 4)) {
          if (*piVar5 == 0) {
            *(int **)(iVar3 + 4) = piVar1;
          }
          else {
            *(int *)(iVar3 + 4) = *piVar5;
          }
        }
        *piVar5 = 0;
        goto LAB_82703c0c;
      }
    }
    param_1[3] = param_1[3] + 1;
  } while( true );
}

