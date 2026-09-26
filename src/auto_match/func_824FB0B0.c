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
extern int fn_82528FA8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_824FB0B0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x1c0) != 0) {
    uStack_20 = lbl_821CC160;
    uStack_1c = lbl_821CC160;
    uStack_18 = lbl_821CC160;
    iVar1 = fn_82528FA8((double)lbl_821CA460,param_2,param_1 + 0x1c0,0xffffffff821962c0,
                              &uStack_20,param_5,0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b8) = iVar1;
      *(undefined4 *)(iVar1 + 0x2b0) = lbl_82005748;
      *(undefined4 *)(*(int *)(param_1 + 0x1b8) + 0xb70) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x1b8) + 0xba0) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x1b8) + 0xba1) = 0;
      *(int *)(param_1 + 0x20) = iVar1;
    }
  }
  return;
}

