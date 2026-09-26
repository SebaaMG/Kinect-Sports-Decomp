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
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82644450();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8264E070(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  uint uVar5;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 0) {
    uVar5 = 0x2aaaaaaa;
  }
  else if ((uVar1 & 0x40000000) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0x15555555;
  }
  if ((((uVar1 & 0x20000000) != 0) &&
      (uVar5 = 3 << ((*(uint *)(param_1 + 0x34) & 0x1f) << 1) & uVar5,
      *(uint *)(param_1 + 0x34) == 0)) && (-1 < (int)uVar1)) {
    uVar5 = uVar5 | 0x80000000;
  }
  iVar4 = KeGetCurrentProcessType();
  puVar3 = __imp__VdGlobalDevice;
  if (iVar4 == 2) {
    puVar3 = __imp__VdGlobalXamDevice;
  }
  uVar2 = *puVar3;
  if (uVar5 != *(uint *)(param_1 + 0x164)) {
    *(uint *)(param_1 + 0x164) = uVar5;
    uStack_30 = 0xc0006200;
    uStack_2c = uVar5;
    fn_82644450(uVar2,&uStack_30,2);
  }
  return;
}

