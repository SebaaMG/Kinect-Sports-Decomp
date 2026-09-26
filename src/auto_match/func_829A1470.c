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
extern unsigned int *auStack_30;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_829A1470(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  uVar4 = *(uint *)param_1[0x41] & 0xfffff;
  uVar3 = *(undefined4 *)(*(int *)((uint *)param_1[0x41])[4] * 4 + param_1[5]);
  if (*(short *)((int)param_1 + 0xca) == 0x104) {
    uVar5 = fn_8295D0A8(param_1,0x40);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x140))(param_1,uVar3,&uStack_40,0,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x144))
                      (param_1,*(undefined4 *)(param_1[0x41] + 0x10),uVar4,&uStack_38,uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x138))(param_1,uStack_40,0x70000,0);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    piVar1 = *(int **)(param_1[0x41] + 8);
    uVar5 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*piVar1 * 4 + param_1[5]),&uStack_40,&uStack_34);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x14c))(param_1,piVar1,uVar4,uStack_38,auStack_30);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = 0xe40000;
    pcVar2 = *(code **)(*param_1 + 0x13c);
  }
  else {
    uVar5 = fn_8295D0A8(param_1,0x40);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x140))(param_1,uVar3,&uStack_40,0,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x144))
                      (param_1,*(undefined4 *)(param_1[0x41] + 0x10),uVar4,&uStack_38,uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uStack_34 = 0;
    uVar5 = 0xf0000;
    pcVar2 = *(code **)(*param_1 + 0x138);
  }
  uVar5 = (*pcVar2)(param_1,uStack_40,uVar5,uStack_34);
  if (((-1 < (int)uVar5) && (uVar5 = (**(code **)(*param_1 + 0x134))(param_1), -1 < (int)uVar5)) &&
     (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)) {
    uVar5 = 0;
  }
  return uVar5;
}

