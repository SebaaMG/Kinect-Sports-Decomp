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
extern int fn_822BD278();
extern int fn_8288B760();


undefined8 fn_822B6908(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  uint uVar4;
  longlong lVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_2 + 0x168) == 0) {
    uVar4 = *(uint *)(param_2 + 0x16c);
  }
  else {
    uVar4 = fn_8288B760();
    uVar4 = uVar4 & 0xff;
  }
  if ((uVar4 == 0) && (*(int **)(param_2 + 0x168) != (int *)0x0)) {
    lVar3 = (**(code **)(**(int **)(param_2 + 0x168) + 8))();
    fn_822BD278(param_1,lVar3 + 0x144);
    return param_1;
  }
  puVar1 = (undefined4 *)(param_2 + 0x80U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  return param_1;
}

