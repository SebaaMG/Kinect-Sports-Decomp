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


undefined8 fn_8277D1C8(int *param_1,code *param_2)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 8) = 0;
  if ((ulonglong)(uint)param_1[2] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1[1];
    lVar5 = (ulonglong)(uint)param_1[2] - 1;
    uVar4 = (ulonglong)uVar1 + 1;
    param_1[2] = (int)lVar5;
    param_1[1] = (int)uVar4;
    param_1[5] = param_1[6];
    param_1[4] = *(int *)((uVar1 >> 2 & 0x3ffffffc) + *(int *)(*param_1 + 0xc)) + (uVar1 & 0xf) * 8;
    if (lVar5 == 0) {
      iVar3 = param_1[3];
    }
    else {
      iVar3 = *(int *)(*(int *)(((uint)((uVar4 & 0xffffffff) >> 2) & 0x3ffffffc) +
                               *(int *)(*param_1 + 0xc)) +
                      ((uint)((uVar4 & 0xffffffff) << 3) & 0x78));
    }
    param_1[6] = iVar3;
    iVar3 = (*param_2)(param_1[4]);
    param_1[7] = iVar3;
    uVar2 = 1;
  }
  return uVar2;
}

