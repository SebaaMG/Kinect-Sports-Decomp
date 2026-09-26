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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF1548();
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined4
fn_82CF24D0(double param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
             int *param_6,undefined8 param_7)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  undefined8 uStack_60;
  uint uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0x80000000;
  dVar4 = (double)(float)(param_1 / (double)(longlong)(int)param_7);
  iVar2 = fn_82CE5410();
  if ((int)(uStack_58 & 0x3fffffff) < (int)param_7) {
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),&uStack_60,param_7,4);
  }
  uVar3 = 0;
  if (0 < *(int *)(*(int *)(param_4 * 4 + *param_6) + 0x34)) {
    uStack_60 = uStack_60 & 0xffffffff00000000;
    fn_82CF1548(param_2,dVar4,*(undefined4 *)(param_4 * 4 + *param_6));
    if (param_5 < (((U64)(uStack_60) >> 32) & 0xFFFFFFFF)) {
      uVar3 = *(undefined4 *)(param_5 * 4 + (((U64)(uStack_60) >> 0) & 0xFFFFFFFF));
    }
  }
  iVar2 = fn_82CE5410();
  uVar1 = uStack_60 >> 0x20;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),(int)uVar1,uStack_58 & 0x3fffffff,4);
  }
  return uVar3;
}

