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
extern int fn_829CB790();


ulonglong fn_829D02F0(ulonglong param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_30 [12];
  
  if (((param_1 & 0xffffffff) == 0) || (param_2 == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    aiStack_30[0] = 0;
    iVar3 = ObReferenceObjectByHandle(param_1,0xffffffff8315c408,aiStack_30);
    if (iVar3 < 0) {
      uVar2 = RtlNtStatusToDosError();
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0xffff | 0x80070000;
      }
    }
    else {
      piVar4 = (int *)(param_2 + -8);
      if ((uint)(((int)piVar4 - *(int *)(aiStack_30[0] + 0x1c)) / 0x78) <
          *(uint *)(aiStack_30[0] + 0x18)) {
        RtlEnterCriticalSection(0xffffffff8315c428);
        if (*(int *)(param_2 + 100) == 1) {
          iVar3 = *piVar4;
          piVar1 = *(int **)(param_2 + -4);
          *piVar1 = iVar3;
          *(int **)(iVar3 + 4) = piVar1;
          *(undefined4 *)(param_2 + 100) = 0;
          fn_829CB790(param_2 + 0x28);
          iVar3 = *(int *)(aiStack_30[0] + 0x24);
          *(undefined4 **)(param_2 + -4) = (undefined4 *)(aiStack_30[0] + 0x24);
          *piVar4 = iVar3;
          *(int **)(iVar3 + 4) = piVar4;
          *(undefined4 *)(aiStack_30[0] + 0x24) = piVar4;
          *(int *)(aiStack_30[0] + 0x2c) = *(int *)(aiStack_30[0] + 0x2c) + -1;
          RtlLeaveCriticalSection(0xffffffff8315c428);
          ObDereferenceObject(aiStack_30[0]);
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff80070057;
          RtlLeaveCriticalSection(0xffffffff8315c428);
          ObDereferenceObject(aiStack_30[0]);
        }
      }
      else {
        uVar2 = 0xffffffff80070057;
        ObDereferenceObject();
      }
    }
  }
  return uVar2;
}

