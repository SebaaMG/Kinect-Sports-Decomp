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
extern int fn_82680978();
extern int fn_8273D528();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;


void fn_82681648(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2[4] != 0) {
    iVar1 = fn_8267B890(lbl_831E7E64,param_2[5],0);
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = param_2[5];
      *(undefined4 *)(param_1 + 8) = *param_2;
      *(undefined4 *)(param_1 + 0xc) = param_2[1];
      *(undefined4 *)(param_1 + 0x10) = param_2[2];
      *(undefined4 *)(param_1 + 0x14) = param_2[3];
      *(undefined4 *)(param_1 + 0x20) = param_2[6];
      fn_82680978(param_1 + 0x24,param_2 + 7);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x18),param_2[4],param_2[5]);
      return;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  fn_8273D528(param_1 + 0x24,0);
  return;
}

