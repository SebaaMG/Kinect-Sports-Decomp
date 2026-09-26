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
extern unsigned int *auStack_30;
extern int fn_8265C990();
extern int fn_82F68CC0();


ulonglong fn_82A81840(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 auStack_30 [12];
  
  uVar3 = (**(code **)*param_2)(param_2,0xffffffff82089748,(undefined4 *)(param_1 + 8));
  if (-1 < (longlong)uVar3) {
    uVar3 = (**(code **)*param_2)(param_2,0xffffffff82089db0,param_1 + 0xc);
    uVar3 = -(ulonglong)(uVar3 != 0xffffffff80004002) & uVar3;
    if (-1 < (int)uVar3) {
      piVar1 = *(int **)(param_1 + 8);
      auStack_30[0] = 0;
      iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_30);
      uVar2 = auStack_30[0];
      if (-1 < iVar4) {
        fn_82F68CC0(param_1 + 100,auStack_30[0],0x10);
        fn_8265C990(uVar2,0x20970000);
      }
    }
  }
  return uVar3;
}

