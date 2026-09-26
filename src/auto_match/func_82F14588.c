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
extern int fn_82F02410();
extern int fn_82F44C18();


void fn_82F14588(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  if ((int)param_1[4] < 2) goto code_r0x82f14604;
  if (*(int *)(param_1[0x12] + 8) == 0) {
    if (param_1[10] != param_1[0xb]) {
      fn_82F02410(param_2,1,1);
      goto code_r0x82f145f4;
    }
    uVar3 = 1;
    uVar2 = 0;
  }
  else {
code_r0x82f145f4:
    uVar3 = param_1[5];
    uVar2 = param_1[10];
  }
  fn_82F02410(param_2,uVar2,uVar3);
code_r0x82f14604:
  iVar6 = 0;
  param_1[0x11] = param_1[10];
  pbVar5 = (byte *)(((int)(*param_1 + 1) >> 1) * param_1[10] + param_1[6]);
  if (0 < (longlong)((ulonglong)*param_1 - 1)) {
    iVar4 = 0;
    do {
      bVar1 = *pbVar5;
      iVar6 = iVar6 + 2;
      pbVar5 = pbVar5 + 1;
      *(uint *)(iVar4 + param_1[0xe]) = (bVar1 & 0xf) + 1;
      *(int *)(iVar4 + 4 + param_1[0xe]) = ((int)(uint)bVar1 >> 4) + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < (int)(*param_1 - 1));
  }
  if (iVar6 < (int)*param_1) {
    *(uint *)(param_1[0xe] + iVar6 * 4) = (*pbVar5 & 0xf) + 1;
  }
  fn_82F44C18(param_1[0xe],1,*param_1,param_1[0xf],1);
  return;
}

