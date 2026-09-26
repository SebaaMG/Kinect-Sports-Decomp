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
extern unsigned int *auStack_2c;
extern int fn_82975B00();
extern unsigned int uStack_30;


uint fn_82953CA8(int *param_1,int param_2,uint *param_3,undefined8 param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uStack_30;
  uint auStack_2c [11];
  
  uVar6 = 0;
  uStack_30 = 0;
  auStack_2c[0] = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iVar2 = *(int *)(param_2 + 4);
  if (param_1[0x22] == iVar2) {
    auStack_2c[0] = *(uint *)(param_2 + 0xc);
    uStack_30 = 0;
    if ((uint)param_1[0xb] <= auStack_2c[0]) {
      uVar4 = 0x1199;
      uVar5 = 0xffffffff82037a48;
LAB_82953d10:
      fn_82975B00(param_1,*(undefined4 *)(param_1[0x41] + 0x3c),uVar4,uVar5);
      return 0x88760b59;
    }
    uVar1 = param_1[0x14];
    uVar3 = auStack_2c[0];
    if ((uVar1 != 0) && (uVar1 <= auStack_2c[0])) {
      uVar6 = 3;
      uStack_30 = 3;
      uVar3 = auStack_2c[0] - uVar1;
      auStack_2c[0] = auStack_2c[0] - uVar1;
    }
  }
  else if (param_1[0x23] == iVar2) {
    auStack_2c[0] = *(uint *)(param_2 + 0xc);
    uVar6 = 3;
    uStack_30 = 3;
    uVar3 = 0;
    if (auStack_2c[0] != 0) {
      uVar4 = 0x119c;
      uVar5 = 0xffffffff82037a20;
      goto LAB_82953d10;
    }
  }
  else if (param_1[0x21] == iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x158))(param_1,param_2,auStack_2c,&uStack_30);
    if (iVar2 < 0) {
      return 0x80004005;
    }
    uVar6 = (ulonglong)uStack_30;
    uVar3 = auStack_2c[0];
  }
  else {
    if (param_1[0x24] != iVar2) {
      fn_82975B00(param_1,0,0,0xffffffff820379c4);
      return 0x80004005;
    }
    uVar3 = *(uint *)(param_2 + 0xc);
    uVar6 = 0x13;
    uStack_30 = 0x13;
    auStack_2c[0] = uVar3;
    if ((uint)param_1[0xd] <= uVar3) {
      uVar4 = 0x11c5;
      uVar5 = 0xffffffff820379f4;
      goto LAB_82953d10;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)(((uVar6 & 7) << 0x14 | 0x800000 | uVar6 & 0x18) << 8) | uVar3 & 0x7ff;
  }
  uVar3 = (**(code **)(*param_1 + 0x150))(param_1,param_2,param_4);
  return (int)uVar3 >> 0x1f & uVar3;
}

