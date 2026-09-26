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
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_8247DD58();
extern int fn_8247F240();
extern int fn_824809B0();
extern int fn_82484BF0();
extern int fn_82485850();
extern int fn_82485AC8();
extern int fn_82485BD8();
extern int fn_82486628();
extern int fn_8265CA20();


void fn_82480A60(int param_1)

{
  int iVar1;
  
  fn_82485850((ulonglong)*(uint *)(param_1 + 0x48),
                    (ulonglong)*(uint *)(param_1 + 0x48) + 0x634);
  if (*(int *)(param_1 + 0xac) != 0) {
    *(int *)(*(int *)(param_1 + 0x48) + 4) = *(int *)(param_1 + 0xac);
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    fn_8247DD58(iVar1);
    fn_8265CA20(iVar1);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  fn_82484BF0(*(undefined4 *)(param_1 + 0x48));
  fn_82485AC8(*(undefined4 *)(param_1 + 0x48));
  fn_82486628(*(undefined4 *)(param_1 + 0x48));
  fn_82485BD8(*(undefined4 *)(param_1 + 0x48),1);
  fn_8247F240(param_1,1);
  fn_824809B0(param_1,param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar1 + 0x10) == 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      fn_822819E0(iVar1,*(undefined4 *)(param_1 + 0x48));
    }
  }
  else {
    fn_82281868(iVar1,*(undefined4 *)(param_1 + 0x48),0);
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
  return;
}

