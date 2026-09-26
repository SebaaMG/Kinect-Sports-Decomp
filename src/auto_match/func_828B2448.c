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
extern int fn_825089A0();
extern int fn_828B2DE8();
extern int fn_828B2E60();


bool fn_828B2448(int param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar4;
  int *piVar5;
  longlong lVar2;
  longlong lVar3;
  
  piVar5 = (int *)**(int **)(param_1 + 0xc);
  if (piVar5 != *(int **)(param_1 + 0xc)) {
    do {
      uVar1 = (**(code **)(*(int *)piVar5[2] + 8))();
      if (((uVar1 & 0xffffffff) != 0) &&
         (plVar4 = (longlong *)fn_828B2DE8(), *plVar4 == *param_2)) {
        piVar5 = (int *)fn_825089A0();
        lVar2 = (**(code **)(*piVar5 + 0xc))();
        lVar3 = fn_828B2E60(uVar1);
        return (ulonglong)(lVar2 - lVar3) < 0x15e;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0xc));
  }
  return false;
}

