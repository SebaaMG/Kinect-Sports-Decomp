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
extern int fn_8302BDE0();


void fn_8303D950(int *param_1,int *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)*param_2;
  uVar3 = *puVar2;
  *param_2 = (int)(puVar2 + 1);
  uVar4 = puVar2[1];
  *param_2 = (int)(puVar2 + 2);
  uVar5 = puVar2[2];
  *param_2 = (int)(puVar2 + 3);
  bVar1 = *(byte *)(puVar2 + 3);
  *param_2 = (int)puVar2 + 0xd;
  param_1[5] = (bVar1 & 0x1f) << 3 | param_1[5] & 0xffffff07U;
  iVar6 = fn_8302BDE0(param_1,uVar3,uVar4,uVar5);
  if (iVar6 == 1) {
    iVar6 = (**(code **)(*param_1 + 0x24))(param_1,param_2,param_3);
    if (iVar6 == 1) {
      (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
    }
    iVar6 = *(int *)*param_2;
    *param_2 = (int)((int *)*param_2 + 1);
    param_1[7] = iVar6;
  }
  param_1[5] = param_1[5] | 4;
  return;
}

