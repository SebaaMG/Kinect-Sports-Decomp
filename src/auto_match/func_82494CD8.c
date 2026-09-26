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
extern int fn_8248F890();
extern int fn_82497430();
extern unsigned int lbl_82196750;
extern unsigned int lbl_821BEBAC;
extern unsigned int lbl_821BEEE0;
extern unsigned int lbl_821BEEFC;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_30;
extern U64 storeVectorElementWordIndexed();


longlong fn_82494CD8(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 uStack_30;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &lbl_821BEEFC;
  puVar4[5] = 0;
  puVar4[4] = &lbl_821BEBAC;
  puVar1 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(puVar4 + 0xc) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  lVar6 = param_1 + 0x18;
  puVar4[0x12] = 0;
  *(undefined1 *)(puVar4 + 0x14) = 0;
  *(undefined1 *)((int)puVar4 + 0x51) = 0;
  *(undefined1 *)((int)puVar4 + 0x52) = 0;
  puVar4[0x15] = 0;
  uVar3 = (uint)lVar6;
  uVar5 = storeVectorElementWordIndexed(in_vs45,0,lVar6);
  *(undefined4 *)(uVar3 & 0xfffffffc) = uVar5;
  uVar5 = storeVectorElementWordIndexed(in_vs44,lVar6,4);
  *(undefined4 *)(uVar3 + 4 & 0xfffffffc) = uVar5;
  uVar5 = storeVectorElementWordIndexed(in_vs43,lVar6,8);
  *(undefined4 *)(uVar3 + 8 & 0xfffffffc) = uVar5;
  *(undefined2 *)(puVar4 + 0x18) = uStack_30;
  puVar4[0x1a] = 0;
  uVar5 = fn_8248F890(0x70);
  puVar4[0x19] = uVar5;
  *(undefined4 *)uVar5 = uVar5;
  *(undefined4 *)(puVar4[0x19] + 4) = puVar4[0x19];
  uVar5 = lbl_821CA460;
  puVar4[0x1c] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x22] = uVar5;
  fn_82497430(param_1 + 0x60,8);
  puVar4[0x24] = param_2;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  *puVar4 = &lbl_821BEEE0;
  return param_1;
}

