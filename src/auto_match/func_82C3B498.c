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
extern int fn_82C30370();


undefined8 fn_82C3B498(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint auStack_30 [12];
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (param_1[0x22] == 0x7fffffff) {
    param_1[0x23] = 0;
    uVar2 = fn_82C30370(param_1 + 0x38,6,auStack_30);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    iVar4 = (-(uint)((auStack_30[0] & 0x20) != 0) & 0xfffffffe) + 1;
    param_1[0x22] = iVar4;
    uVar3 = auStack_30[0];
    if (iVar4 == -1) {
      uVar3 = auStack_30[0] | 0xffffffc0;
    }
    *(uint *)(iVar1 + 0x128) = *(int *)(iVar1 + 0x128) + uVar3;
    if (((int)uVar3 < -0x1f) || (0x1e < (int)uVar3)) {
      param_1[0x23] = 1;
    }
  }
  if (param_1[0x23] != 0) {
    do {
      uVar2 = fn_82C30370(param_1 + 0x38,5,auStack_30);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (auStack_30[0] != 0x1f) {
        *(uint *)(iVar1 + 0x128) = param_1[0x22] * auStack_30[0] + *(int *)(iVar1 + 0x128);
        return uVar2;
      }
      iVar4 = param_1[0x22] * 0x1f + *(int *)(iVar1 + 0x128);
      *(int *)(iVar1 + 0x128) = iVar4;
      if (iVar4 < 1) {
        *(undefined4 *)(iVar1 + 0x128) = 0x3e;
        return 0xffffffff80040002;
      }
    } while (param_1[0x23] != 0);
  }
  return uVar2;
}

