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
extern int fn_82E6EFF0();
extern int fn_82E715A8();


longlong fn_82E71B58(int *param_1)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  int *piStack_30;
  uint auStack_2c [11];
  
  piStack_30 = (int *)0x0;
  lVar1 = fn_82E6EFF0(param_1,param_1[0x16]);
  if (-1 < lVar1) {
    auStack_2c[0] = 0;
    lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x3c))((int *)param_1[0x16],auStack_2c);
    if (-1 < lVar1) {
      uVar3 = 0;
      if (auStack_2c[0] != 0) {
        do {
          lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x40))
                            ((int *)param_1[0x16],uVar3,&piStack_30);
          if (lVar1 < 0) goto LAB_82e71c4c;
          lVar1 = fn_82E715A8(param_1,piStack_30);
          if (lVar1 < 0) goto LAB_82e71c4c;
          if (piStack_30 != (int *)0x0) {
            (**(code **)(*piStack_30 + 8))();
            piStack_30 = (int *)0x0;
          }
          uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffffffff) < (ulonglong)auStack_2c[0]);
      }
      piVar2 = (int *)(**(code **)(*param_1 + 0x20))(param_1);
      if (piVar2 != (int *)0x0) {
        lVar1 = (**(code **)(*piVar2 + 0x14))();
      }
    }
  }
LAB_82e71c4c:
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))();
  }
  return lVar1;
}

