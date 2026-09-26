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
extern unsigned int iStack_34;


longlong fn_82E62AD8(int *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  uint auStack_30 [12];
  
  if (param_1 == (int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    piStack_38 = (int *)0x0;
    piStack_40 = (int *)0x0;
    piStack_3c = (int *)0x0;
    auStack_30[0] = 0;
    iStack_34 = 0;
    lVar1 = (**(code **)(*param_1 + 0x84))(param_1,auStack_30);
    if ((-1 < lVar1) && (uVar3 = 0, auStack_30[0] != 0)) {
      while( true ) {
        iStack_34 = 0;
        if (piStack_38 != (int *)0x0) {
          (**(code **)(*piStack_38 + 8))();
          piStack_38 = (int *)0x0;
        }
        if (piStack_40 != (int *)0x0) {
          (**(code **)(*piStack_40 + 8))();
          piStack_40 = (int *)0x0;
        }
        if (piStack_3c != (int *)0x0) {
          (**(code **)(*piStack_3c + 8))();
          piStack_3c = (int *)0x0;
        }
        lVar1 = (**(code **)(*param_1 + 0x88))(param_1,uVar3,&iStack_34,&piStack_38);
        if (lVar1 < 0) goto LAB_82e62cd0;
        if (piStack_38 == (int *)0x0) break;
        if (iStack_34 == 0) {
          lVar1 = (**(code **)(*piStack_38 + 0x88))(piStack_38,&piStack_40);
          if (lVar1 < 0) goto LAB_82e62cd0;
          iVar2 = (**(code **)(*piStack_40 + 0x1c))(piStack_40,&piStack_3c);
          if (iVar2 < 0) {
            if (piStack_3c != (int *)0x0) {
              (**(code **)(*piStack_3c + 8))();
              piStack_3c = (int *)0x0;
            }
            lVar1 = (**(code **)(*piStack_40 + 0x14))(piStack_40,0,&piStack_3c);
            if ((lVar1 < 0) ||
               (lVar1 = (**(code **)(*piStack_40 + 0x18))(piStack_40,piStack_3c), lVar1 < 0))
            goto LAB_82e62cd0;
          }
          lVar1 = (**(code **)(*param_1 + 0x8c))(param_1,uVar3);
          if (lVar1 < 0) goto LAB_82e62cd0;
        }
        uVar3 = uVar3 + 1;
        if ((ulonglong)auStack_30[0] <= (uVar3 & 0xffffffff)) goto LAB_82e62cd0;
      }
      lVar1 = -0x3ff2c945;
    }
LAB_82e62cd0:
    if (piStack_38 != (int *)0x0) {
      (**(code **)(*piStack_38 + 8))();
      piStack_38 = (int *)0x0;
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

