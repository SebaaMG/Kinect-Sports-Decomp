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


int * fn_82454710(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar3 = param_3 + 0x30;
  if (iVar3 != iVar1) {
    puVar4 = (undefined4 *)(param_3 + 8);
    do {
      iVar3 = iVar3 + 0x30;
      puVar4[-1] = puVar4[0xb];
      *puVar4 = puVar4[0xc];
      puVar4[1] = puVar4[0xd];
      puVar5 = (undefined4 *)((uint)(puVar4 + 0xe) & 0xfffffff0);
      uVar6 = puVar5[1];
      uVar7 = puVar5[2];
      uVar8 = puVar5[3];
      puVar2 = (undefined4 *)((uint)(puVar4 + 2) & 0xfffffff0);
      *puVar2 = *puVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      puVar4[6] = puVar4[0x12];
      *(undefined1 *)(puVar4 + 7) = *(undefined1 *)(puVar4 + 0x13);
      puVar4 = puVar4 + 0xc;
    } while (iVar3 != iVar1);
  }
  puVar4 = *(undefined4 **)(param_2 + 4);
  for (puVar5 = puVar4 + -0xc; puVar5 != puVar4; puVar5 = puVar5 + 0xc) {
    (**(code **)*puVar5)(puVar5,0);
  }
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = param_3;
  *(int *)(param_2 + 4) = iVar1 + -0x30;
  return param_1;
}

