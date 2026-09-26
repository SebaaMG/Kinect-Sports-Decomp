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


void fn_82521C00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  RtlEnterCriticalSection(param_1 + 1);
  piVar5 = (int *)param_1[8];
  if (piVar5 != (int *)param_1[9]) {
    piVar4 = piVar5 + 1;
    do {
      puVar1 = (undefined4 *)*piVar5;
      if (param_2 == puVar1) {
        (**(code **)*param_1)(param_1,*puVar1);
        iVar2 = puVar1[1];
        if (iVar2 != 0) {
          lVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) - 1;
          *(int *)(iVar2 + 0xc) = (int)lVar3;
          if (lVar3 < 1) {
            fn_82522ED8();
          }
        }
        fn_82522ED8(puVar1);
        fn_82F63CA0(piVar5,piVar4,(param_1[9] - (int)piVar4 >> 2) << 2);
        param_1[9] = param_1[9] + -4;
      }
      else {
        piVar5 = piVar5 + 1;
        piVar4 = piVar4 + 1;
      }
    } while (piVar5 != (int *)param_1[9]);
  }
  RtlLeaveCriticalSection(param_1 + 1);
  return;
}

