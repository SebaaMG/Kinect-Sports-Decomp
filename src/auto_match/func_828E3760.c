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
extern int fn_8289DF30();
extern U64 storeWordConditionalIndexed();


void fn_828E3760(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte in_cr0;
  
  RtlEnterCriticalSection(param_1 + 3);
  uVar6 = (ulonglong)(uint)param_1[1];
  puVar1 = (undefined4 *)*param_1;
  if (uVar6 != 0) {
    do {
      puVar5 = (uint *)(uVar6 + 4);
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,uVar6 + 4);
        *puVar5 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  RtlLeaveCriticalSection(param_1 + 3);
  piVar2 = *(int **)*puVar1;
  piVar3 = (int *)*piVar2;
  if (piVar3 != piVar2) {
    do {
      piVar2 = (int *)piVar3[2];
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined1 *)(piVar2 + 1) = 0;
      (**(code **)(*piVar2 + 0xc))(piVar2);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)*puVar1);
  }
  if (uVar6 != 0) {
    fn_8289DF30(uVar6);
  }
  return;
}

