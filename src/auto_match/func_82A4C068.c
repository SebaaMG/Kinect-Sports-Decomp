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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A598F0();
extern int fn_82A5D580();


longlong fn_82A4C068(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  piVar5 = (int *)(param_1 + 0x1c);
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))(piVar5);
  if (*(int *)(param_1 + 0x17c) == 2) {
    uVar2 = fn_82A3FF60(0xffffffff83219d50,0x50,0x20970006,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82A5D580(uVar2,piVar5,param_1 + 0xc);
    }
    if (piVar3 != (int *)0x0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x48) + 0x68);
      uVar2 = (ulonglong)uVar1;
      trapDoubleWordImmediate(6,uVar2,0);
      lVar6 = (**(code **)(*piVar3 + 4))
                        (piVar3,param_2,0,param_4,
                         ((ulonglong)(uVar1 >> 1) +
                         (ulonglong)*(uint *)(*(int *)(param_1 + 0x48) + 100) * 1000) / uVar2 &
                         0xffffffff,param_5,*(code **)(*piVar3 + 4),uVar2);
      if (-1 < lVar6) {
        iVar4 = fn_82A598F0(param_1 + 0x154,piVar3);
        if (iVar4 != 0) {
          lVar6 = 0;
          *param_6 = piVar3;
          goto LAB_82a4c198;
        }
        lVar6 = -0x7ff8fff2;
      }
      (**(code **)piVar3[1])(piVar3 + 1,0);
      fn_82A4F4E0();
      goto LAB_82a4c198;
    }
  }
  lVar6 = -0x7ff8fff2;
LAB_82a4c198:
  (**(code **)(*piVar5 + 0x14))(piVar5);
  return lVar6;
}

