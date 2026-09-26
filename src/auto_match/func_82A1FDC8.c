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


void fn_82A1FDC8(int *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  uVar1 = param_1[1];
  trapWord(6,(ulonglong)uVar1,0);
  uVar3 = (((((param_2 & 0xffffffff) >> 8 ^ param_2) & 0xffffffff) >> 8 ^ param_2) & 0xffffffff) >>
          8 ^ param_2;
  if (param_1[0xd] != 0) {
    RtlEnterCriticalSection(param_1 + 6);
  }
  iVar2 = (int)((uVar3 - (longlong)(int)((uVar3 & 0xffffffff) / (ulonglong)uVar1) *
                         (longlong)(int)uVar1 & 0xffffffff) << 2);
  piVar5 = *(int **)(iVar2 + *param_1);
  piVar6 = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    do {
      piVar4 = piVar5;
      piVar5 = piVar4;
      if ((ulonglong)(uint)piVar4[1] == (param_2 & 0xffffffff)) break;
      piVar5 = (int *)*piVar4;
      piVar6 = piVar4;
    } while (piVar5 != (int *)0x0);
    if (piVar5 != (int *)0x0) {
      if (piVar6 == (int *)0x0) {
        *(int *)(iVar2 + *param_1) = *piVar5;
      }
      else {
        *piVar6 = *piVar5;
      }
      if (param_1[0xe] != 0) {
        uVar1 = piVar5[2];
        piVar5[2] = (int)((ulonglong)uVar1 - 1);
        if ((ulonglong)uVar1 - 1 == 0) {
          *piVar5 = param_1[2];
          param_1[2] = (int)piVar5;
        }
      }
    }
  }
  if (param_1[0xd] != 0) {
    RtlLeaveCriticalSection(param_1 + 6);
  }
  return;
}

