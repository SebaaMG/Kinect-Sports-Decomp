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
extern int fn_83013E80();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_83264308;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8304D690(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(uint *)(iVar1 + 8) & 0x10000) == 0) {
    return;
  }
  uStack_14 = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x20);
  uStack_1c = lbl_82002AE0;
  uStack_20 = param_2;
  uStack_18 = param_3;
  fn_83013E80(lbl_83264308,*(undefined4 *)(iVar1 + 0x50),&uStack_20,param_1 + 0x10);
  return;
}

