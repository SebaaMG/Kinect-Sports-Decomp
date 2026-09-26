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
extern int fn_82292AE8();
extern int fn_822931D8();
extern int fn_824BC7E8();
extern int fn_82520D38();
extern int fn_82549960();
extern int fn_82561778();
extern int fn_8265C9E0();
extern unsigned int lbl_821BBE24;


undefined4 * fn_824637A0(undefined4 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  fn_82520D38();
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *param_1 = &lbl_821BBE24;
  param_1[0x6f] = 0xffffffff;
  param_1[0x70] = 0xffffffff;
  param_1[0x71] = 0;
  param_1[0x72] = 0xffffffff;
  param_1[0x73] = 0xffffffff;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  fn_82561778(param_1 + 0xc,0xffffffff821bbe18,0);
  uVar1 = fn_8265C9E0(0x200);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82549960(uVar1,param_2 + 0x48,0,0,0,0);
  }
  param_1[0x6e] = uVar2;
  piVar3 = (int *)fn_824BC7E8();
  *(undefined4 *)(*piVar3 + 4) = 1;
  iVar4 = fn_82292AE8();
  *(undefined4 *)(iVar4 + 0x10) = 1;
  fn_822931D8();
  return param_1;
}

