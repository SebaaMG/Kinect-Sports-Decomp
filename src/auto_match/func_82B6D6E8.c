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
extern int fn_82AB15D0();
extern int fn_82B6B230();
extern int fn_82B6D458();
extern int fn_82B7F170();


longlong fn_82B6D6E8(int param_1,undefined4 *param_2)

{
  int iVar2;
  longlong lVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77ac,0xffffffff820d9f48,0x341);
  }
  if (param_2 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da0b8,0xffffffff820d9f48,0x342);
  }
  uVar5 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x1c);
  puVar4 = param_2;
  do {
    iVar2 = fn_82B6D458(param_1,*puVar3,puVar4[1],uVar5);
    if (iVar2 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x34d);
    }
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  } while ((uVar5 & 0xffffffff) < 6);
  iVar2 = fn_82B6D458(param_1,*(undefined4 *)(param_1 + 0x34),param_2[7],6);
  if (iVar2 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x357);
  }
  param_2[7] = 0;
  lVar1 = fn_82B6D458(param_1,*(undefined4 *)(param_1 + 0x38),param_2[8],7);
  if (lVar1 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x360);
  }
  param_2[8] = 0;
  fn_82B7F170(*param_2);
  fn_82B6B230(*(undefined4 *)(param_1 + 0x13c),param_2);
  return lVar1;
}

