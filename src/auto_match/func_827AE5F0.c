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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82696BC8();
extern int fn_827AE550();


void fn_827AE5F0(int param_1)

{
  int iVar2;
  char cVar3;
  ulonglong uVar1;
  
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar2 != 0x1f)) ||
     (cVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x40))(), cVar3 != '\0')) {
    uVar1 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x40,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_827AE550(uVar1,*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
    }
  }
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar2);
  if (iVar2 != 0) {
    fn_826824B0(iVar2);
  }
  return;
}

