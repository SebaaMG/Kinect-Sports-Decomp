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
extern unsigned int lbl_821CC160;
extern int (*lbl_8327677C)();
extern int (*lbl_83276794)();


undefined8 fn_8236B578(int param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if (*(int *)(iVar1 + 0xd4) == 0) {
LAB_8236b614:
    uVar2 = 1;
  }
  else {
    if (*(float *)(iVar1 + 0xd8) <= lbl_821CC160) {
      if (lbl_83276794 == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*lbl_83276794)();
      }
      if (iVar3 != 0) {
        *(undefined4 *)(iVar1 + 0xd4) = 0;
        if (lbl_8327677C != (code *)0x0) {
          (*lbl_8327677C)(0xffffffff821b6748,0xffffffff821b66a8,0x1e5);
        }
        goto LAB_8236b614;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

