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
extern int fn_82F68CC0();


void fn_82D5BCE0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  int *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((float)param_4[0xc0c] != (float)param_1[0x40c]) {
    (**(code **)(*param_5 + 0x20))(param_5,param_4[1],param_4 + 0xc14);
    puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x1010 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar4 = (undefined8 *)(param_1 + 0x412);
    puVar2 = (undefined4 *)((int)param_4 + in_r0 + 0x3010 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)((uint)(param_1 + 0x408) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar3 = (undefined8 *)(param_4 + 0xc12);
    puVar2 = (undefined4 *)((uint)(param_4 + 0xc08) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    param_4[0xc0c] = param_1[0x40c];
    lVar5 = 6;
    param_4[0xc0d] = param_1[0x40d];
    *(undefined8 *)(param_4 + 0xc10) = *(undefined8 *)(param_1 + 0x410);
    *(undefined8 *)(param_4 + 0xc12) = *(undefined8 *)(param_1 + 0x412);
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *param_4 = *param_1;
  if (param_4[0xc20] != 0) {
    fn_82F68CC0(param_4[0xc20],param_1 + 1,0x1008);
  }
  return;
}

