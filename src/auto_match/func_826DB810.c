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
extern int fn_8267ADA8();
extern int fn_8267B890();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826D8C80();
extern int fn_826F3030();
extern unsigned int lbl_8200C69C;
extern unsigned int lbl_831E7E64;


undefined4 *
fn_826DB810(undefined4 *param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
             undefined4 param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[2] = (int)param_2;
  param_1[1] = 1;
  *param_1 = &lbl_8200C69C;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  param_1[3] = (int)param_3;
  param_1[4] = param_4;
  fn_826F3030(param_1 + 6,param_2);
  uVar2 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  fn_8267ADA8(param_1 + 0x15,0);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  RtlEnterCriticalSection(param_1 + 9);
  param_1[0x11] = param_4;
  RtlLeaveCriticalSection(param_1 + 9);
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[5] = param_5;
  param_1[0x1f] = 0;
  iVar1 = fn_8267B890(lbl_831E7E64,0x24,0);
  if (iVar1 != 0) {
    uVar2 = fn_826D8C80();
  }
  if (param_1[0x20] != 0) {
    fn_8267C4F0();
  }
  param_1[0x20] = uVar2;
  if (param_6 != '\0') {
    uVar2 = (**(code **)(*(int *)param_1[3] + 0x40))();
    param_1[0x21] = uVar2;
    param_1[0x22] = *(undefined4 *)(*(int *)(param_1[3] + 0x20) + 0x28);
  }
  return param_1;
}

