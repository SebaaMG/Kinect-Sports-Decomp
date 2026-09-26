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
extern int fn_82EE5898();
extern unsigned int uStack_3e;
extern unsigned int uStack_40;


longlong fn_82E5DFB8(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  int *piStack_3c;
  uint auStack_38 [14];
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (undefined4 *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    uVar3 = 0;
    *param_3 = 0;
    piStack_3c = (int *)0x0;
    auStack_38[0] = 0;
    lVar2 = (**(code **)(*param_2 + 0x1c))(param_2,0xffffffff82154a98,&piStack_3c);
    piVar1 = piStack_3c;
    if ((-1 < lVar2) && (lVar2 = (**(code **)(*param_1 + 0xc))(param_1,auStack_38), -1 < lVar2)) {
      if (auStack_38[0] != 0) {
        do {
          lVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar3,&uStack_3e,&uStack_40);
          if ((lVar2 < 0) || (lVar2 = fn_82EE5898(piVar1,uStack_3e,uStack_40), lVar2 < 0))
          goto LAB_82e5e0bc;
          uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffffffff) < (ulonglong)auStack_38[0]);
      }
      *param_3 = piStack_3c;
      if (piStack_3c == (int *)0x0) {
        return lVar2;
      }
      (**(code **)(*piStack_3c + 4))();
    }
LAB_82e5e0bc:
    if (piStack_3c != (int *)0x0) {
      (**(code **)(*piStack_3c + 8))();
    }
  }
  return lVar2;
}

