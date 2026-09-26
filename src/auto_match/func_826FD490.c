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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8267C5B0();
extern int fn_8269CEE0();
extern int fn_826F6FA8();
extern int fn_8271F610();


void fn_826FD490(int param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar4;
  int *piVar5;
  undefined8 uVar3;
  int *apiStack_40 [16];
  
  piVar5 = (int *)(param_1 + 0xad8);
  fn_8269CEE0(apiStack_40,piVar5);
  if (apiStack_40[0] != (int *)0x0) {
    apiStack_40[0][1] = apiStack_40[0][1] + 1;
    fn_8267C498(apiStack_40[0]);
  }
  if (apiStack_40[0] != param_2) {
    if ((apiStack_40[0] != (int *)0x0) && (apiStack_40[0][8] != 0)) {
      (**(code **)(*apiStack_40[0] + 200))(apiStack_40[0],0,param_2,param_3);
    }
    if (param_2 == (int *)0x0) {
      puVar1 = (uint *)*piVar5;
      if (puVar1 != (uint *)0x0) {
        uVar2 = *puVar1;
        *puVar1 = (uint)((ulonglong)uVar2 - 1);
        if ((ulonglong)uVar2 - 1 == 0) {
          fn_8267BE38();
        }
      }
      *piVar5 = 0;
    }
    else {
      iVar4 = fn_8267C5B0(param_2);
      puVar1 = (uint *)*piVar5;
      if (puVar1 != (uint *)0x0) {
        uVar2 = *puVar1;
        *puVar1 = (uint)((ulonglong)uVar2 - 1);
        if ((ulonglong)uVar2 - 1 == 0) {
          fn_8267BE38(puVar1);
        }
      }
      *piVar5 = iVar4;
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 200))(param_2,1,apiStack_40[0],param_3);
    }
    piVar5 = (int *)fn_826F6FA8(param_1,0);
    uVar3 = (**(code **)(*piVar5 + 0x5c))();
    fn_8271F610(uVar3,apiStack_40[0],param_2);
  }
  if (apiStack_40[0] != (int *)0x0) {
    fn_8267C498(apiStack_40[0]);
  }
  return;
}

