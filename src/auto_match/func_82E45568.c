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
extern unsigned int *auStack_40;
extern int fn_82E43898();
extern int fn_82E44F90();
extern int fn_82E50EA0();
extern int fn_82E569B0();
extern int fn_82E7B648();
extern unsigned int lbl_821530D8;
extern unsigned int lbl_82153100;
extern unsigned int lbl_82153104;
extern unsigned int lbl_82153114;
extern unsigned int lbl_82153124;
extern unsigned int lbl_82154D80;


void fn_82E45568(undefined4 *param_1)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  uint auStack_40 [16];
  
  *param_1 = &lbl_82153124;
  param_1[1] = &lbl_82153114;
  param_1[2] = &lbl_821530D8;
  param_1[3] = &lbl_82153104;
  param_1[4] = &lbl_82153100;
  if (param_1[6] != 0) {
    fn_82E43898();
    (**(code **)(*(int *)param_1[6] + 0x10))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 8))();
    param_1[0x1e] = 0;
  }
  if ((int *)param_1[0x1f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1f] + 8))();
    param_1[0x1f] = 0;
  }
  if ((int *)param_1[0x20] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x20] + 8))();
    param_1[0x20] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 8))();
    param_1[6] = 0;
  }
  uVar3 = 0;
  if (param_1[0x3b] != 0) {
    do {
      lVar1 = fn_82E44F90(param_1 + 0x21,uVar3,auStack_40);
      piVar2 = (int *)(-(uint)(lVar1 != 0) & auStack_40[0]);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)(uint)param_1[0x3b]);
  }
  fn_82E569B0(param_1 + 0x21,0);
  param_1[0x3b] = 0;
  param_1[0x21] = &lbl_82154D80;
  if (param_1[0x22] == 0) {
    fn_82E569B0(param_1 + 0x21,0);
  }
  fn_82E50EA0(param_1 + 0xf);
  fn_82E7B648(param_1 + 4);
  return;
}

