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
extern unsigned int lbl_82186E6C;


void fn_82F557E0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0xa0) == 0) || (lbl_82186E6C <= *(float *)(param_1 + 0xb4))) {
        if (*(int *)(param_1 + 0x50) == 0) {
          return;
        }
        if (lbl_82186E6C <= *(float *)(param_1 + 0xb4)) {
          return;
        }
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
      goto code_r0x82f55880;
    }
    if (iVar1 == 1) {
      if (*(float *)(*param_2 + 0x1e0) <= *(float *)(*param_2 + 0xb0)) {
        return;
      }
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      if (*(float *)(*param_2 + 0xb0) <= *(float *)(*param_2 + 0x1a0)) {
        return;
      }
    }
  }
  uVar2 = 0;
code_r0x82f55880:
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

