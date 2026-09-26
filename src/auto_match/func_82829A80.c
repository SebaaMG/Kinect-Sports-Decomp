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
extern unsigned int *auStack_40;
extern int fn_8265C9E0();
extern int fn_828252D0();
extern int fn_828277F8();
extern int fn_828281C8();
extern int fn_82828720();
extern int fn_82828B78();


void fn_82829A80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined4 param_5)

{
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar5;
  longlong lVar1;
  undefined4 *puVar4;
  undefined1 auStack_40 [4];
  int aiStack_3c [15];
  
  iVar2 = fn_828252D0(0x58);
  uVar3 = fn_82828720(param_1,param_2);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  fn_828277F8(iVar2,param_1);
  uVar5 = fn_828281C8(param_1,param_3,aiStack_3c);
  *(undefined1 *)(iVar2 + 0x28) = uVar5;
  *(undefined4 *)(iVar2 + 0x2c) = param_5;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(int *)(iVar2 + 0x40) = aiStack_3c[0] + 0x24;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  lVar1 = fn_8265C9E0(0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    fn_82828B78(lVar1,auStack_40,auStack_40);
  }
  *(int *)(iVar2 + 0x3c) = (int)lVar1;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  *(undefined4 **)(iVar2 + 0x48) = puVar4;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined1 *)(iVar2 + 0x54) = 0;
  *param_4 = iVar2;
  return;
}

