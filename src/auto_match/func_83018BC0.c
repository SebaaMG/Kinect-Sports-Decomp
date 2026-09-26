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
extern int fn_82FA5190();
extern int fn_83018220();
extern int fn_8301A058();
extern unsigned int lbl_831BC768;


void fn_83018BC0(int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar3);
  piVar2 = *(int **)(param_1 + 0x6e0);
  piVar4 = (int *)0x0;
  if (*(int **)(param_1 + 0x6e0) == (int *)0x0) {
LAB_83018cc4:
    RtlLeaveCriticalSection(iVar3);
  }
  else {
    do {
      piVar5 = piVar2;
      if ((ulonglong)(uint)piVar5[1] == (param_2 & 0xffffffff)) {
        if (piVar5[3] != 0) {
          fn_82FA5190(lbl_831BC768);
          piVar5[3] = 0;
        }
        piVar5[4] = 0;
        piVar5[5] = 0;
        for (puVar1 = (undefined4 *)piVar5[6]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          fn_83018220(param_1,puVar1[1],param_2,1);
        }
        fn_8301A058(piVar5 + 6);
        if (piVar5 == *(int **)(param_1 + 0x6e0)) {
          *(int *)(param_1 + 0x6e0) = *piVar5;
        }
        else {
          *piVar4 = *piVar5;
        }
        if (piVar5 == *(int **)(param_1 + 0x6e4)) {
          *(int **)(param_1 + 0x6e4) = piVar4;
        }
        *piVar5 = *(int *)(param_1 + 0x6e8);
        *(int **)(param_1 + 0x6e8) = piVar5;
        *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + -1;
        goto LAB_83018cc4;
      }
      piVar2 = (int *)*piVar5;
      piVar4 = piVar5;
    } while ((int *)*piVar5 != (int *)0x0);
    RtlLeaveCriticalSection(iVar3);
  }
  return;
}

