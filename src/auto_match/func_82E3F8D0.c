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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_82E3BDF8();
extern int fn_82E3C690();
extern int fn_82E3D9C0();
extern int fn_82E6F3A0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


longlong fn_82E3F8D0(int param_1)

{
  longlong lVar1;
  int iVar2;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [64];
  
  piStack_54 = (int *)0x0;
  piStack_5c = (int *)0x0;
  piStack_60 = (int *)0x0;
  piStack_58 = (int *)0x0;
  lVar1 = (**(code **)**(undefined4 **)(param_1 + 0x48))
                    (*(undefined4 **)(param_1 + 0x48),0xffffffff82154c18,&piStack_54);
  if (((-1 < lVar1) &&
      (lVar1 = (**(code **)(*piStack_54 + 0x24))(piStack_54,0xffffffff8202e618,&piStack_5c),
      -1 < lVar1)) && (lVar1 = (**(code **)(*piStack_5c + 0x14))(), -1 < lVar1)) {
    uStack_4c = 0;
    iVar2 = (**(code **)(*piStack_5c + 0xc))(piStack_5c,1,&piStack_60,&uStack_4c);
    while (iVar2 == 0) {
      iVar2 = (**(code **)*piStack_60)(piStack_60,0xffffffff82154c98,&piStack_58);
      if (iVar2 < 0) {
        if (piStack_60 != (int *)0x0) {
          (**(code **)(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
      }
      else {
        if (piStack_60 != (int *)0x0) {
          (**(code **)(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
        lVar1 = fn_82E3D9C0(param_1,piStack_58);
        if (lVar1 < 0) goto LAB_82e3faa0;
        if (piStack_58 != (int *)0x0) {
          (**(code **)(*piStack_58 + 8))();
          piStack_58 = (int *)0x0;
        }
      }
      iVar2 = (**(code **)(*piStack_5c + 0xc))(piStack_5c,1,&piStack_60,&uStack_4c);
    }
    uStack_50 = 0;
    iVar2 = fn_82E3BDF8(param_1 + 0x1ac,auStack_48);
    if (iVar2 == 0) {
      lVar1 = 0;
    }
    else {
      do {
        iVar2 = fn_82E3C690(param_1 + 0x1ac,auStack_48,auStack_40,&uStack_50);
        if (iVar2 == 0) break;
        lVar1 = fn_82E6F3A0(uStack_50);
      } while (-1 < lVar1);
    }
  }
LAB_82e3faa0:
  if (piStack_54 != (int *)0x0) {
    (**(code **)(*piStack_54 + 8))();
    piStack_54 = (int *)0x0;
  }
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))();
    piStack_5c = (int *)0x0;
  }
  if (piStack_60 != (int *)0x0) {
    (**(code **)(*piStack_60 + 8))();
    piStack_60 = (int *)0x0;
  }
  if (piStack_58 != (int *)0x0) {
    (**(code **)(*piStack_58 + 8))();
  }
  return lVar1;
}

