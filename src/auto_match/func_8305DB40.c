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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82810240();
extern int fn_82810328();
extern int fn_82810BE8();
extern int fn_8305F778();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


double fn_8305DB40(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  dVar4 = (double)lbl_821AAD20;
  fn_8305F778(*(undefined4 *)(param_1 + 0x28),**(undefined4 **)(param_1 + 0x2c),auStack_90);
  iVar1 = 2;
  if (2 < *(int *)(param_1 + 0x30)) {
    iVar2 = 8;
    do {
      fn_8305F778(*(undefined4 *)(param_1 + 0x28),
                   *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c) + -4),auStack_80);
      fn_8305F778(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar2 + *(int *)(param_1 + 0x2c))
                   ,auStack_70);
      fn_82810328(auStack_80,auStack_90,auStack_50);
      fn_82810328(auStack_70,auStack_90,auStack_60);
      fn_82810240(auStack_50,auStack_60,auStack_40);
      dVar3 = (double)fn_82810BE8(auStack_40);
      iVar1 = iVar1 + 1;
      dVar4 = (double)(float)(dVar3 + dVar4);
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return (double)(float)(dVar4 * (double)lbl_82002C5C);
}

