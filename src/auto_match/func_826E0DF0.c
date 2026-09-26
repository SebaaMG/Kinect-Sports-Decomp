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
extern int fn_826C8C70();
extern int fn_826E9378();


void fn_826E0DF0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x34);
  if (piVar1 == (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x314);
    if (iVar2 == 0) {
      iVar2 = param_1 + 0x28;
    }
    fn_826C8C70(iVar2,0xffffffff8200ccf8);
    iVar2 = *(int *)(param_1 + 0x314);
    if (iVar2 == 0) {
      iVar2 = param_1 + 0x28;
    }
    fn_826E9378(iVar2);
  }
  else {
    piVar1 = (int *)(**(code **)(*piVar1 + 8))();
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2);
  }
  return;
}

