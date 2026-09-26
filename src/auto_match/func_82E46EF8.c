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
extern unsigned int *auStack_40;
extern int fn_82F68CC0();


longlong fn_82E46EF8(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 auStack_40 [16];
  
  auStack_40[0] = 0;
  if (param_2 < *(uint *)(param_1 + 100)) {
    piVar1 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x74));
    if (piVar1 == (int *)0x0) {
      lVar3 = -0x7fff0001;
    }
    else {
      lVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,auStack_40);
      if (-1 < lVar3) {
        iVar2 = param_2 * 4 + *(int *)(param_1 + 0x74);
        fn_82F68CC0(iVar2,iVar2 + 4,(*(int *)(param_1 + 100) - param_2) - 1 & 0x3fffffff);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
  }
  else {
    lVar3 = -0x7ff8ffa9;
  }
  return lVar3;
}

