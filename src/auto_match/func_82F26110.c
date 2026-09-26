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


int fn_82F26110(int param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *param_3;
  iVar4 = ((int)*param_2 >> 2) + param_4 * 0x10;
  iVar2 = 0;
  iVar3 = ((int)uVar1 >> 2) + param_5 * 0x10;
  if (iVar4 < -0x10) {
    iVar5 = -0x10;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2d0) << 4;
    if (iVar4 <= iVar5) goto LAB_82f26168;
  }
  iVar4 = iVar5;
  iVar2 = 1;
LAB_82f26168:
  if (iVar3 < -0x10) {
    iVar2 = 1;
    iVar3 = -0x10;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2d4) << 4;
    if (iVar5 < iVar3) {
      iVar2 = 1;
      iVar3 = iVar5;
    }
    else if (iVar2 == 0) {
      return 0;
    }
  }
  *param_2 = (iVar4 + (param_4 & 0xfffffff) * -0x10) * 4 + (*param_2 & 3);
  *param_3 = (iVar3 + (param_5 & 0xfffffff) * -0x10) * 4 + (uVar1 & 3);
  return iVar2;
}

