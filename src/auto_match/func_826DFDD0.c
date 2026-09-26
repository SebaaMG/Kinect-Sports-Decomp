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
extern int fn_826DFA28();
extern int fn_826E7998();


void fn_826DFDD0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
  if (piVar1 == (int *)0x0) {
    fn_826DFA28(param_1 + 0x14,0xffffffff8200c940);
  }
  else if (0 < *(int *)(param_2 + 8)) {
    iVar3 = *(int *)(param_1 + 0x314);
    if (iVar3 == 0) {
      iVar3 = param_1 + 0x28;
    }
    fn_826E7998(iVar3);
    *(undefined1 *)(iVar3 + 0x38) = 1;
    uVar2 = (**(code **)(*piVar1 + 4))(piVar1,*(undefined4 *)(iVar3 + 0x10));
    *(undefined4 *)(param_1 + 0x2b4) = uVar2;
  }
  return;
}

