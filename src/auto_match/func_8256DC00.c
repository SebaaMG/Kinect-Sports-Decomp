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
extern int fn_8256D798();
extern int fn_82F68CC0();


void fn_8256DC00(undefined4 *param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_2 & 0xffffffff | 0xf) < 0xffffffff) {
    uVar1 = param_1[5];
    uVar2 = (ulonglong)(uVar1 >> 1);
    uVar3 = param_2 & 0xffffffff;
    param_2 = param_2 | 0xf;
    if (((uVar3 | 0xf) / 3 < uVar2) &&
       (param_2 = uVar2 + uVar1, (-uVar2 - 2 & 0xffffffff) < (ulonglong)uVar1)) {
      param_2 = 0xfffffffffffffffe;
    }
  }
  puVar4 = (undefined4 *)
           (**(code **)(*(int *)param_1[6] + 0xc))((int *)param_1[6],param_2 + 1,param_1 + 7);
  if (param_3 != 0) {
    puVar5 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar5 = (undefined4 *)*param_1;
    }
    fn_82F68CC0(puVar4,puVar5,param_3);
  }
  fn_8256D798(param_1,1,0);
  *param_1 = puVar4;
  param_1[5] = (int)param_2;
  param_1[4] = param_3;
  if (0xf < (param_2 & 0xffffffff)) {
    param_1 = puVar4;
  }
  *(undefined1 *)((int)param_1 + param_3) = 0;
  return;
}

