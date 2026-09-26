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
extern int fn_8251FA58();
extern int fn_82627DB0();


void fn_825FBDB8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x25c) != 0) && (*(int *)(param_1 + 0x24c) == 0)) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  if ((*(int *)(param_1 + 0x260) != 0) && (*(int *)(param_1 + 0x250) == 0)) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x260) = 0;
  }
  if (*(int **)(param_1 + 0x274) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x274) + 8))();
    puVar1 = *(undefined4 **)(param_1 + 0x274);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x274) = 0;
    if (0 < *(short *)(param_1 + 6)) {
      iVar3 = param_1 + 0x2a0;
      do {
        if (*(short *)(iVar3 + 0xa2) == -2) {
          fn_82627DB0(param_1,iVar3);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x1d0;
      } while (iVar2 < *(short *)(param_1 + 6));
    }
  }
  if (*(int *)(param_1 + 0x294) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  return;
}

