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
#define CONCAT26(h,l) ((U64)((((U16)(h)) << 48) | ((U64)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EE0458();
extern int fn_82EE0FD0();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


longlong fn_82EE1260(int *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (param_2 == 0) {
    return -0x7ff8ffa9;
  }
  if (0xfffe < (uint)param_1[0x95]) {
    return -0x3ff2c94e;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if (lVar1 < 0) {
    return lVar1;
  }
  uVar2 = fn_82E50BE8(*(undefined2 *)(param_2 + 8),0,0,0,0);
  uVar3 = fn_82E50BE8(*(undefined4 *)(param_2 + 0x10),0,0,0,0);
  if (((uVar2 & 0xffffffff) == 0) || ((uVar3 & 0xffffffff) == 0)) {
    lVar1 = -0x7ff8fff2;
  }
  else {
    uStack_48 = CONCAT44((((U64)(uStack_48) >> 0) & 0xFFFFFFFF),(int)uVar2);
    uStack_48 = CONCAT26(*(undefined2 *)(param_2 + 8),(((U64)(uStack_48) >> 16) & 0xFFFFFFFFFFFF));
    uStack_40 = CONCAT44(*(undefined4 *)(param_2 + 0x10),(int)uVar3);
    lVar1 = fn_82EE0458(param_1,param_2,&uStack_50);
    if (lVar1 < 0) goto LAB_82ee1388;
    iVar4 = fn_82EE0FD0(param_1 + 0x12,uStack_50,uStack_48,uStack_40,0);
    if (iVar4 == 0) {
      lVar1 = -0x7fffbffb;
      goto LAB_82ee1388;
    }
  }
  if (-1 < (int)lVar1) {
    return lVar1;
  }
LAB_82ee1388:
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar2);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar3);
  }
  return lVar1;
}

