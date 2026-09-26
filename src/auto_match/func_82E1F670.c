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
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern int fn_82A1E5B8();
extern int fn_82E1D550();
extern int fn_82E1DE88();


void fn_82E1F670(int param_1)

{
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 9) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x5d) = 1;
  uVar2 = fn_82A1E0C0(0,0,0xffffffff82e1f5d8,param_1,4,0);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  iVar3 = fn_82E1D550();
  uVar1 = fn_82E1DE88(*(undefined4 *)(iVar3 + 8),0xffffffff8214b85c,0xffffffffffffffff);
  if (5 < (int)uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  if ((int)uVar1 < 0) {
    uVar1 = fn_82A1E5B8();
  }
  fn_82A1E508(*(undefined4 *)(param_1 + 0x60),uVar1);
  fn_82A1E2C0(*(undefined4 *)(param_1 + 0x60));
  return;
}

