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
extern int fn_82686608();
extern int fn_82686758();
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


void fn_826876D8(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  
  RtlEnterCriticalSection(param_1 + 0xc);
  uVar1 = (**(code **)(*param_2 + 4))(&piStack_40,param_2);
  piVar4 = (int *)(param_1 + 0x28);
  iVar2 = fn_82686758(piVar4,uVar1);
  if (iVar2 < 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((iVar2 + 1) * 0x10 + *piVar4);
  }
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))(piStack_40,uStack_3c);
  }
  if (((piVar3 != (int *)0x0) && (*piVar3 == 0)) && ((int *)piVar3[1] == param_2)) {
    uVar1 = (**(code **)(*param_2 + 4))(&piStack_38,param_2);
    fn_82686608(piVar4,uVar1);
    if (piStack_38 != (int *)0x0) {
      (**(code **)(*piStack_38 + 8))(piStack_38,uStack_34);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
  return;
}

