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
extern int fn_826358D8();
extern int fn_8265C990();


longlong fn_82635978(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x4db0) - 1;
  *(int *)(param_1 + 0x4db0) = (int)lVar1;
  if (lVar1 == 0) {
    if (*(int **)(param_1 + 0x4db8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4db8) + 4))();
      *(undefined4 *)(param_1 + 0x4db8) = 0;
    }
    if (*(int *)(param_1 + 0x4de4) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x4de4),0x24800000);
    }
    if (*(int *)(param_1 + 0x4dd0) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x4dd0),0x24800000);
    }
    if (*(int *)(param_1 + 0x4dc4) != 0) {
      fn_8265C990(*(int *)(param_1 + 0x4dc4),0x24800000);
    }
    iVar3 = param_1 + 0x4db0;
    lVar2 = 1;
    do {
      iVar3 = iVar3 + -0x26d0;
      fn_826358D8(iVar3);
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
    fn_8265C990(param_1,0x24800000);
  }
  return lVar1;
}

