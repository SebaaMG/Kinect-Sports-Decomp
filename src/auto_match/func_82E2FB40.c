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
extern int fn_82E2F3F8();
extern int fn_82E2F4C8();
extern int fn_82E2F530();
extern int fn_82E569B0();


undefined8 fn_82E2FB40(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *apiStack_30 [12];
  
  (**(code **)(*param_1 + 0x50))();
  uVar2 = 0;
  apiStack_30[0] = (int *)0x0;
  if (param_1[0x3f] != 0) {
    do {
      iVar1 = fn_82E2F3F8(param_1 + 0x25,uVar2,apiStack_30);
      if (iVar1 != 0) {
        if (apiStack_30[0] != (int *)0x0) {
          (**(code **)(*apiStack_30[0] + 8))();
          apiStack_30[0] = (int *)0x0;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x3f]);
  }
  fn_82E569B0(param_1 + 0x25,0);
  param_1[0x3f] = 0;
  uVar2 = 0;
  apiStack_30[0] = (int *)0x0;
  if (param_1[0x5a] != 0) {
    do {
      iVar1 = fn_82E2F4C8(param_1 + 0x40,uVar2,apiStack_30);
      if (iVar1 != 0) {
        if (apiStack_30[0] != (int *)0x0) {
          (**(code **)(*apiStack_30[0] + 8))();
          apiStack_30[0] = (int *)0x0;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x5a]);
  }
  fn_82E569B0(param_1 + 0x40,0);
  param_1[0x5a] = 0;
  uVar2 = 0;
  apiStack_30[0] = (int *)0x0;
  if (param_1[0x75] != 0) {
    do {
      iVar1 = fn_82E2F530(param_1 + 0x5b,uVar2,apiStack_30);
      if (iVar1 != 0) {
        if (apiStack_30[0] != (int *)0x0) {
          (**(code **)(*apiStack_30[0] + 8))();
          apiStack_30[0] = (int *)0x0;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x75]);
  }
  fn_82E569B0(param_1 + 0x5b,0);
  param_1[0x75] = 0;
  if ((int *)param_1[0x76] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x76] + 8))();
    param_1[0x76] = 0;
  }
  return 0;
}

