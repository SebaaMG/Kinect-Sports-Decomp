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
extern unsigned int *auStack_240;


void fn_82D6F740(int param_1,int param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_240 [576];
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    puVar5 = (ushort *)(param_2 + -2);
    do {
      puVar5 = puVar5 + 1;
      uVar1 = *puVar5;
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x14))
                        (*(int *)(param_1 + 0x20) + 0x10,
                         *(undefined4 *)((uVar1 / 3) * 4 + *(int *)(param_1 + 0x24)),auStack_240);
      param_3 = param_3 + -1;
      puVar2 = (undefined4 *)
               ((int)(((ulonglong)uVar1 + ((ulonglong)(longlong)(int)(uint)uVar1 / 3) * -3 + 2 &
                      0xffffffff) << 4) + iVar4 & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)((int)in_r0 + param_4 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(uint *)(param_4 + 0xc) = uVar1 | 0x3f000000;
      param_4 = param_4 + 0x10;
    } while (-1 < param_3);
  }
  return;
}

