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
extern unsigned int *auStack_50;
extern int fn_82AB15D0();
extern int fn_82AB60F0();
extern int fn_82AB6210();
extern int fn_82AB6368();
extern int fn_82AB6570();
extern int fn_82AB6770();
extern int fn_82AB67A8();
extern int fn_82AB68E0();
extern int fn_82AB6BC8();
extern int fn_82AB6DA0();
extern int fn_82AB6FB8();
extern int fn_82B69A00();
extern int fn_82B6B128();
extern int fn_82B6B230();
extern int fn_82B9F338();
extern int fn_82B9F3F8();
extern int fn_82B9F578();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined8 fn_82B6C978(undefined4 *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar3;
  undefined4 *puVar4;
  longlong lVar1;
  uint uVar5;
  undefined8 uVar2;
  undefined4 auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  auStack_50[0] = 0;
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9c10,0xffffffff820d9c18,0x173);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce8,0xffffffff820d9c18,0x174);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce0,0xffffffff820d9c18,0x175);
  }
  iVar3 = fn_82B69A00(param_1[4],10);
  if (iVar3 != 0) {
    fn_82AB6DA0(param_2);
    fn_82AB6DA0(param_3);
    puVar4 = (undefined4 *)fn_82B6B128(param_1[7]);
    if (puVar4 == (undefined4 *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9c98,0xffffffff820d9c18,0x185);
      fn_82AB6BC8(param_2);
      fn_82AB6BC8(param_3);
      return 0x10;
    }
    *puVar4 = (int)param_2;
    puVar4[1] = (int)param_3;
    uStack_48 = fn_82AB6FB8(param_2);
    uStack_44 = fn_82AB6FB8(param_3);
    iVar3 = fn_82B9F338(param_1[5],&uStack_48,2,auStack_50);
    if (iVar3 == 0) {
      lVar1 = fn_82AB68E0(*param_1,param_1[1],param_1[2],10);
      if (lVar1 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9c80,0xffffffff820d9c18,0x1a6);
      }
      fn_82AB6368(param_1[6],lVar1);
      fn_82B9F578(param_1[5],&uStack_48,2,lVar1);
    }
    else {
      lVar1 = fn_82B9F3F8(auStack_50[0]);
    }
    fn_82AB6210(lVar1,puVar4);
    uVar5 = fn_82AB60F0(lVar1);
    if (10 < uVar5) {
      uVar2 = fn_82AB6570(lVar1);
      puVar4 = (undefined4 *)fn_82AB67A8();
      fn_82AB6BC8(*puVar4);
      fn_82AB6BC8(puVar4[1]);
      fn_82B6B230(param_1[7],puVar4);
      fn_82AB6770(uVar2);
    }
  }
  return 0;
}

