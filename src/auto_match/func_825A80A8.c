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
extern int fn_8251E530();
extern int fn_82CE4118();
extern int fn_82D88AE0();


void fn_825A80A8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x4c);
    for (piVar3 = *(int **)(iVar2 + 0x268); piVar3 < *(int **)(iVar2 + 0x26c); piVar3 = piVar3 + 1)
    {
      if (*piVar3 == iVar1) {
        fn_8251E530(iVar2 + 0x268,piVar3);
        goto LAB_825a8110;
      }
    }
    if (*(int *)(iVar1 + 8) != 0) {
      fn_82D88AE0(*(undefined4 *)(iVar2 + 0x1f8));
    }
LAB_825a8110:
    fn_82CE4118(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

