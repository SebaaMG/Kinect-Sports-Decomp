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
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82E73170(int param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(ulonglong *)(param_2 + 6);
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x28))(*(int **)(param_1 + 0x1d8),&uStack_30);
  if (-1 < iVar1) {
    if (((((U64)(uStack_28) >> 16) & 0xFFFF) == 0) || (uVar2 < *(ulonglong *)(param_1 + 0x1e0))) {
      *(ulonglong *)(param_1 + 0x1e0) = uVar2;
    }
    (**(code **)(*param_2 + 4))(param_2,*(undefined4 *)(param_1 + 0x1d8));
  }
  return;
}

