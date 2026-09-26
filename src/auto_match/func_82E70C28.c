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
extern int fn_82E6F498();
extern int fn_82E70AB8();
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_82E70C28(int *param_1,ulonglong param_2,int param_3,longlong *param_4,undefined8 *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  longlong alStack_50 [10];
  
  if (param_4 == (longlong *)0x0) {
    return 0xffffffff80004003;
  }
  *param_4 = 0;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0xffffffffffffffff;
  }
  if ((param_1[0x16] != 0) && (param_1[0xb] != 0)) {
    uStack_58 = 0;
    uVar1 = (**(code **)(*param_1 + 8))(param_1,&uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (uStack_58 != 0) {
      param_2 = param_2 / uStack_58;
      trapDoubleWordImmediate(6,(ulonglong)uStack_58,0);
      if (0xffffffff < param_2) {
        return 0xffffffffc00d3a9d;
      }
      alStack_50[0] = 0;
      uVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2,alStack_50,0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uStack_60 = 0;
      uVar1 = fn_82E6F498(param_1,alStack_50[0],&uStack_60);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if (param_3 == 0) {
        uVar2 = (ulonglong)uStack_60;
        *param_4 = (uint)param_1[0x17] * uVar2;
        if (param_5 == (undefined8 *)0x0) {
          return uVar1;
        }
        uVar1 = fn_82E70AB8(param_1,param_2,uVar2,uStack_58 * 10000,param_5,param_6,param_7,uVar2)
        ;
        return uVar1;
      }
      uStack_5c = 0;
      uVar1 = (**(code **)(*(int *)param_1[0x16] + 0x38))((int *)param_1[0x16],&uStack_5c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      do {
        param_2 = param_2 + 1;
        if (uStack_5c <= param_2) goto LAB_82e70de4;
        uStack_54 = 0;
        alStack_50[0] = alStack_50[0] + 6;
        uVar1 = fn_82E6F498(param_1,alStack_50[0],&uStack_54);
        if ((int)uVar1 < 0) goto LAB_82e70de4;
      } while (uStack_54 == uStack_60);
      uStack_60 = uStack_54;
LAB_82e70de4:
      if (uStack_5c <= param_2) {
        *param_4 = -1;
        return uVar1;
      }
      *param_4 = (ulonglong)(uint)param_1[0x17] * (ulonglong)uStack_60;
      return uVar1;
    }
  }
  return 0xffffffffc00d36bb;
}

