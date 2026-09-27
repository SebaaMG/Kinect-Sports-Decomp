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
extern int memcpy();
extern int fn_82FE1028();
extern int fn_82FE1178();
extern int fn_82FE11F8();
extern int fn_82FE17C0();
extern int fn_82FE2018();
extern float lbl_82006848;


void fn_82FE2850(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  fn_82FE1028();
  bVar2 = *(int *)(param_2 + 8) == 0x11;
  if (bVar2) {
    if ((*(char *)(param_1 + 0xd3) != '\0') || (*(char *)(param_1 + 0xd2) == '\0')) {
      *(int *)(param_1 + 0xbc) =
           (int)(longlong)
                ((*(float *)(param_1 + 0x138) * lbl_82006848 + *(float *)(param_1 + 0xe4)) *
                (float)*(uint *)(param_1 + 200));
    }
    uVar1 = *(uint *)(param_1 + 0xbc);
    uVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) - (ulonglong)*(ushort *)(param_2 + 0xe);
    if ((ulonglong)uVar1 < (uVar3 & 0xffffffff)) {
      uVar3 = (ulonglong)uVar1;
    }
    *(uint *)(param_1 + 0xbc) = uVar1 - (int)uVar3;
    lVar4 = (-(*(ushort *)(param_2 + 0xe) + uVar3) & 3) + uVar3;
    fn_82FE1178(param_1,param_2,lVar4);
    *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + (short)lVar4;
    if (*(int *)(param_1 + 0xbc) != 0) {
      *(undefined4 *)(param_2 + 8) = 0x2d;
    }
  }
  *(bool *)(param_1 + 0xd2) = bVar2;
  uVar1 = *(uint *)(param_2 + 4);
  if (0xf < uVar1) {
    switch(uVar1) {
    case 0x33:
      goto LAB_82fe2a00;
    case 0x37:
    case 0x3b:
    case 0x3f:
      fn_82FE2018(param_1,param_2);
    }
    goto switchD_82f20fb0_default;
  }
  if (uVar1 == 0xf) {
LAB_82fe2a00:
    fn_82FE17C0(param_1,param_2);
  }
  else {
    switch(uVar1) {
    case 3:
    case 4:
    case 8:
    case 0xb:
    case 0xc:
      fn_82FE11F8(param_1,param_2);
      break;
    case 7:
      goto LAB_82fe2a00;
    }
  }
switchD_82f20fb0_default:
  memcpy(param_1 + 0x1a4,param_1 + 0xe4,0x50);
  return;
}

