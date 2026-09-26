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
extern int fn_82AA6868();
extern int fn_82AA6A30();
extern int fn_82B43380();
extern int fn_82B44EB0();
extern int fn_82B629B8();
extern unsigned int uStack_5c;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;


void fn_82AA71F8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  
  *(int *)(param_1 + 0x34) = (int)param_4;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10000;
  fn_82B629B8();
  fn_82B44EB0(param_1);
  uVar1 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4) &
                    0xfffffffe) + 4);
  if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
    fn_82B43380(param_1);
  }
  fn_82AA6868(param_1 + 0x3cc);
  lVar5 = 8;
  puVar2 = &uStack_78;
  do {
    puVar4 = puVar2;
    puVar2 = puVar4 + 1;
    *puVar2 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)(puVar4 + 2) = 0;
  if (param_6 != (undefined4 *)0x0) {
    uStack_70 = *param_6;
    uStack_6c = param_6[1];
    uStack_68 = param_6[2];
    uStack_5c = param_6[5];
  }
  uVar3 = 0xffffffffffff0000;
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
    uVar3 = 0xfffffffffffe0000;
  }
  fn_82AA6A30(param_1,uVar3,param_4,param_5,0,&uStack_70);
  if (param_6 != (undefined4 *)0x0) {
    param_6[3] = uStack_64;
  }
  return;
}

