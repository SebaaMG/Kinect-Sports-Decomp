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
extern unsigned int *auStack_2c;
extern int fn_82E47DC0();


longlong fn_82E48E58(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piStack_30;
  undefined4 auStack_2c [11];
  
  lVar1 = 0;
  piStack_30 = (int *)0x0;
  if ((uint)param_1[0x19] < 2) {
    if (param_1[0x19] == 1) {
      piStack_30 = *(int **)param_1[0x1d];
      if (piStack_30 == (int *)0x0) {
        return -0x7fff0001;
      }
      (**(code **)(*piStack_30 + 4))();
      goto LAB_82e48f7c;
    }
  }
  else {
    auStack_2c[0] = 0;
    lVar1 = (**(code **)(*param_1 + 0xb4))(param_1,auStack_2c);
    if ((((lVar1 < 0) || (lVar1 = fn_82E47DC0(auStack_2c[0],0,&piStack_30), lVar1 < 0)) ||
        (lVar1 = (**(code **)(*param_1 + 0xb8))(param_1,piStack_30), lVar1 < 0)) ||
       ((lVar1 = (**(code **)(*param_1 + 0xb0))(param_1), lVar1 < 0 ||
        (lVar1 = (**(code **)(*param_1 + 0xa8))(param_1,piStack_30), lVar1 < 0))))
    goto LAB_82e48f24;
LAB_82e48f7c:
    if ((int)lVar1 < 0) goto LAB_82e48f24;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = piStack_30;
    piStack_30 = (int *)0x0;
  }
LAB_82e48f24:
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))();
  }
  return lVar1;
}

