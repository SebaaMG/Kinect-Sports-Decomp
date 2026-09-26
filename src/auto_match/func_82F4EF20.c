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
extern int fn_82F4EEC0();
extern int fn_82F53780();
extern int fn_8306ED28();
extern int fn_8306ED70();


undefined8 fn_82F4EF20(undefined8 param_1,longlong param_2,char param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_30 [24];
  
  if (param_3 == '\0') {
    puVar1 = (undefined4 *)((int)param_2 + 0xcc0U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  else {
    if (param_4 == '\0') {
      fn_82F4EEC0(auStack_30,param_2);
      fn_82F53780(param_2 + 0xce0);
      puVar1 = (undefined4 *)((int)param_2 + 0xcc0U & 0xfffffff0);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
    }
    else {
      iVar3 = fn_82F4EEC0(auStack_30,param_2);
      puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      fn_8306ED70();
      fn_82F53780(param_2 + 0xce0);
    }
    fn_8306ED28();
    puVar1 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  return param_1;
}

