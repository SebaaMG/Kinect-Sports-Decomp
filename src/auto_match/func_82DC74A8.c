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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82CE5410();
extern int fn_82DC73A8();


void fn_82DC74A8(int param_1,int param_2,int param_3,undefined2 param_4)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = (param_2 + param_3 + 5) * 4;
  uVar1 = (longlong)(iVar7 + 0x20) * (longlong)param_1 + 0x3fU & 0xfffffff0;
  iVar3 = fn_82CE5410();
  uVar5 = ZEXT48(*(int **)(iVar3 + 0x10));
  iVar3 = **(int **)(iVar3 + 0x10);
  uVar2 = fn_82DC73A8(uVar1);
  puVar4 = (undefined2 *)(**(code **)(iVar3 + 4))(uVar5,uVar2);
  puVar4[1] = (short)uVar1;
  puVar4[3] = (short)param_1;
  *(char *)(puVar4 + 4) = (char)param_2;
  *(char *)((int)puVar4 + 9) = (char)param_3;
  puVar4[6] = param_4;
  *(char *)(puVar4 + 5) = (char)iVar7;
  lVar8 = 7;
  puVar4[8] = 0;
  puVar6 = (undefined4 *)(puVar4 + 8);
  puVar4[9] = 3;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar4[2] = 0;
  *puVar4 = 0x16;
  return;
}

