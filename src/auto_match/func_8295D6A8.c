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
extern unsigned int *auStack_50;
extern int fn_828F6FA8();
extern int fn_828FC450();
extern int fn_828FCDE0();
extern int fn_829548C8();
extern int fn_8295A330();
extern int fn_8295D0A8();


undefined8 fn_8295D6A8(int *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_50 [80];
  
  if (param_1[0x57] == 0) {
    uVar3 = param_2 & 0x7ff;
    if ((param_2 & 0xffffffff) < 0x800) {
      uVar3 = uVar3 | 0xa0000000;
    }
    else {
      if ((param_2 & 0xffffffff) < 0x1000) {
        uVar4 = uVar3 | 0xb0000000;
      }
      else {
        uVar4 = uVar3 | 0xc0000000;
        if (0x17ff < (param_2 & 0xffffffff)) {
          uVar4 = uVar3 | 0xd0000000;
        }
      }
      uVar3 = uVar4 | 0x800;
    }
    uVar1 = fn_8295D0A8(param_1,0x51);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x138))(param_1,uVar3,0xf0000,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_8295A330(param_1,*param_3);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_8295A330(param_1,param_3[1]);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_8295A330(param_1,param_3[2]);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_8295A330(param_1,param_3[3]);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x134))(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_829548C8(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else {
    fn_828F6FA8(auStack_50,0x20,0xffffffff82038330,param_2);
    uVar1 = fn_828FCDE0(param_1 + 0x6e,auStack_50,param_2,1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    iVar2 = fn_828FC450(param_1 + 0x6e,auStack_50);
    *(undefined4 *)(iVar2 + 0xc) = 1;
    *(undefined4 *)(iVar2 + 0x10) = *param_3;
    *(undefined4 *)(iVar2 + 0x14) = param_3[1];
    *(undefined4 *)(iVar2 + 0x18) = param_3[2];
    *(undefined4 *)(iVar2 + 0x1c) = param_3[3];
    param_1[0x7e] = param_1[0x7e] + 1;
  }
  return 0;
}

