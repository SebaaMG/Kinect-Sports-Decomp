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
extern int fn_8227F578();


void fn_8227E790(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2)) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    uVar4 = param_3[5];
    uVar5 = param_3[6];
    iVar8 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
    uVar6 = param_3[4];
    uVar7 = param_3[7];
    *(undefined4 *)(iVar8 + 0x74) = *param_3;
    *(undefined4 *)(iVar8 + 0x78) = uVar1;
    *(undefined4 *)(iVar8 + 0x7c) = uVar2;
    *(undefined4 *)(iVar8 + 0x80) = uVar3;
    *(undefined4 *)(iVar8 + 0x84) = uVar6;
    *(undefined4 *)(iVar8 + 0x88) = uVar4;
    *(undefined4 *)(iVar8 + 0x8c) = uVar5;
    *(undefined4 *)(iVar8 + 0x90) = uVar7;
    fn_8227F578(iVar8);
  }
  return;
}

