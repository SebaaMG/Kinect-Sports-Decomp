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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_38;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_829A0DC0(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uStack_40;
  uint uStack_3c;
  undefined4 auStack_38 [14];
  
  puVar2 = (uint *)param_1[0x41];
  uVar6 = (ulonglong)*puVar2;
  uVar4 = uVar6 & 0xfffff;
  piVar3 = (int *)puVar2[2];
  if (uVar4 == puVar2[1]) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uVar6 & 0xfffff) * 4 + ZEXT48(piVar3);
  }
  if ((uVar6 & 0xfffff) << 1 < (ulonglong)*(uint *)(param_1[0x41] + 4)) {
    uVar6 = (uVar6 & 0xfffff) * 8 + ZEXT48(piVar3);
  }
  else {
    uVar6 = 0;
  }
  uVar5 = fn_8295D0A8(param_1);
  if (-1 < (int)uVar5) {
    bVar1 = *(byte *)(*(int *)(*piVar3 * 4 + param_1[5]) + 0x6e);
    uStack_3c = bVar1 | 0xb0000000;
    uStack_40 = (uint)bVar1;
    uVar5 = (**(code **)(*param_1 + 0x138))(param_1,uStack_3c,0xf0000,0);
    if (-1 < (int)uVar5) {
      if ((uVar7 & 0xffffffff) != 0) {
        uVar5 = (**(code **)(*param_1 + 0x148))
                          (param_1,*(undefined4 *)(*(int *)uVar7 * 4 + param_1[5]),&uStack_3c,
                           &uStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = (**(code **)(*param_1 + 0x14c))(param_1,uVar7,uVar4,0xf0000,auStack_38);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_3c,auStack_38[0],uStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      if ((uVar6 & 0xffffffff) != 0) {
        uVar5 = (**(code **)(*param_1 + 0x148))
                          (param_1,*(undefined4 *)(*(int *)uVar6 * 4 + param_1[5]),&uStack_3c,
                           &uStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = (**(code **)(*param_1 + 0x14c))(param_1,uVar6,uVar4,0xf0000,auStack_38);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_3c,auStack_38[0],uStack_40);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      uVar5 = (**(code **)(*param_1 + 0x134))(param_1);
      if ((-1 < (int)uVar5) && (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)) {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

