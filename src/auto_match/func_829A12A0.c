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
extern unsigned int *auStack_28;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_829A12A0(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [10];
  
  uVar1 = *(uint *)param_1[0x41];
  if (*(short *)((int)param_1 + 0xca) == 0x104) {
    uVar5 = fn_8295D0A8(param_1,0x42);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x140))
                      (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                       &uStack_30,0,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x138))(param_1,uStack_30,0xf0000,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    iVar4 = (uVar1 & 0xfffff) * 4;
    iVar2 = *(int *)(param_1[0x41] + 8);
    uVar5 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*(int *)(iVar4 + iVar2) * 4 + param_1[5]),&uStack_30,
                       &uStack_2c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x14c))
                      (param_1,iVar4 + iVar2,uVar1 & 0xfffff,0xf0000,auStack_28);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    pcVar3 = *(code **)(*param_1 + 0x13c);
  }
  else {
    uVar5 = fn_8295D0A8(param_1,0x42);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x140))
                      (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                       &uStack_30,0,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uStack_2c = 0;
    auStack_28[0] = 0xf0000;
    pcVar3 = *(code **)(*param_1 + 0x138);
  }
  uVar5 = (*pcVar3)(param_1,uStack_30,auStack_28[0],uStack_2c);
  if (((-1 < (int)uVar5) && (uVar5 = (**(code **)(*param_1 + 0x134))(param_1), -1 < (int)uVar5)) &&
     (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)) {
    uVar5 = 0;
  }
  return uVar5;
}

