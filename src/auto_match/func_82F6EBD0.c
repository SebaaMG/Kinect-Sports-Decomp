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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6E8F8();


undefined4
fn_82F6EBD0(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,uint param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 != 0) goto LAB_82f6ec74;
  }
  else if (param_3 == 0) goto LAB_82f6ec74;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
  }
  uVar3 = param_3;
  if (param_5 <= param_3) {
    uVar3 = param_5;
  }
  if (uVar3 < 0x80000000) {
    iVar1 = fn_82F6E8F8(param_2,param_4,uVar3,param_6);
    if (iVar1 == -1) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      puVar2 = (undefined4 *)fn_82F68240();
      return *puVar2;
    }
    uVar3 = iVar1 + 1;
    if (param_2 != (undefined1 *)0x0) {
      if (param_3 < uVar3) {
        if ((param_5 != 0xffffffff) && (*param_2 = 0, param_3 <= uVar3)) {
          puVar2 = (undefined4 *)fn_82F68240();
          *puVar2 = 0x22;
          fn_82F63BA0();
          return 0x22;
        }
        uVar4 = 0x50;
        uVar3 = param_3;
      }
      param_2[uVar3 - 1] = 0;
    }
    if (param_1 == (uint *)0x0) {
      return uVar4;
    }
    *param_1 = uVar3;
    return uVar4;
  }
LAB_82f6ec74:
  puVar2 = (undefined4 *)fn_82F68240(param_1,param_4);
  *puVar2 = 0x16;
  fn_82F63BA0();
  return 0x16;
}

