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
extern int fn_82A49BE0();
extern int fn_82A59718();
extern int fn_82A598F0();
extern int fn_82A761A0();
extern int fn_82A773C0();
extern int fn_82A77860();
extern int fn_82A81840();


undefined8
fn_82A78340(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5
             )

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (((int)param_3 == 0) || (uVar1 = fn_82A81840(param_1,param_3), -1 < (int)uVar1)) {
    if ((param_4 & 0xffffffff) != 0) {
      uVar1 = fn_82A773C0(param_1,param_4);
    }
    if (-1 < (int)uVar1) {
      iVar2 = fn_82A49BE0(param_2);
      *(int *)(param_1 + 0x78) = iVar2;
      if (iVar2 != 0) {
        uVar1 = fn_82A59718(*(undefined4 *)(param_1 + 4),param_5);
        iVar2 = fn_82A598F0(param_1 + 0x38,uVar1);
        if (iVar2 != 0) {
          fn_82A761A0(uVar1);
          uVar1 = fn_82A77860(param_1);
          return uVar1;
        }
      }
      uVar1 = 0xffffffff8007000e;
    }
  }
  return uVar1;
}

