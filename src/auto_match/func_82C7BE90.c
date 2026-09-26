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
extern int fn_82C494E8();
extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82F68CC0();


undefined8
fn_82C7BE90(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,int param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((param_4 & 0xffffffff) != 0) || (param_5 == 0)) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
    uVar1 = fn_82C562F0(lVar3,*(uint *)(param_1 + 0x55f8) + param_4,0xffffffff82196582);
    if ((uVar1 & 0xffffffff) == 0) {
      return 0xfffffffffffffff7;
    }
    if (0 < *(int *)(param_1 + 0x55f8)) {
      fn_82F68CC0(uVar1,*(undefined4 *)(param_1 + 0x55fc));
      fn_82C563B0(lVar3,*(undefined4 *)(param_1 + 0x55fc));
    }
    if (*(int *)(param_1 + 0x55f8) == 0) {
      if (param_5 == 0) {
        uVar2 = 3;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
      if (param_5 != 0) {
        uVar2 = 0;
      }
    }
    fn_82C494E8(param_1,param_2,param_3,param_4,uVar2);
    fn_82F68CC0(*(uint *)(param_1 + 0x55f8) + uVar1,param_3,param_4);
    *(int *)(param_1 + 0x55fc) = (int)uVar1;
    *(int *)(param_1 + 0x55f8) = *(int *)(param_1 + 0x55f8) + (int)param_4;
    if (param_5 == 0) {
      fn_82C563B0(lVar3,uVar1);
      *(undefined4 *)(param_1 + 0x55f8) = 0;
      *(undefined4 *)(param_1 + 0x55fc) = 0;
    }
  }
  return 0;
}

