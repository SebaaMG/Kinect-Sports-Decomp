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


void fn_830178D8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar8);
  puVar6 = *(undefined4 **)(param_1 + 0x6c0);
  puVar3 = (undefined4 *)0x0;
  while (puVar2 = puVar6, puVar2 != (undefined4 *)0x0) {
    if (puVar2[1] == param_2) {
      if (puVar2 == *(undefined4 **)(param_1 + 0x6c0)) {
        *(undefined4 *)(param_1 + 0x6c0) = *puVar2;
      }
      else {
        *puVar3 = *puVar2;
      }
      if (puVar2 == *(undefined4 **)(param_1 + 0x6c4)) {
        *(undefined4 **)(param_1 + 0x6c4) = puVar3;
      }
      *puVar2 = *(undefined4 *)(param_1 + 0x6c8);
      *(undefined4 **)(param_1 + 0x6c8) = puVar2;
      *(int *)(param_1 + 0x6d4) = *(int *)(param_1 + 0x6d4) + -1;
      RtlLeaveCriticalSection(iVar8);
      return;
    }
    puVar3 = puVar2;
    puVar6 = (undefined4 *)*puVar2;
  }
  piVar1 = *(int **)(param_1 + 0x6e0);
  if (piVar1 == (int *)0x0) {
LAB_83017a1c:
    RtlLeaveCriticalSection(iVar8);
  }
  else {
    do {
      piVar7 = (int *)piVar1[6];
      piVar5 = (int *)0x0;
      while (piVar4 = piVar7, piVar4 != (int *)0x0) {
        if (piVar4[1] == param_2) {
          if (piVar4 == (int *)piVar1[6]) {
            piVar1[6] = *piVar4;
          }
          else {
            *piVar5 = *piVar4;
          }
          if (piVar4 == (int *)piVar1[7]) {
            piVar1[7] = (int)piVar5;
          }
          *piVar4 = piVar1[8];
          piVar1[8] = (int)piVar4;
          piVar1[0xb] = piVar1[0xb] + -1;
          goto LAB_83017a1c;
        }
        piVar5 = piVar4;
        piVar7 = (int *)*piVar4;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
    RtlLeaveCriticalSection(iVar8);
  }
  return;
}

