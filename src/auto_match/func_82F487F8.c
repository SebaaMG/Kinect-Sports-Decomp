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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F691F0();


longlong fn_82F487F8(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar4;
  ulonglong uVar3;
  ushort *puVar5;
  
  piVar1 = (int *)param_1[5];
  if (piVar1 == (int *)0x0) {
    lVar2 = -0x3ff2c94e;
  }
  else {
    puVar5 = (ushort *)(param_1 + 6);
    lVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,puVar5);
    if (-1 < lVar2) {
      param_1[7] = (uint)*puVar5 << 2;
      iVar4 = (**(code **)(*param_1 + 0x50))(param_1);
      if (iVar4 != 0) {
        param_1[7] = param_1[7] + 4;
      }
      param_1[0x17] = (uint)*puVar5 * 8 + 4;
      iVar4 = (**(code **)(*param_1 + 0x50))(param_1);
      if (iVar4 != 0) {
        param_1[0x17] = param_1[0x17] + 2;
      }
      lVar2 = (**(code **)(*(int *)param_1[5] + 0x2c))((int *)param_1[5],param_1 + 8);
      if (-1 < lVar2) {
        if (*puVar5 < 0x80) {
          if (param_1[0xb] != 0) {
            fn_82E4FE40();
          }
          param_1[0xb] = 0;
          uVar3 = fn_82E50BE8((ulonglong)*puVar5 << 3,0,0,0,0);
          param_1[0xb] = (int)uVar3;
          if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(uVar3,0,(ulonglong)*puVar5 << 3);
          }
          lVar2 = -0x7ff8fff2;
        }
        else {
          lVar2 = -0x7fffbffb;
        }
      }
    }
  }
  return lVar2;
}

