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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack_78 ((*(U64*)&iStack_78))
#define _iStack_80 ((*(U64*)&iStack_80))
extern unsigned int *auStack_90;
extern int fn_829F5000();
extern int fn_82A0CB88();
extern unsigned int iStack_78;
extern unsigned int iStack_80;
extern unsigned int iStack_a0;
extern unsigned int *lbl_83218C34;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


undefined8
fn_829F5FF8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,int param_8)

{
  int in_r0;
  undefined8 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs61 [16];
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  
  *(undefined4 *)(param_1 + 8) = 1;
  altv207_13(in_vs32,in_vs36);
  *(undefined4 *)(param_1 + 0x10698) = (int)param_4;
  puVar3 = (undefined4 *)(param_1 + 0x10650U & 0xfffffff0);
  *puVar3 = in_register_000103f0;
  puVar3[1] = in_register_000103f4;
  puVar3[2] = in_register_000103f8;
  puVar3[3] = in_vr63;
  if (lbl_83218C34 != (int *)0x0) {
    (**(code **)(*lbl_83218C34 + 0x30))(lbl_83218C34,param_4);
  }
  iStack_a0 = *(int *)(param_2 + 0xb8);
  uStack_9c = *(undefined4 *)(param_2 + 0xbc);
  uStack_98 = *(undefined4 *)(param_2 + 0xc0);
  if (lbl_83218C34 != (int *)0x0) {
    (**(code **)(*lbl_83218C34 + 4))(lbl_83218C34,2);
  }
  *(undefined4 *)(param_1 + 8) = 2;
  uStack_88 = CONCAT44((int)param_3,(int)param_4);
  _iStack_80 = CONCAT44(param_2,uStack_7c);
  fn_829F5000(6,auStack_90,0x14);
  puVar3 = (undefined4 *)(param_2 + 0xc4);
  uVar1 = fn_82A0CB88(param_1 + 0xd0,param_5,param_6,param_2 + 0xb8,puVar3,param_2 + 0xd0,
                            param_7,param_3);
  piVar2 = &iStack_a0;
  lVar4 = 3;
  do {
    if (*piVar2 == 2) {
      if (puVar3[-3] == 0) {
        *(undefined4 *)((*(int *)(param_1 + 0x10678) + 0x4198) * 4 + param_1) = *puVar3;
        *(int *)(param_1 + 0x10678) = *(int *)(param_1 + 0x10678) + 1;
      }
      else if (puVar3[-3] == 1) {
        *(undefined4 *)((*(int *)(param_1 + 0x10694) + 0x419f) * 4 + param_1) = *puVar3;
        *(int *)(param_1 + 0x10694) = *(int *)(param_1 + 0x10694) + 1;
        *(undefined4 *)((puVar3[3] + 0x1b) * 4 + param_2) = 1;
        puVar3[3] = 0;
        *puVar3 = 0;
        puVar3[-3] = 0;
      }
    }
    piVar2 = piVar2 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack_88 = CONCAT44((int)param_6,param_8);
  _iStack_80 = CONCAT44(param_1 + 0x10660,*(undefined4 *)(param_1 + 0x10678));
  _iStack_78 = CONCAT44(param_1 + 0x1067c,*(undefined4 *)(param_1 + 0x10694));
  fn_829F5000(7,auStack_90,0x20);
  if (lbl_83218C34 != (int *)0x0) {
    (**(code **)(*lbl_83218C34 + 8))(lbl_83218C34,*(undefined4 *)(param_1 + 8));
    (**(code **)(*lbl_83218C34 + 4))(lbl_83218C34,3);
  }
  *(undefined4 *)(param_1 + 0x10698) = 0;
  *(undefined4 *)(param_1 + 8) = 3;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (param_8 != 0) {
    altv207_13(in_vs32,in_vs61);
    puVar3 = (undefined4 *)(in_r0 + param_8 & 0xfffffff0);
    *puVar3 = in_register_000103e0;
    puVar3[1] = in_register_000103e4;
    puVar3[2] = in_register_000103e8;
    puVar3[3] = in_vr62;
  }
  return uVar1;
}

