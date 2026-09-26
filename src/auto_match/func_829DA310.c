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
extern int fn_829D4EB8();
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern unsigned int lbl_832179FC;


ulonglong fn_829DA310(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = fn_82A1E0C0(0,0x8000,0xffffffff829d9ff8,0,4,lbl_832179FC + 0x8f4b4);
  *(undefined4 *)(lbl_832179FC + 0x8f4b0) = uVar1;
  if (*(int *)(lbl_832179FC + 0x8f4b0) == 0) {
    uVar3 = 0xffffffff8007000e;
  }
  else {
    iVar2 = fn_82A1E508(*(int *)(lbl_832179FC + 0x8f4b0),param_1);
    if (iVar2 != -1) {
      fn_82A1E2C0(*(undefined4 *)(lbl_832179FC + 0x8f4b0));
      return 0;
    }
    uVar3 = thunk_FUN_82a2b798();
    if (0 < (int)uVar3) {
      uVar3 = uVar3 & 0xffff | 0x80070000;
    }
  }
  fn_829D4EB8();
  return uVar3;
}

