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
extern unsigned int *auStack_38;
extern int fn_82E51480();
extern int fn_82E51A98();
extern int fn_82E520C8();


longlong fn_82E529A0(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piStack_40;
  int *piStack_3c;
  uint auStack_38 [14];
  
  if (param_2 == (undefined4 *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    piStack_40 = (int *)0x0;
    piStack_3c = (int *)0x0;
    lVar1 = (**(code **)*param_2)(param_2,0xffffffff82153ddc,&piStack_40);
    if (-1 < lVar1) {
      iVar3 = param_1 + -0x4c;
      lVar1 = fn_82E51480(iVar3);
      if (-1 < lVar1) {
        auStack_38[0] = 0;
        lVar1 = (**(code **)(*piStack_40 + 0x84))(piStack_40,auStack_38);
        if (-1 < lVar1) {
          if ((auStack_38[0] == 0) || (0x7f < auStack_38[0])) {
            lVar1 = -0x3ff2b9a7;
          }
          else {
            *(short *)(param_1 + 0x10) = (short)auStack_38[0];
            lVar1 = (**(code **)(*piStack_40 + 0x88))(piStack_40,&piStack_3c);
            if (-1 < lVar1) {
              iVar2 = (**(code **)(*piStack_3c + 0x1c))(piStack_3c,param_1 + 0x14);
              if ((((-1 < iVar2) ||
                   (lVar1 = (**(code **)(*piStack_3c + 0x14))(piStack_3c,0,param_1 + 0x14),
                   -1 < lVar1)) &&
                  (lVar1 = (**(code **)(*piStack_40 + 0x80))(piStack_40,iVar3), -1 < lVar1)) &&
                 ((lVar1 = fn_82E51A98(iVar3), -1 < lVar1 &&
                  (lVar1 = fn_82E520C8(iVar3), lVar1 < 0)))) {
                lVar1 = -0x3ff2b9a8;
              }
            }
          }
        }
      }
    }
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*piStack_40 + 8))();
      piStack_40 = (int *)0x0;
    }
    if (piStack_3c != (int *)0x0) {
      (**(code **)(*piStack_3c + 8))();
    }
  }
  return lVar1;
}

