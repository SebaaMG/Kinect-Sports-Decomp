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
extern int fn_82E50CB8();
extern int fn_82E50F10();


undefined8 fn_82E2F598(int param_1,ulonglong param_2,undefined2 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int *apiStack_40 [16];
  
  uVar4 = 0;
  apiStack_40[0] = (int *)0x0;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xfc)) {
    fn_82E50CB8(param_1 + 0x54);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    iVar2 = fn_82E2F3F8(param_1 + 0x94,param_2,apiStack_40);
    piVar1 = apiStack_40[0];
    if (iVar2 == 0) {
      uVar4 = 0xffffffffc00d36bf;
    }
    else {
      if (param_3 != (undefined2 *)0x0) {
        uVar3 = (**(code **)(*apiStack_40[0] + 0x88))(apiStack_40[0]);
        *param_3 = uVar3;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = piVar1;
        (**(code **)(*piVar1 + 4))(piVar1);
      }
    }
    fn_82E50F10(param_1 + 0x54);
  }
  else {
    uVar4 = 0xffffffffc00d36bf;
  }
  return uVar4;
}

