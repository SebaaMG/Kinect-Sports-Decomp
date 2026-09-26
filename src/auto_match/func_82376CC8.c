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
extern int fn_82529320();
extern int fn_82575DF0();
extern int fn_8265CA20();


int * fn_82376CC8(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2 + 0x74;
    lVar3 = 3;
    do {
      if (*piVar4 != 0) {
        fn_82575DF0(*(undefined4 *)(*(int *)(*piVar2 + 0x4c) + 0x93c));
        *piVar4 = 0;
      }
      lVar3 = lVar3 + -1;
      piVar4 = piVar4 + 1;
    } while (lVar3 != 0);
    if (*piVar2 != 0) {
      fn_82529320(*piVar2,0);
      *piVar2 = 0;
    }
    puVar1 = (undefined4 *)piVar2[0x834];
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    piVar2[0x834] = 0;
    piVar4 = (int *)piVar2[0x858];
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4,piVar2 + 0x854 != piVar4);
      piVar2[0x858] = 0;
    }
    fn_8265CA20(piVar2);
    return piVar2;
  }
  return (int *)0x0;
}

