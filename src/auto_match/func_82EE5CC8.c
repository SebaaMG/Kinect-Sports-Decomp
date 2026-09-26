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
extern int fn_82E50BE8();
extern unsigned int iStack0000002c;
extern unsigned int stack0x0000002c;


undefined8 fn_82EE5CC8(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int iStack0000002c;
  
  if (param_2 == (int *)0x0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    iStack0000002c = param_4;
    if (param_4 == 0) {
      uVar3 = (**(code **)(*param_2 + 0x14))(param_2,0,&stack0x0000002c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      iStack0000002c = iStack0000002c - param_3;
    }
    if (param_1[3] == 0) {
      piVar4 = (int *)fn_82E50BE8(0x14,0,0,0,0);
    }
    else {
      piVar4 = (int *)param_1[4];
      param_1[3] = param_1[3] + -1;
      iVar1 = *piVar4;
      piVar5 = (int *)piVar4[1];
      *piVar5 = iVar1;
      *(int **)(iVar1 + 4) = piVar5;
    }
    iVar1 = iStack0000002c;
    if (piVar4 == (int *)0x0) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      piVar4[2] = (int)param_2;
      (**(code **)(*param_2 + 4))(param_2);
      piVar4[3] = param_3;
      piVar5 = param_1 + 1;
      piVar4[4] = iVar1;
      param_1[6] = param_1[6] + iStack0000002c;
      puVar2 = (undefined4 *)param_1[2];
      piVar4[1] = (int)puVar2;
      *piVar4 = (int)piVar5;
      *puVar2 = piVar4;
      param_1[2] = (int)piVar4;
      *param_1 = *param_1 + 1;
      piVar4 = (int *)(-(uint)(piVar5 != (int *)param_1[1]) & (uint)param_1[1]);
      do {
        if (piVar4 == (int *)0x0) break;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != piVar5);
      uVar3 = 0;
    }
  }
  return uVar3;
}

