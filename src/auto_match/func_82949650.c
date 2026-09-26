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
extern unsigned int *auStack_110;
extern unsigned int *auStack_118;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_128;
extern unsigned int *auStack_12c;
extern unsigned int *auStack_130;
extern unsigned int *auStack_138;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_829411D0();
extern int fn_82941320();
extern int fn_82941418();
extern int fn_829414C0();
extern int fn_82941580();
extern int fn_82941680();
extern int fn_82941800();
extern int fn_82941938();
extern int fn_82947568();
extern unsigned int iStack_14c;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_150;


uint fn_82949650(int *param_1,code *param_2,undefined8 param_3,int *param_4,undefined8 param_5,
                  int *param_6,int *param_7,int *param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  uint *in_stack_0000007c;
  uint uStack_150;
  int iStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 auStack_138 [2];
  undefined1 auStack_130 [4];
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  puVar4 = (undefined1 *)0x0;
  puVar2 = (undefined1 *)0x0;
  puVar3 = (undefined1 *)0x0;
  uVar5 = 0;
  uVar1 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(*param_4 * 4 + param_1[5]),&uStack_13c,&uStack_150,
                     auStack_138);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  uVar1 = (**(code **)(*param_1 + 0x144))(param_1,param_4,param_5,&iStack_14c,auStack_138[0]);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (in_stack_0000007c == (uint *)0x0) {
    iVar6 = param_1[0x1c7];
    if (param_1[0x1c7] == 0) {
      iVar6 = iStack_14c;
    }
  }
  else {
    iStack_14c = 0x10000 << (*in_stack_0000007c & 0x3f);
    iVar6 = iStack_14c;
  }
  if (param_6 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_6 * 4 + param_1[5]),&uStack_148,auStack_120);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_6,in_stack_00000054,iVar6,auStack_130);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    puVar4 = auStack_90;
    uVar5 = 1;
  }
  if (param_7 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_7 * 4 + param_1[5]),&uStack_144,auStack_11c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_7,in_stack_00000054,iVar6,auStack_12c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    puVar2 = auStack_b0;
    uVar5 = 2;
  }
  if (param_8 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*param_8 * 4 + param_1[5]),&uStack_140,auStack_118);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x14c))(param_1,param_8,in_stack_00000054,iVar6,auStack_128);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    puVar3 = auStack_d0;
    uVar5 = 3;
  }
  uStack_148 = uStack_148 ^ in_stack_0000005c;
  uStack_144 = uStack_144 ^ in_stack_00000064;
  uStack_140 = uStack_140 ^ in_stack_0000006c;
  uVar1 = fn_82947568(param_1,0,uVar5,&uStack_148,auStack_120,auStack_130,auStack_90,0x20);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (iStack_14c == 0xf0000) {
LAB_82949920:
    if ((uStack_150 == 0) && (param_1[0x1c5] == 0)) {
      bVar7 = false;
      fn_82941320(param_1,uStack_13c,auStack_f0,0x20,0);
      goto LAB_82949954;
    }
  }
  else {
    uVar1 = fn_82941418(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (iStack_14c == 0xf0000) goto LAB_82949920;
  }
  bVar7 = true;
  fn_82936290(auStack_f0,0x20,0xffffffff820347dc);
LAB_82949954:
  if (param_2 == (code *)0x0) {
    fn_829411D0(param_1,param_3,auStack_f0,puVar4,puVar2,puVar3);
  }
  else {
    (*param_2)(param_1,auStack_f0,puVar4,puVar2,puVar3);
  }
  if (bVar7) {
    uVar1 = fn_829414C0(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    fn_82941320(param_1,uStack_13c,auStack_110,0x20,0);
    if ((uStack_150 != 0) || (uVar5 = 0, param_1[0x1c5] != 0)) {
      uVar5 = 1;
    }
    uVar1 = fn_82941800(param_1,auStack_110,iStack_14c,uVar5,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_82941938(param_1,auStack_110,uStack_150,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (uStack_150 != 0) {
      bVar7 = (uStack_150 & 0xff0000) != 0;
      if ((bVar7) && (uVar1 = fn_82941580(param_1,uStack_150), (int)uVar1 < 0)) {
        return uVar1;
      }
      uVar1 = fn_82941680(param_1,auStack_110,uStack_150,bVar7,0,0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
  }
  uVar1 = fn_829410A8(param_1,0xffffffff821bab90);
  return (int)uVar1 >> 0x1f & uVar1;
}

