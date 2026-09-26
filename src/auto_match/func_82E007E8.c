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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82CE5040();
extern int fn_82CE5088();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;


void fn_82E007E8(int param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined1 auStack_30 [24];
  
  lVar3 = ((param_3 & 0xff) + (param_3 & 0xff) * 2) * 0x20 + (ulonglong)*(uint *)(param_1 + 0x10) +
          0x10;
  fn_82CE5088(auStack_40,lVar3,param_4);
  uStack_38 = lbl_821AAD20;
  fn_82CE5040(auStack_30,lVar3,auStack_40);
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}

