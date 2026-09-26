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


void fn_823DA0A0(double param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  param_2[6] = (int)(float)(param_1 + (double)(float)param_2[6]);
  while( true ) {
    if ((uint)param_2[3] < (uint)param_2[2]) {
      piVar4 = (int *)(param_2[3] * 0xc + param_2[1]);
    }
    else {
      piVar4 = (int *)0x0;
    }
    if ((piVar4 == (int *)0x0) || ((float)param_2[6] <= (float)piVar4[2])) break;
    (**(code **)(*param_2 + 0xc))(param_2,*piVar4,piVar4[1]);
    iVar2 = *piVar4 * 0x18 + param_2[5];
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar1 != 0) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(**(int **)(iVar2 + 0x10) + 4))();
    }
    uVar3 = param_2[2];
    if (param_2[3] + 1U < (uint)param_2[2]) {
      uVar3 = param_2[3] + 1U;
    }
    param_2[3] = uVar3;
  }
  return;
}

