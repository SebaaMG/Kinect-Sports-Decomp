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
extern int fn_825274F8();
extern int fn_82527F50();


void fn_822B9390(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x4c) != 0) {
    fn_825274F8(param_2,*param_1);
    return;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x8c0) == 0) ||
       (piVar2 = *(int **)(*(int *)(iVar1 + 0x8c0) + 0x1b4), piVar2 == (int *)0x0)) {
      iVar3 = -1;
    }
    else {
      iVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,param_3);
    }
    if ((iVar3 != -1) && (iVar4 = fn_82527F50(param_2), iVar4 != 0)) {
      iVar4 = *(int *)(param_2 + 0x1b8);
      *(undefined1 *)(iVar4 + 1) = 2;
      *(int *)(iVar4 + 0xc) = iVar1;
      *(undefined1 *)(iVar4 + 2) = 0;
      *(int *)(iVar4 + 4) = iVar3;
    }
    return;
  }
  return;
}

