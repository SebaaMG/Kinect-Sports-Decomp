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
extern int fn_8309AA78();


void fn_83097778(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(float *)(param_3 + 0x10) < *(float *)(param_1 + 0x20)) {
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x1c);
    fn_8309AA78(param_1 + 0x30,8,param_2);
    iVar4 = *(int *)(param_2 + 0xc);
    while (iVar3 = iVar4, iVar3 != 0) {
      param_2 = iVar3;
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    *(int *)(param_1 + 0x60) = param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x10);
  }
  return;
}

