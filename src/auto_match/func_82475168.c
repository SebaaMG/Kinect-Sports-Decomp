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
extern int fn_82475290();
extern int fn_82475350();
extern int fn_8249ABC0();
extern int fn_8249B598();
extern int fn_82F4EBE8();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6698;
extern unsigned int lbl_8327F894;


undefined8 fn_82475168(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  fVar2 = lbl_831C6698;
  param_1 = param_2 * 0x18 + param_1;
  fVar1 = *(float *)(param_1 + 0x5c) + lbl_8327F894;
  *(float *)(param_1 + 0x5c) = fVar1;
  if (fVar1 < fVar2) {
    return 0;
  }
  uVar3 = fn_8249ABC0();
  fn_8249B598(uVar3,param_2);
  piVar4 = (int *)fn_82F4EBE8();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 4))();
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = fn_8249ABC0();
  if (*(int *)(iVar5 + 0x88) == 0) {
    uVar6 = *(uint *)(iVar5 + 0x60);
  }
  else if (*(int *)(iVar5 + 8) == 0) {
    uVar6 = *(uint *)(iVar5 + 0x68);
  }
  else {
    uVar6 = *(uint *)(iVar5 + 100);
  }
  uVar6 = *(uint *)(iVar5 + 0x50) & uVar6;
  if ((uVar6 == 0x20) || (uVar6 == 0)) {
    if (*(int *)(param_1 + 0x68) == 0) {
      iVar5 = fn_82475290(param_2);
      if (iVar5 == 0) goto code_r0x82475268;
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    iVar5 = fn_82475350(param_2);
    if (iVar5 == 0) {
      return 1;
    }
  }
code_r0x82475268:
  *(undefined4 *)(param_1 + 0x5c) = lbl_821CC160;
  return 0;
}

