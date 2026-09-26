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
extern int fn_82964628();


int fn_829675E8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_2 + (param_3 * 4 + param_4) * 4);
  if (*piVar1 == -1) {
    if (param_6 != 0) {
      iVar2 = fn_82964628(-*(double *)(*(int *)(param_5 * 4 + *(int *)(param_1 + 0x14)) + 0x20),
                            param_1,*(undefined4 *)(param_1 + 0x78));
      *piVar1 = iVar2;
      iVar2 = fn_82964628(-*(double *)(*(int *)(param_5 * 4 + *(int *)(param_1 + 0x14)) + 0x20),
                            param_1,*(undefined4 *)(param_1 + 0x78),param_3,param_4);
      if (iVar2 == -1) {
        return -1;
      }
      iVar3 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14));
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 0x80000;
      *(int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x38) = *piVar1;
      return iVar2;
    }
    iVar3 = param_5 * 4;
    iVar2 = *(int *)(iVar3 + *(int *)(param_1 + 0x14));
    if (*(int *)(iVar2 + 0xc) == -1) {
      *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x14)) + 0xc) = param_3;
      *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x14)) + 0x10) = param_4;
      *piVar1 = param_5;
    }
    else {
      iVar2 = fn_82964628(*(undefined8 *)(iVar2 + 0x20),param_1,*(undefined4 *)(param_1 + 0x78),
                            param_3,param_4);
      *piVar1 = iVar2;
    }
  }
  return *piVar1;
}

