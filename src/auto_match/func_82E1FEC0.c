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
extern int fn_82E1D550();
extern int fn_82E1DE88();
extern int fn_82E1F690();
extern int fn_82E1FE08();
extern int fn_82E1FE58();


undefined8 fn_82E1FEC0(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar1 = fn_82E1F690(param_2);
  param_1[6] = iVar1;
  iVar1 = fn_82A1F2F8();
  param_1[3] = iVar1;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  iVar1 = fn_82E1D550();
  uVar2 = fn_82E1DE88(*(undefined4 *)(iVar1 + 8),0xffffffff8214b940,0x3c);
  if (0xe10 < uVar2) {
    uVar2 = 0xe10;
  }
  param_1[4] = uVar2 * 1000;
  if ((uVar2 * 1000 != 0) && (fn_82E1FE08(param_1), *param_1 == 0)) {
    uVar3 = fn_82E1FE58(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  return uVar3;
}

