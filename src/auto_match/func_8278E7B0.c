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
extern int fn_8267B890();
extern int fn_8267C4C8();
extern int fn_8278CC58();
extern int fn_8278CD58();
extern int fn_8278CF00();
extern int fn_8278E310();
extern int fn_8278E4C0();


int fn_8278E7B0(int param_1,int param_2)

{
  int iVar2;
  ulonglong uVar1;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_30 [12];
  
  if ((*(ushort *)(param_2 + 0x2a) >> 9 & 1) == 0) {
    piVar5 = (int *)(param_1 + 8);
    aiStack_30[0] = param_2;
    iVar2 = fn_8278CC58(piVar5,aiStack_30);
    if (iVar2 < 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(iVar2 * 0xc + *piVar5 + 0x10);
    }
    if (piVar4 != (int *)0x0) {
      fn_8267C4C8(*piVar4);
      return *piVar4;
    }
    uVar3 = 0;
    if ((uint *)*piVar5 != (uint *)0x0) {
      uVar3 = *(uint *)*piVar5;
    }
    if (*(uint *)(param_1 + 0x10) <= uVar3) {
      fn_8278E4C0(param_1,0);
    }
  }
  uVar1 = fn_8267B890(*(undefined4 *)(param_1 + 0x1c),0x2c,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_8278CD58(uVar1,param_2,*(undefined4 *)(param_1 + 0x1c));
  }
  aiStack_30[0] = iVar2;
  if (((*(byte *)(param_1 + 0x4c) & 1) != 0) && ((*(ushort *)(iVar2 + 0x2a) >> 0xb & 1) != 0)) {
    fn_8278CF00(iVar2);
  }
  if ((*(ushort *)(param_2 + 0x2a) >> 9 & 1) == 0) {
    fn_8278E310(param_1 + 8,param_1 + 8,aiStack_30);
  }
  return iVar2;
}

