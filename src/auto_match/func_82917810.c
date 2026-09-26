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


void fn_82917810(int param_1,int param_2,short *param_3,int param_4,int *param_5,int *param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (param_3[5] == 0) {
    if (*(short *)(param_2 + 4) == 0) {
      uVar4 = (uint)(ushort)param_3[3];
      uVar1 = param_3[2];
    }
    else {
      if (*param_3 == 3) {
        uVar2 = param_3[2];
        uVar1 = param_3[3];
      }
      else {
        uVar2 = param_3[3];
        uVar1 = param_3[2];
      }
      uVar4 = (int)(uVar2 + 3) >> 2;
    }
    *param_5 = uVar4 * uVar1 * param_4 + *param_5;
    *param_6 = (uint)(ushort)param_3[3] * (uint)(ushort)param_3[2] * param_4 + *param_6;
  }
  else {
    uVar4 = 0;
    if (param_3[5] != 0) {
      piVar5 = (int *)(*(int *)(param_3 + 6) + *(int *)(param_1 + 8) + 4);
      do {
        if (*piVar5 != 0) {
          iVar3 = *piVar5 + *(int *)(param_1 + 8);
          fn_82917810(param_1,param_2,iVar3,
                        (longlong)(int)(uint)*(ushort *)(iVar3 + 8) * (longlong)param_4,param_5,
                        param_6);
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 < (ushort)param_3[5]);
    }
  }
  return;
}

