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
extern int fn_83000688();


void fn_83003848(int param_1,undefined8 param_2,int param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 == 0) {
    piVar3 = *(int **)(param_1 + 0x48);
    if (param_4 == (int *)0x0) {
      if (piVar3 != *(int **)(param_1 + 0x4c)) {
        do {
          fn_83000688(param_1,param_2,*piVar3,piVar3 + 1);
          piVar3 = piVar3 + 2;
        } while (piVar3 != *(int **)(param_1 + 0x4c));
        *(short *)(param_1 + 0x32) = (short)param_2;
        return;
      }
    }
    else if (piVar3 != *(int **)(param_1 + 0x4c)) {
      do {
        piVar2 = (int *)*param_4;
        bVar1 = false;
        if (piVar2 != (int *)param_4[1]) {
          do {
            if (*piVar2 == *piVar3) {
              bVar1 = true;
              break;
            }
            piVar2 = piVar2 + 1;
          } while (piVar2 != (int *)param_4[1]);
        }
        if (!bVar1) {
          fn_83000688(param_1,param_2,*piVar3,piVar3 + 1);
        }
        piVar3 = piVar3 + 2;
      } while (piVar3 != *(int **)(param_1 + 0x4c));
    }
    *(short *)(param_1 + 0x32) = (short)param_2;
  }
  else if (((*(byte *)(param_1 + 0x3d) & 0x20) != 0) || (*(int *)(param_1 + 0x10) == 0)) {
    for (piVar3 = *(int **)(param_1 + 0x48);
        (piVar3 != *(int **)(param_1 + 0x4c) && (*piVar3 != param_3)); piVar3 = piVar3 + 2) {
    }
    if ((-(uint)(*(int **)(param_1 + 0x4c) != piVar3) & (uint)(piVar3 + 1)) != 0) {
      fn_83000688(param_1,param_2);
    }
  }
  return;
}

