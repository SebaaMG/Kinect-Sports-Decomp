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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB198();


void fn_8231E768(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_30 [32];
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 3;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  puVar3 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  puVar3 = (undefined4 *)(iVar1 + 0x90U & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  iVar1 = *(int *)(iVar2 + 0x58);
  if ((iVar1 == 0x15) || (iVar1 == 3)) {
    fn_82230110(auStack_30,0xffffffff821af980);
    fn_822FB198(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_30);
    fn_82230300(auStack_30,1,0);
  }
  return;
}

