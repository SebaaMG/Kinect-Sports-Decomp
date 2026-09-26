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
extern int fn_8265C940();
extern int fn_828F4440();
extern int fn_828F4780();
extern int fn_828F7668();
extern int fn_82A9F7E8();


ulonglong fn_828F7D48(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x2a4);
  if (-1 < (int)*(uint *)(param_1 + 0x2a4)) {
    if ((param_2 & 0xffffffff) == 0) {
      param_2 = 0xffffffff82196582;
    }
    iVar3 = fn_8265C940(0x60,0x24810000);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828F4440();
    }
    *(int *)(param_1 + 0x274) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      uVar2 = 0xffffffff8007000e;
    }
    else {
      uVar2 = fn_828F4780(uVar2,param_2,param_3,param_4,param_1,param_1 + 0x18);
      if (-1 < (int)uVar2) {
        if ((*(int *)(param_1 + 0x2b0) != 0) &&
           (iVar3 = *(int *)(*(int *)(param_1 + 0x2b0) + 0x14), iVar3 != 0)) {
          puVar1 = *(uint **)(param_1 + 0x274);
          uVar2 = fn_82A9F7E8(iVar3,puVar1[0x13],*puVar1,
                                  (ulonglong)puVar1[1] - (ulonglong)*puVar1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
        }
        uVar2 = fn_828F7668(param_1,param_5);
        if (-1 < (int)uVar2) {
          uVar2 = 0;
          *(undefined4 *)(param_1 + 0x27c) = param_6;
          *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x274);
        }
      }
    }
  }
  return uVar2;
}

