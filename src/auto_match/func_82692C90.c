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
extern int fn_82692370();
extern int fn_82692538();
extern int fn_82692988();
extern int fn_8270C3A8();
extern int fn_8270C668();
extern int fn_82F68CC0();
extern unsigned int lbl_82005F20;
extern unsigned int uStack_40;


ulonglong fn_82692C90(int param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uStack_40;
  
  uStack_40 = 0;
  if ((param_4 & 0xffffffff) < 0x10) {
    param_4 = 0x10;
  }
  uVar1 = *(ushort *)(param_2 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10) + param_4 & ~(ulonglong)*(uint *)(param_1 + 0x10);
  if (uVar1 < 8) {
    uStack_40 = uVar1 + 1 << (*(uint *)(param_1 + 0xc) & 0x3f);
    if ((uVar5 & 0xffffffff) <= (ulonglong)uStack_40) {
      return param_3;
    }
    uVar3 = *(int *)(&lbl_82005F20 + (uint)uVar1 * 4) + *(uint *)(param_1 + 0xc);
  }
  else {
    if (uVar1 != 10) {
      uVar5 = fn_82692988(param_1,param_2,param_3,uVar5);
      return uVar5;
    }
    uVar2 = fn_8270C3A8(param_1 + 0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      return uVar2;
    }
    uVar3 = fn_8270C668(param_1 + 0x14,param_2,param_3,0);
  }
  uVar2 = fn_82692370(param_1,uVar5,1 << (uVar3 & 0x3f));
  if (uVar2 != 0) {
    uVar4 = (ulonglong)uStack_40;
    if ((uVar5 & 0xffffffff) <= (ulonglong)uStack_40) {
      uVar4 = uVar5;
    }
    fn_82F68CC0(uVar2,param_3,uVar4);
    fn_82692538(param_1,param_2,param_3);
  }
  return uVar2;
}

