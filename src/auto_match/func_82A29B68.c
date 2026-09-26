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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_82A2B748();
extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_38;
extern unsigned int uStack_70;


ulonglong fn_82A29B68(undefined8 param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [40];
  ulonglong uStack_38;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = (ulonglong)param_2;
  }
  else {
    uStack_70 = CONCAT44(*param_3,param_2);
    uVar3 = uStack_70;
  }
  if (param_4 != 0) {
    if ((param_4 == 1) || (2 < param_4)) {
      iVar2 = (**(code **)(lbl_8315D3D0 + 0x20))(param_1,auStack_68,&uStack_70,8,0xe);
      uStack_38 = uStack_70;
    }
    else {
      iVar2 = (**(code **)(lbl_8315D3D0 + 0x20))(param_1,auStack_68,auStack_60,0x38,0x22);
    }
    if (iVar2 < 0) {
      fn_82A2B760();
      return 0xffffffffffffffff;
    }
    uVar3 = uStack_38 + uVar3;
  }
  uStack_70 = uVar3;
  if ((longlong)uVar3 < 0) {
    uVar1 = 0x83;
  }
  else {
    if ((param_3 != (undefined4 *)0x0) || ((uVar3 & 0x7fffffff00000000) == 0)) {
      iVar2 = (**(code **)(lbl_8315D3D0 + 0x24))(param_1,auStack_68,&uStack_70,8,0xe);
      if (-1 < iVar2) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
        }
        if ((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) == -1) {
          thunk_FUN_82a2b748(0);
        }
        return uStack_70 & 0xffffffff;
      }
      fn_82A2B760();
      if (param_3 == (undefined4 *)0x0) {
        return 0xffffffffffffffff;
      }
      *param_3 = 0xffffffff;
      return 0xffffffffffffffff;
    }
    uVar1 = 0x57;
  }
  fn_82A2B748(uVar1);
  return 0xffffffffffffffff;
}

