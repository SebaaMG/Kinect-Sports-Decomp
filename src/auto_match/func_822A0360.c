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
extern int fn_82F63108();
extern unsigned int iStack_c;


void fn_822A0360(int param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iStack_c;
  
  cVar5 = *param_2;
  cVar3 = 'p';
  cVar4 = cVar5;
  if (cVar5 == 'p') {
    cVar4 = 'p';
    pcVar2 = param_2;
    do {
      pcVar2 = pcVar2 + 1;
      if (cVar4 == '\0') goto LAB_822a03bc;
      cVar3 = pcVar2[(int)"playerDisplayFlagChange" - (int)param_2];
      cVar4 = *pcVar2;
    } while (cVar4 == cVar3);
  }
  if (cVar4 == cVar3) {
LAB_822a03bc:
    iStack_c = (int)(longlong)*(double *)(param_3 + 8);
    *(uint *)((iStack_c + 0x15) * 4 + param_1) = (uint)*(byte *)(param_3 + 0x18);
  }
  else {
    cVar4 = 's';
    if (cVar5 == 's') {
      iVar1 = (int)"scoreboardReady" - (int)param_2;
      cVar5 = 's';
      do {
        param_2 = param_2 + 1;
        if (cVar5 == '\0') goto LAB_822a042c;
        cVar4 = param_2[iVar1];
        cVar5 = *param_2;
      } while (cVar5 == cVar4);
    }
    if (cVar5 == cVar4) {
LAB_822a042c:
      iStack_c = (int)(longlong)*(double *)(param_3 + 8);
      *(undefined4 *)((iStack_c + 5) * 4 + param_1) = 1;
      if (*(int *)(param_1 + 0x130) != 0) {
        if (*(int *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (**(code **)(**(int **)(param_1 + 0x130) + 4))();
      }
    }
  }
  return;
}

