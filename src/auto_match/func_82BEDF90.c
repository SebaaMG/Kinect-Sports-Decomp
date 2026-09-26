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
extern int fn_82BECA88();
extern int fn_82BEDE38();


void fn_82BEDF90(int param_1)

{
  int *piVar1;
  int iVar3;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x50) != 2) && (*(int *)(param_1 + 0x34) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x34) + 0x10);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
      if (iVar3 == 0) {
        return;
      }
      (**(code **)(*piVar1 + 0xc))(piVar1);
      lVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (lVar2 != 0) {
        fn_82BEDE38(param_1);
      }
    }
    fn_82BECA88(param_1);
  }
  return;
}

