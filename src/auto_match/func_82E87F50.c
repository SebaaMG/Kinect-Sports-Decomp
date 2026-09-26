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
extern unsigned int *auStack_60;
extern int fn_8265C940();
extern int fn_82E85088();
extern int fn_82E871A0();
extern int fn_82E8EC58();
extern int fn_82E915E0();
extern int fn_82E91950();
extern int fn_82EDFFC0();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


ulonglong fn_82E87F50(int param_1)

{
  int iVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_28 = *(int *)(param_1 + 0x278) >> 1;
  auStack_60[0] = 0;
  iStack_24 = *(int *)(param_1 + 0x27c) >> 1;
  uStack_30 = 0;
  uStack_2c = 0;
  fn_82EDFFC0(param_1 + 0x280,&uStack_30);
  fn_82E85088(param_1);
  uVar6 = *(uint *)(param_1 + 0x27c);
  iStack_44 = *(int *)(param_1 + 0x28c);
  if (*(int *)(param_1 + 4) == 8) {
    uVar6 = uVar6 + 0x1f & 0xffffffe0;
    iStack_44 = (int)uVar6 >> 1;
  }
  iStack_34 = uVar6 + 0x20;
  iStack_38 = *(int *)(param_1 + 0x278) + 0x20;
  uStack_40 = 0xffffffe0;
  iStack_48 = *(int *)(param_1 + 0x288) + 0x10;
  iStack_44 = iStack_44 + 0x10;
  uStack_3c = 0xffffffe0;
  uStack_50 = 0xfffffff0;
  uStack_4c = 0xfffffff0;
  puVar3 = (undefined4 *)fn_8265C940(0x10,0x248c8000);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  *(undefined4 **)(param_1 + 0x830) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    fn_82E871A0();
    uVar2 = (ulonglong)auStack_60[0];
    if (auStack_60[0] == 0) {
      uVar2 = 0xfffffffffffffffd;
    }
  }
  else {
    fn_82E8EC58(param_1);
    if (*(int *)(param_1 + 4) == 8) {
      if ((*(int *)(param_1 + 0x76c8) == 0) || (uVar5 = 4, *(int *)(param_1 + 0x654) == 0)) {
        uVar5 = 3;
      }
      fn_82E91950(*(undefined4 *)(param_1 + 0x830),auStack_60,&uStack_40,&uStack_50,uVar5,8,
                      *(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800));
      fn_82E915E0(*(undefined4 *)(param_1 + 0x830),param_1 + 0x304,0xffffffffffffffff);
      fn_82E915E0(*(undefined4 *)(param_1 + 0x830),param_1 + 0x300,0xffffffffffffffff);
      iVar4 = param_1 + 0x30c;
    }
    else {
      fn_82E91950(*(undefined4 *)(param_1 + 0x830),auStack_60,&uStack_40,&uStack_50,2,0,
                      *(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800));
      fn_82E915E0(*(undefined4 *)(param_1 + 0x830),param_1 + 0x304,0xffffffffffffffff);
      iVar4 = param_1 + 0x300;
    }
    fn_82E915E0(*(undefined4 *)(param_1 + 0x830),iVar4,0xffffffffffffffff);
    uVar2 = (ulonglong)auStack_60[0];
    if (auStack_60[0] == 0) {
      iVar4 = *(int *)(param_1 + 0x300);
      iVar1 = *(int *)(iVar4 + 0x40);
      *(int *)(param_1 + 0x14) = iVar1;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar4 + 0x58);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar4 + 0x70);
      *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x574) + iVar1;
    }
  }
  return uVar2;
}

