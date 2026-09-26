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
extern int fn_82E58B58();


longlong fn_82E41B70(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 auStack_40 [8];
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    auStack_40[0] = 0;
    lVar1 = (**(code **)(*param_2 + 0x8c))(param_2,auStack_40);
    if (-1 < lVar1) {
      *(undefined8 *)(param_1 + 0x5b0) = auStack_40[0];
      lVar1 = (**(code **)(*param_2 + 0x94))(param_2,(undefined8 *)(param_1 + 0x5b8));
      if ((int)lVar1 == -0x3ff2c937) {
        lVar1 = 0;
        *(undefined8 *)(param_1 + 0x5b8) = 0;
      }
      if (-1 < (int)lVar1) {
        iVar2 = fn_82E58B58(param_1 + 0x4b4,param_2);
        if (iVar2 == 0) {
          lVar1 = -0x7ff8fff2;
        }
        else {
          (**(code **)(*param_2 + 4))(param_2);
          *(longlong *)(param_1 + 0x5a8) = *(longlong *)(param_1 + 0x5a8) + 1;
        }
      }
    }
  }
  return lVar1;
}

