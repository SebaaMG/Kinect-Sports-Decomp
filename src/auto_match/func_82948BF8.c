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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82941320();
extern int fn_82941418();
extern int fn_829414C0();
extern int fn_82941580();
extern int fn_82941680();
extern int fn_82941800();
extern int fn_82941938();
extern int fn_82947568();
extern unsigned int iStack_104;
extern unsigned int iStack_110;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_fc;


uint fn_82948BF8(int *param_1,int param_2,undefined8 param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  bool bVar6;
  int iStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  if (param_4 == (uint *)0x0) {
    param_4 = &uStack_10c;
  }
  else {
    uStack_10c = *param_4;
  }
  uVar2 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                     &uStack_108,param_4,&uStack_fc);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x144))
                    (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                     *(undefined4 *)(param_1[0x41] + 0xc),&iStack_110,uStack_fc);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar5 = 0;
  if (((iStack_110 != 0xf0000) || (uStack_10c != 0)) || (bVar1 = false, param_1[0x1c5] != 0)) {
    bVar1 = true;
  }
  bVar6 = (uStack_10c & 0xff0000) != 0;
  if (iStack_110 == 0xf0000) {
    if (param_1[0x1c5] != 0) {
      uVar2 = fn_829414C0(param_1);
      goto LAB_82948ce8;
    }
    if (bVar6) {
      uVar2 = fn_82941580(param_1);
      goto LAB_82948ce8;
    }
  }
  else {
    uVar2 = fn_82941418(param_1,iStack_110);
LAB_82948ce8:
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  if (bVar1) {
    fn_82936290(auStack_b0,0x20,0xffffffff820347dc);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    fn_82941320(param_1,uStack_108,auStack_b0,0x20,0);
    puVar4 = auStack_b0;
  }
  uVar2 = (**(code **)(*param_1 + 0x148))
                    (param_1,*(undefined4 *)
                              (*(int *)(*(int *)(param_1[0x41] + 8) + param_2 * 4) * 4 + param_1[5])
                     ,&uStack_100,auStack_f8);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x14c))
                    (param_1,*(int *)(param_1[0x41] + 8) + param_2 * 4,param_3,iStack_110,
                     &iStack_104);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = fn_82947568(param_1,puVar4,1,&uStack_100,auStack_f8,&iStack_104,auStack_f0,0x20);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if (!bVar1) {
    if (((iStack_104 == 0xe40000) && ((uStack_100 & 0xf000000) == 0)) && (param_1[0x1c6] != 0)) {
      do {
        uVar2 = fn_82941178(param_1);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        fn_828F6FA8(auStack_70,0x20,auStack_b0,uVar5,uVar5);
        fn_828F6FA8(auStack_90,0x20,auStack_f0,uVar5,uVar5);
        uVar2 = fn_829410A8(param_1,0xffffffff82035898,auStack_70,auStack_90);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    goto LAB_82948ffc;
  }
  fn_82941320(param_1,uStack_108,auStack_d0,0x20,0);
  if (param_1[0x1c5] == 0) {
LAB_82948e58:
    if (iStack_110 != 0xf0000) {
      if ((uStack_10c != 0) || (uVar3 = 0, param_1[0x1c5] != 0)) {
        uVar3 = 1;
      }
      uVar2 = fn_82941800(param_1,auStack_d0,iStack_110,uVar3,auStack_f0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
  }
  else if (iStack_110 != 0xf0000) {
    uVar2 = fn_829414C0(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    goto LAB_82948e58;
  }
  if ((param_1[0x1c5] != 0) &&
     (uVar2 = fn_82941938(param_1,auStack_d0,uStack_10c,
                                -(uint)(iStack_110 == 0xf0000) & (uint)auStack_f0), (int)uVar2 < 0))
  {
    return uVar2;
  }
  if (uStack_10c != 0) {
    if ((bVar6) &&
       (((iStack_110 != 0xf0000 || (param_1[0x1c5] != 0)) &&
        (uVar2 = fn_82941580(param_1,uStack_10c), (int)uVar2 < 0)))) {
      return uVar2;
    }
    puVar4 = (undefined1 *)0x0;
    if ((iStack_110 == 0xf0000) && (param_1[0x1c5] == 0)) {
      puVar4 = auStack_f0;
    }
    uVar2 = fn_82941680(param_1,auStack_d0,uStack_10c,bVar6,0,puVar4);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
LAB_82948ffc:
  uVar2 = fn_829410A8(param_1,0xffffffff821bab90);
  return (int)uVar2 >> 0x1f & uVar2;
}

