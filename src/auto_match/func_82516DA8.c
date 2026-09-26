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
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FBB0();
extern int fn_8223FDB8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82517B60();
extern int fn_82520AC8();
extern int fn_828BC448();
extern int fn_828C2A50();


undefined8 fn_82516DA8(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [156];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  fn_8223CFC0(auStack_120,2,1);
  fn_82240158(auStack_120,0xffffffff821c276c);
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  uVar4 = fn_82240158(auStack_120,0xffffffff821c27a8);
  uVar4 = fn_82520AC8(uVar4,iVar2 - iVar1 >> 4);
  uVar4 = fn_82240158(uVar4,0xffffffff821c2798);
  fn_8223FBB0(uVar4,0);
  puVar6 = *(undefined4 **)(param_2 + 8);
  if (puVar6 != *(undefined4 **)(param_2 + 0xc)) {
    do {
      uVar3 = *puVar6;
      fn_82517B60(auStack_120,10);
      fn_8223FDB8(auStack_120);
      uVar4 = fn_828C2A50(auStack_60,uVar3,param_3);
      uVar5 = fn_82240158(auStack_120,0xffffffff821c27b8);
      uVar4 = fn_8223B728(uVar5,uVar4);
      fn_82240158(uVar4,0xffffffff821c27b4);
      fn_82230300(auStack_60,1,0);
      puVar6 = puVar6 + 4;
    } while (puVar6 != *(undefined4 **)(param_2 + 0xc));
  }
  puVar6 = *(undefined4 **)(param_2 + 0x18);
  if (puVar6 != *(undefined4 **)(param_2 + 0x1c)) {
    do {
      uVar3 = *puVar6;
      fn_82517B60(auStack_120,10);
      fn_8223FDB8(auStack_120);
      uVar4 = fn_828BC448(auStack_80,uVar3,param_3);
      uVar5 = fn_82240158(auStack_120,0xffffffff821c27c4);
      uVar4 = fn_8223B728(uVar5,uVar4);
      fn_82240158(uVar4,0xffffffff821c27b4);
      fn_82230300(auStack_80,1,0);
      puVar6 = puVar6 + 4;
    } while (puVar6 != *(undefined4 **)(param_2 + 0x1c));
  }
  fn_822403C8(param_1,auStack_11c);
  fn_8223DCC8(auStack_120);
  return param_1;
}

