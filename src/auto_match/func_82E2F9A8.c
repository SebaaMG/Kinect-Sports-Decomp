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
extern int fn_82E2E6F0();
extern int fn_82E2F4C8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82E2F9A8(int param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *apiStack_40 [16];
  
  apiStack_40[0] = (int *)0x0;
  uVar2 = 0;
  fn_82E50CB8(param_1 + 0x54);
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x168)) {
    iVar1 = fn_82E2F4C8(param_1 + 0x100,param_2,apiStack_40);
    if (iVar1 != 0) {
      if (apiStack_40[0] != (int *)0x0) {
        (**(code **)(*apiStack_40[0] + 8))();
      }
      if (((param_2 + 1 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x168)) &&
         (iVar1 = fn_82E2E6F0(param_1 + 0x100,param_2), -1 < iVar1)) {
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        goto LAB_82e2fa78;
      }
    }
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    uVar2 = 0xffffffffc00d36bf;
  }
LAB_82e2fa78:
  fn_82E50F10(param_1 + 0x54);
  return uVar2;
}

