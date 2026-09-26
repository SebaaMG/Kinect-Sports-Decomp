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
extern int fn_82810240();
extern int fn_82810328();
extern int fn_82810470();
extern int fn_82810B78();
extern int fn_8305F7A0();
extern int fn_83066658();


bool fn_8305D830(int param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar4 = *(int *)(param_1 + 0x30);
  iVar1 = (int)((param_2 & 0xffffffff) << 2);
  uVar2 = fn_8305F7A0(*(undefined4 *)(param_1 + 0x28),
                       *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar1));
  uVar3 = fn_8305F7A0(*(undefined4 *)(param_1 + 0x28),
                       *(undefined4 *)
                        ((int)(((param_2 + 1) -
                                (longlong)((int)(param_2 + 1) / iVar4) * (longlong)iVar4 &
                               0xffffffff) << 2) + *(int *)(param_1 + 0x2c)));
  fn_82810328(uVar3,uVar2,auStack_40);
  iVar4 = fn_82810470(auStack_40);
  if (iVar4 == 0) {
    fn_82810240(auStack_40,param_1 + 0x34,auStack_50);
    fn_82810B78(auStack_50,auStack_50);
    uVar2 = fn_8305F7A0(*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar1));
    fn_83066658(param_3,auStack_50,uVar2);
  }
  return iVar4 == 0;
}

