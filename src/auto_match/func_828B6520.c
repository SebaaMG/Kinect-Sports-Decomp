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
extern int fn_8265C9E0();
extern int fn_828BE2C0();
extern int fn_828DD1B8();
extern int fn_82CE0668();


void fn_828B6520(int param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (399 < (ulonglong)(param_2 - *(longlong *)(param_1 + 0x38))) {
    fn_82CE0668((undefined8 *)(param_1 + 0x48),8);
    uVar2 = fn_8265C9E0(0x98);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x28);
      uVar3 = fn_828DD1B8(uVar2,*(undefined8 *)(param_1 + 0x48),uVar1,uVar1);
    }
    fn_828BE2C0(*(undefined4 *)(param_1 + 0x14),uVar3);
    *(longlong *)(param_1 + 0x38) = param_2;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      *(longlong *)(param_1 + 0x40) = param_2;
    }
  }
  return;
}

