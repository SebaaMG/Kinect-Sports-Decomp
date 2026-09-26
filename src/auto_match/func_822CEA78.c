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
extern int fn_822315A0();
extern int fn_822CE290();
extern int fn_82365BD8();


void fn_822CEA78(int param_1,int *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [48];
  
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x340);
    puVar2 = (undefined4 *)(*param_2 + 0x20U & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + 0x210U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    *(undefined4 *)(param_1 + 0x230) = 1;
    puVar2 = (undefined4 *)(param_1 + 0x220U & 0xfffffff0);
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(*param_2 + 0x118);
      uVar4 = fn_82365BD8(auStack_30,param_2);
      fn_822CE290(param_1,uVar4,param_3);
    }
    else {
      *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(*param_2 + 0x1b0);
    }
    *(undefined4 *)(param_1 + 0x234) = 1;
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

