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


undefined8 fn_82EE5E28(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_2 != 0) && (*param_1 != 0)) {
    if ((uint)param_1[6] < param_2) {
      return 0xffffffff80070057;
    }
    while (param_2 != 0) {
      piVar4 = (int *)param_1[1];
      uVar1 = piVar4[4];
      if (param_2 < uVar1) {
        piVar4[4] = uVar1 - param_2;
        piVar4[3] = param_2 + piVar4[3];
        param_1[6] = param_1[6] - param_2;
        return 0;
      }
      param_1[6] = param_1[6] - uVar1;
      param_2 = param_2 - piVar4[4];
      if (*param_1 != 0) {
        *param_1 = *param_1 + -1;
        iVar2 = *piVar4;
        piVar3 = (int *)piVar4[1];
        *piVar3 = iVar2;
        *(int **)(iVar2 + 4) = piVar3;
      }
      (**(code **)(*(int *)piVar4[2] + 8))();
      piVar4[2] = 0;
      iVar2 = param_1[4];
      piVar4[1] = (int)(param_1 + 4);
      *piVar4 = iVar2;
      *(int **)(iVar2 + 4) = piVar4;
      param_1[4] = (int)piVar4;
      param_1[3] = param_1[3] + 1;
    }
    piVar4 = (int *)(-(uint)(param_1 + 1 != (int *)param_1[1]) & (uint)param_1[1]);
    do {
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != param_1 + 1);
  }
  return 0;
}

