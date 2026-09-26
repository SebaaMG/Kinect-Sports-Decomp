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
extern int fn_82A9F6F8();
extern unsigned int iStack_24;
extern unsigned int lbl_820D2894;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


undefined4 fn_82A9F810(int param_1)

{
  undefined4 uVar1;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  uVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x90)) {
    if ((*(int *)(param_1 + 0x94) == 1) || (*(int *)(param_1 + 0x94) != 3)) {
      uVar1 = 0;
    }
    else {
      uStack_2c = 0;
      uStack_20 = 0;
      iStack_24 = 0;
      uStack_28 = 1;
      ppuStack_30 = &lbl_820D2894;
      fn_82A9F6F8(param_1,&ppuStack_30);
      if (-1 < iStack_24) {
        uVar1 = uStack_20;
      }
      *(int *)(param_1 + 0x90) = iStack_24;
    }
  }
  return uVar1;
}

