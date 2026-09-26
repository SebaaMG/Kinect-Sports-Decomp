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
extern int fn_82A1F2F8();
extern int fn_82BDBB60();
extern int fn_82BDBFE0();
extern int fn_82BDC130();


undefined8 fn_82BDC780(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  fn_82BDC130();
  fn_82BDBB60(param_1);
  while ((uVar4 & 0xffffffff) != 0) {
    uVar4 = uVar4 - 1;
    uVar3 = (*(uint *)(param_1 + 0xc) - uVar4) - 1;
    if ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc)) {
      lVar2 = (ulonglong)*(uint *)(param_1 + 0x60) + (uVar3 & 0x1fffffff) * 8;
    }
    else {
      lVar2 = 0;
    }
    fn_82BDBFE0(param_1,lVar2);
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 600;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  uVar1 = fn_82A1F2F8();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return 0;
}

