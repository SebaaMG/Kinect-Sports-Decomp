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
extern int fn_82A70AA8();
extern int fn_82A70AF0();
extern int fn_82A70BF8();
extern int fn_82A71258();
extern int fn_82C2B580();
extern int fn_82C2B590();
extern int fn_82C37A98();
extern unsigned int iStack_88;
extern unsigned int iStack_90;
extern unsigned int iStack_a4;
extern unsigned int iStack_b4;
extern unsigned int iStack_c0;
extern unsigned int iStack_c8;
extern unsigned int uStack_30;
extern unsigned int uStack_74;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


undefined8 fn_82A56F10(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_90;
  int iStack_88;
  undefined4 uStack_74;
  undefined4 uStack_30;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (((param_2 != 0) && (2 < *(int *)(iVar1 + 0x3c))) && (param_1[0x76] == 0)) {
    fn_82A70AA8(&uStack_d0);
    iStack_c0 = param_1[0x7a];
    iStack_c8 = param_1[0x79];
    uStack_cc = 3;
    uStack_d0 = 3;
    uStack_b8 = 1;
    iStack_b4 = *(int *)(iVar1 + 0x1c4);
    if (param_1[0x54] <= *(int *)(iVar1 + 0x1c4)) {
      iStack_b4 = param_1[0x54];
    }
    uStack_b0 = (uint)*(ushort *)(iVar1 + 0x22);
    uStack_ac = *(undefined4 *)(iVar1 + 0x58);
    uStack_a8 = (uint)*(ushort *)(iVar1 + 0x6e);
    iStack_a4 = iVar1;
    fn_82C37A98(&uStack_a0);
    uStack_74 = *(undefined4 *)(iVar1 + 0x270);
    iStack_90 = param_1[0x7c];
    iStack_88 = param_1[0x7b];
    uStack_98 = 1;
    uStack_9c = 3;
    uStack_a0 = 3;
    uStack_30 = 1;
    if (*(int *)(iVar1 + 0x238) != 0) {
      fn_82A70BF8();
      fn_82C2B590(*(undefined4 *)(iVar1 + 0x238));
      *(undefined4 *)(iVar1 + 0x238) = 0;
    }
    iVar3 = fn_82C2B580(0x130);
    *(int *)(iVar1 + 0x238) = iVar3;
    if (iVar3 == 0) {
      uVar2 = 0xffffffff8007000e;
    }
    else {
      fn_82A70AF0();
      uVar2 = fn_82A71258(*(undefined4 *)(iVar1 + 0x238),0,&uStack_d0,&uStack_a0);
      if (-1 < (int)uVar2) {
        param_1[0x76] = 1;
      }
    }
  }
  return uVar2;
}

