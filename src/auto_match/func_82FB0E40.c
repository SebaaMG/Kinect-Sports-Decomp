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
extern int fn_82FA5190();
extern int fn_82FB0C10();
extern int fn_82FB1A08();
extern unsigned int lbl_831BC768;


undefined8 fn_82FB0E40(int param_1,ulonglong param_2,longlong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x98);
    fn_82FA5190(lbl_831BC768);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = param_4;
  iVar3 = fn_82FB1A08((undefined4 *)(param_1 + 0x98),param_2);
  if (iVar3 == 1) {
    uVar1 = param_2 & 0xffffffff;
    while (uVar1 != 0) {
      fn_82FB0C10(param_1,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 - 1;
      uVar1 = param_2;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

