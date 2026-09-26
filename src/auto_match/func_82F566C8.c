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
extern int fn_824B42A0();
extern int fn_824B42C8();
extern int fn_82A1DD38();
extern int fn_82F53CF0();
extern int fn_82F5AF98();
extern int fn_82F5B3C8();
extern int fn_82F5C9D0();


void fn_82F566C8(int param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = fn_824B42A0();
  uVar2 = fn_824B42C8(lVar1 - *(longlong *)(param_1 + 8));
  if (*(int *)(param_1 + 0x1e8) != 0) {
    fn_82F5AF98(*(int *)(param_1 + 0x1e8),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    fn_82F53CF0(uVar2,*(int *)(param_1 + 0x1e0),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    fn_82F5B3C8(*(int *)(param_1 + 0x1d0),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    fn_82F5C9D0(uVar2,*(int *)(param_1 + 0x1d8),param_2,param_3);
  }
  fn_82A1DD38(param_1 + 0x10,param_3 * 0x1c0 + param_2 + 0x30,0x1c0);
  *(longlong *)(param_1 + 8) = lVar1;
  return;
}

