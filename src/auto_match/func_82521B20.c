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
extern int fn_82522ED8();
extern int fn_82F63CA0();
extern U64 storeWordConditionalIndexed();


void fn_82521B20(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  char in_RESERVE;
  byte in_cr0;
  
  RtlEnterCriticalSection(param_1 + 4);
  puVar5 = (undefined4 *)param_1;
  piVar1 = (int *)puVar5[8];
  if (piVar1 != (int *)puVar5[9]) {
    do {
      puVar2 = (undefined4 *)*piVar1;
      (**(code **)*puVar5)(param_1,*puVar2);
      iVar3 = puVar2[1];
      if (iVar3 != 0) {
        lVar6 = (ulonglong)*(uint *)(iVar3 + 0xc) - 1;
        in_cr0 = (lVar6 == 0) << 1;
        *(int *)(iVar3 + 0xc) = (int)lVar6;
        if (lVar6 < 1) {
          fn_82522ED8();
        }
      }
      fn_82522ED8(puVar2);
      fn_82F63CA0(piVar1,piVar1 + 1,(puVar5[9] - (int)(piVar1 + 1) >> 2) << 2);
      puVar5[9] = puVar5[9] + -4;
    } while (piVar1 != (int *)puVar5[9]);
  }
  RtlLeaveCriticalSection(param_1 + 4);
  do {
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(0,0,param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0xa0) = uVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

