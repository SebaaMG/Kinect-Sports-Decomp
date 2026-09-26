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
extern unsigned int fStack_3c;
extern int fn_822A21A8();
extern int fn_8248FAB0();
extern int fn_824907B0();
extern int fn_82490900();
extern int fn_82490BE8();
extern int fn_82490DD8();
extern int fn_824912B8();
extern int fn_82491468();
extern unsigned int iStack_40;
extern int (*lbl_83276778)();
extern int (*lbl_8327677C)();


undefined8 fn_824904F0(double param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack_40;
  float fStack_3c;
  
  if (param_2[0x14] != 0) {
    if (param_2[0xf] == 0) {
      if (param_2[0x18] == 0) {
        if (((param_2[0x19] != 0) && (iVar1 = fn_822A21A8(), iVar1 != 0)) &&
           (param_2[0x11] != 0)) {
          fn_82490BE8(param_2);
          if (lbl_8327677C != (code *)0x0) {
            (*lbl_8327677C)(0xffffffff821beb68,0xffffffff821beb18,0xe6);
          }
          param_2[0x19] = 0;
          param_2[0x10] = 0;
          param_2[0x11] = 0;
          return 0;
        }
      }
      else {
        iVar1 = fn_822A21A8();
        if (iVar1 != 0) {
          if (lbl_8327677C != (code *)0x0) {
            (*lbl_8327677C)(0xffffffff821beb68,0xffffffff821beb18,0xd8);
          }
          fn_824907B0(param_2);
          param_2[0x18] = 0;
        }
      }
    }
    else {
      if ((param_2[0x18] == 0) && (param_2[0x10] == 0)) {
        if (lbl_83276778 != (code *)0x0) {
          (*lbl_83276778)(0,0,1,0xffffffff821beb68,0xffffffff821beb18,0xce);
        }
        param_2[0x18] = 1;
      }
      param_2[0xf] = 0;
    }
    if (param_2[0x10] != 0) {
      iVar1 = fn_824912B8(param_2);
      if (iVar1 != 0) {
        if (lbl_83276778 != (code *)0x0) {
          (*lbl_83276778)(0,0,1,0xffffffff821beb68,0xffffffff821beb18,0xf6);
        }
        param_2[0x19] = 1;
      }
      if ((param_2[0x11] == 0) && (iVar1 = fn_82490900(param_1,param_2), iVar1 == 0)) {
        param_2[0x11] = 1;
      }
      return 1;
    }
    iStack_40 = *param_2;
    fStack_3c = (float)param_1;
    fn_82491468(param_2 + 1,&iStack_40);
    puVar2 = (undefined4 *)param_2[8];
    if (puVar2 != (undefined4 *)param_2[9]) {
      do {
        (**(code **)(*(int *)*puVar2 + 0xc))(param_1);
        puVar2 = puVar2 + 1;
      } while (puVar2 != (undefined4 *)param_2[9]);
    }
    *param_2 = *param_2 + 1;
    if (param_2[7] != 0) {
      fn_8248FAB0(param_2[7],param_2);
    }
    if ((uint)param_2[0x13] < (uint)(param_2[2] - param_2[1] >> 3)) {
      fn_82490DD8(param_2);
    }
    if (param_2[7] != 0) {
      fn_8248FAB0(param_2[7],param_2);
    }
  }
  return 0;
}

