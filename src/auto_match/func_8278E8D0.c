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
extern int fn_8267B890();
extern int fn_8278BFA8();
extern int fn_8278CCD8();
extern int fn_8278E3E8();
extern int fn_8278E638();


ulonglong fn_8278E8D0(int param_1,undefined8 param_2)

{
  int iVar2;
  ulonglong uVar1;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 auStack_30 [12];
  
  auStack_30[0] = (undefined4)param_2;
  piVar5 = (int *)(param_1 + 0xc);
  iVar2 = fn_8278CCD8(piVar5,auStack_30);
  if (iVar2 < 0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)(iVar2 * 0xc + *piVar5 + 0x10);
  }
  if (puVar3 == (uint *)0x0) {
    uVar4 = 0;
    if ((uint *)*piVar5 != (uint *)0x0) {
      uVar4 = *(uint *)*piVar5;
    }
    if (*(uint *)(param_1 + 0x14) <= uVar4) {
      fn_8278E638(param_1,0);
    }
    uVar1 = fn_8267B890(*(undefined4 *)(param_1 + 0x1c),0x18,0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_8278BFA8(uVar1,param_2);
    }
    auStack_30[0] = (undefined4)uVar1;
    fn_8278E3E8(piVar5,piVar5,auStack_30);
  }
  else {
    *(int *)(*puVar3 + 4) = *(int *)(*puVar3 + 4) + 1;
    uVar1 = (ulonglong)*puVar3;
  }
  return uVar1;
}

