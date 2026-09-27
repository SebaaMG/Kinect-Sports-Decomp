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
extern unsigned int *auStack_64;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82809CB0();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810380();
extern int fn_82810530();
extern int fn_82810B78();
extern int fn_8305F7A0();
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_8201E038;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8 fn_8305E188(int param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  struct { undefined4 first; undefined4 second; } stack_pair_a0;

  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [4];
  
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    iVar7 = 0;
    puVar6 = auStack_70;
    dVar10 = (double)lbl_8201E038;
    dVar11 = (double)lbl_8201DCB8;
    uVar8 = 1;
    do {
      if (1 < iVar5) goto LAB_8305e2c8;
      puVar3 = (undefined4 *)
               fn_8305F7A0(*(undefined4 *)(param_1 + 0x28),
                            *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x2c)));
      stack_pair_a0.first = *puVar3;
      stack_pair_a0.second = puVar3[1];
      uStack_98 = puVar3[2];
      puVar3 = (undefined4 *)
               fn_8305F7A0(*(undefined4 *)(param_1 + 0x28),
                            *(undefined4 *)
                             ((-(uint)(uVar2 != uVar8) & uVar8) * 4 + *(int *)(param_1 + 0x2c)));
      uStack_90 = *puVar3;
      uStack_8c = puVar3[1];
      uStack_88 = puVar3[2];
      iVar4 = fn_82810380(dVar11,&stack_pair_a0.first,&uStack_90);
      if (iVar4 == 0) {
        fn_82810328(&uStack_90,&stack_pair_a0.first,puVar6);
        fn_82810B78(puVar6,puVar6);
        if (iVar5 != 0) {
          fn_82810280(auStack_70,auStack_64);
          dVar9 = (double)fn_82809CB0();
          if (dVar10 <= dVar9) goto LAB_8305e2a0;
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 0xc;
      }
LAB_8305e2a0:
      uVar2 = *(uint *)(param_1 + 0x30);
      iVar7 = iVar7 + 4;
      bVar1 = (int)uVar8 < (int)uVar2;
      uVar8 = uVar8 + 1;
    } while (bVar1);
    if (1 < iVar5) {
LAB_8305e2c8:
      fn_82810240(auStack_70,auStack_64,param_2);
      fn_82810B78(param_2,param_2);
      fn_82810240(param_2,auStack_70,auStack_80);
      dVar10 = (double)fn_82810280(auStack_80,auStack_64);
      if (dVar10 < (double)lbl_821AAD20) {
        fn_82810530(param_2,param_2);
      }
      return 1;
    }
  }
  return 0;
}

