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
extern unsigned int *auStack_38;
extern int fn_8240D928();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8288B7E8();
extern int fn_8288DAD8();
extern int fn_8288DF40();
extern int fn_82893DB8();
extern int fn_82897BD0();
extern int fn_828BE158();
extern int fn_828CBDC8();


undefined8 fn_82893F40(int *param_1,int param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar5;
  ulonglong uVar3;
  undefined8 uVar4;
  byte bVar6;
  int iVar7;
  char acStack_40 [8];
  undefined1 auStack_38 [56];
  
  (**(code **)(*param_1 + 0x20))(acStack_40,param_1);
  if ((param_3 & 0xff) == 0) {
    if (acStack_40[0] != '\0') {
      fn_8240D928(param_2);
      puVar5 = (undefined4 *)fn_8288DF40(auStack_38,param_1 + 0xf);
      if ((1 << (puVar5[1] & 0x3f) & *(uint *)*puVar5) != 0) goto LAB_82893fd4;
    }
    uVar2 = 0;
  }
  else {
LAB_82893fd4:
    bVar6 = *(char *)(param_1 + 0x17) + 1;
    uVar1 = *(undefined4 *)(param_1[0xd] + 0x38);
    *(byte *)(param_1 + 0x17) = -((ulonglong)bVar6 < 0x100) & bVar6;
    iVar7 = 4;
    if (*(char *)(param_2 + 0x26) == '\0') {
      iVar7 = 0;
    }
    param_1[0x14] = iVar7;
    fn_8288DAD8(param_1,param_2,param_3,(ulonglong)bVar6 - 0x100);
    uVar3 = fn_8265C9E0(0xa8);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828CBDC8(uVar3,param_1,param_2,1,0);
    }
    fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
    iVar7 = param_1[4];
    uVar4 = fn_82897BD0(param_2);
    fn_828BE158(iVar7,uVar2,uVar4,0);
    fn_82893DB8(param_1,param_2);
    fn_8288B7E8(param_1);
    (**(code **)(*param_1 + 0x24))(param_1,uVar1);
    uVar2 = 1;
  }
  return uVar2;
}

