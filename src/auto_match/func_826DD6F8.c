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
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82687270();
extern int fn_826D93E8();
extern int fn_826DCEE0();
extern int fn_82768968();
extern int fn_8276DF08();
extern unsigned int iStack_68;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_64;


undefined8 fn_826DD6F8(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint auStack_70 [2];
  int iStack_68;
  undefined4 uStack_64;
  
  uVar4 = 0;
  if (param_2[1] != 0) {
    iVar5 = 0;
    do {
      uStack_64 = (undefined4)(param_1 + 0x18);
      iStack_68 = 0;
      puVar6 = (uint *)(iVar5 + *param_2);
      uVar1 = fn_8267B890(lbl_831E7E64,0x40,0);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_8276DF08(uVar1,((ulonglong)*puVar6 & 0xfffffffc) + 8,0);
      }
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x40;
      uVar1 = fn_8267B890(lbl_831E7E64,0x2c,0);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82768968(uVar1,iVar2,param_1 + 0x18);
      }
      if (iStack_68 != 0) {
        fn_82687270();
      }
      auStack_70[0] = puVar6[1];
      iStack_68 = iVar3;
      fn_826DCEE0(param_1,auStack_70,&iStack_68,((ulonglong)*puVar6 & 0xfffffffc) + 8);
      fn_8267C4F0(iVar2);
      if (iStack_68 != 0) {
        fn_82687270();
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (uVar4 < (uint)param_2[1]);
  }
  RtlEnterCriticalSection(param_1 + 0x54);
  auStack_70[0] = 0;
  fn_826D93E8(param_1 + 0x48,auStack_70);
  RtlLeaveCriticalSection(param_1 + 0x54);
  return 1;
}

