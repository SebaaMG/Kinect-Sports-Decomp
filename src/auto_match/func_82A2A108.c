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
extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8
fn_82A2A108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    uStack_34 = param_5[2];
    uStack_38 = param_5[3];
    *param_5 = 0x103;
    uVar1 = (**(code **)(lbl_8315D3D0 + 0x10))
                      (param_1,param_5[4],0,-(uint)((param_5[4] & 1) == 0) & (uint)param_5,param_5,
                       param_2,param_3,&uStack_38);
    iVar2 = (int)uVar1;
    if ((-1 < iVar2) && (iVar2 != 0x103)) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_5[1];
      }
      return 1;
    }
    if ((iVar2 == -0x3fffffef) && (uVar1 = 0xffffffffc0000011, param_4 != (undefined4 *)0x0)) {
      *param_4 = 0;
    }
    goto LAB_82a2a274;
  }
  uVar1 = (**(code **)(lbl_8315D3D0 + 0x10))(param_1,0,0,0,&uStack_40,param_2,param_3,0);
  if ((int)uVar1 == 0x103) {
    uVar1 = NtWaitForSingleObjectEx(param_1,1,0,0);
    if (-1 < (int)uVar1) {
      uVar1 = (ulonglong)uStack_40;
      goto LAB_82a2a228;
    }
  }
  else {
LAB_82a2a228:
    if (-1 < (int)uVar1) {
      *param_4 = uStack_3c;
      return 1;
    }
  }
  if ((int)uVar1 == -0x3fffffef) {
    *param_4 = 0;
    return 1;
  }
  if ((uVar1 & 0xc0000000) == 0x80000000) {
    *param_4 = uStack_3c;
  }
LAB_82a2a274:
  fn_82A2B760(uVar1);
  return 0;
}

