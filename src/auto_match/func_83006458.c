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
extern int fn_83005690();


undefined8 fn_83006458(undefined8 param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  
  uVar3 = *(ushort *)*param_2;
  *param_2 = (int)((ushort *)*param_2 + 1);
  for (uVar9 = (ulonglong)uVar3; uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar4 = (undefined4 *)*param_2;
    uVar5 = *puVar4;
    *param_2 = (int)(puVar4 + 1);
    uVar1 = *(undefined1 *)(puVar4 + 1);
    *param_2 = (int)puVar4 + 5;
    uVar6 = *(undefined4 *)((int)puVar4 + 5);
    *param_2 = (int)puVar4 + 9;
    uVar7 = *(undefined4 *)((int)puVar4 + 9);
    *param_2 = (int)puVar4 + 0xd;
    uVar8 = *(undefined4 *)((int)puVar4 + 0xd);
    *param_2 = (int)puVar4 + 0x11;
    uVar2 = *(undefined1 *)((int)puVar4 + 0x11);
    *param_2 = (int)puVar4 + 0x12;
    uVar3 = *(ushort *)((int)puVar4 + 0x12);
    *param_2 = (int)(puVar4 + 5);
    fn_83005690(param_1,uVar5,uVar1,uVar6,uVar7,uVar8,uVar2);
    *param_2 = *param_2 + (uint)uVar3 * 0xc;
    *param_3 = *param_3 + (uint)uVar3 * -0xc;
  }
  return 1;
}

