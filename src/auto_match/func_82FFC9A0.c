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
extern int fn_82FF9FA8();
extern int fn_82FFBCA8();
extern int fn_82FFC4C8();
extern int fn_8300EE60();
extern int fn_8302B580();


undefined8 fn_82FFC9A0(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  uVar3 = fn_82FFC4C8(param_1,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2),
                            *(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                            (ulonglong)param_2[8] << 0x20,aiStack_40,0);
  iVar2 = aiStack_40[0];
  if ((int)uVar3 == 0x45) {
    uVar3 = 1;
    uVar6 = 0x45;
  }
  else if ((int)uVar3 == 1) {
    *(byte *)(aiStack_40[0] + 0x48) = *(byte *)(aiStack_40[0] + 0x48) | 0x80;
    fn_8302B580(param_1 + 0x39c,param_2[4]);
    uVar6 = 1;
  }
  else {
    uVar6 = uVar3;
    if (aiStack_40[0] != 0) {
      fn_82FF9FA8(aiStack_40[0]);
      fn_82FFBCA8(iVar2,1);
    }
  }
  uVar1 = *param_2;
  uVar5 = 0xffffffffffffffff;
  uVar4 = 0;
  if (uVar1 < 8) {
    if (uVar1 == 1) {
LAB_82ffca84:
      uVar5 = (ulonglong)param_2[5];
LAB_82ffca88:
      uVar4 = param_2[4];
      goto LAB_82ffcaa8;
    }
    if ((uVar1 != 2) && (uVar1 != 3)) {
      if (uVar1 == 4) goto LAB_82ffcaa8;
      if (uVar1 != 5) {
        if ((uVar1 != 6) && (uVar1 == 0)) goto LAB_82ffca84;
        goto LAB_82ffca88;
      }
    }
  }
  if (param_2[4] == 1) {
    uVar4 = param_2[5];
  }
  else {
    uVar4 = 0;
  }
LAB_82ffcaa8:
  fn_8300EE60(param_1 + 0x4a4,param_2[1],uVar4,uVar6,uVar5,param_2[2]);
  return uVar3;
}

