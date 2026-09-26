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
extern unsigned int *auStack_34;
extern int fn_82F37718();
extern int fn_82F377E8();
extern int fn_82F382F0();
extern unsigned int uStack_3c;


longlong fn_82F384C0(int param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 auStack_34 [13];
  
  lVar2 = 0;
  piStack_38 = (int *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0xffffffff;
  }
  auStack_34[0] = 0;
  uStack_3c = 0;
  iVar1 = fn_82F382F0(param_1,0xffffffff820ed0a8,0,&uStack_3c);
  if (iVar1 < 0) {
    piStack_40 = (int *)0x0;
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 4))
                      (*(undefined4 **)(param_1 + 4),0xffffffff82154c48,&piStack_40);
    if ((-1 < iVar1) &&
       ((**(code **)(*piStack_40 + 0x10))(piStack_40,&piStack_38), piStack_40 != (int *)0x0)) {
      (**(code **)(*piStack_40 + 8))();
      piStack_40 = (int *)0x0;
    }
    if (piStack_38 == (int *)0x0) {
      return -0x3ff2c94a;
    }
    lVar2 = (**(code **)(*piStack_38 + 0x1c))(piStack_38,0xffffffff820ed0a8,auStack_34);
    if (lVar2 < 0) goto LAB_82f38610;
    iVar1 = fn_82F37718(param_1 + 8,auStack_34[0],&uStack_3c);
    if (iVar1 == 0) {
      lVar2 = -0x7ff8fff2;
      goto LAB_82f38610;
    }
  }
  else {
    fn_82F377E8(param_1 + 8,uStack_3c);
    if (*piStack_40 == 0) {
      lVar2 = -0x7fff0001;
      goto LAB_82f38610;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uStack_3c;
  }
LAB_82f38610:
  if (piStack_38 != (int *)0x0) {
    (**(code **)(*piStack_38 + 8))();
  }
  return lVar2;
}

