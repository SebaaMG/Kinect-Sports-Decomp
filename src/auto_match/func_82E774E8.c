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
extern unsigned int *auStack_60;
extern int fn_82E76510();
extern unsigned int uStack_50;


undefined8 fn_82E774E8(int param_1,short param_2,int param_3,uint param_4,int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  short *psVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort uVar8;
  undefined1 auStack_60 [16];
  ushort uStack_50;
  
  if (param_4 < 9) {
    return 0;
  }
  psVar3 = *(short **)(param_1 + 8);
  param_4 = param_4 - 8;
  puVar7 = (ushort *)(param_3 + 8);
  while( true ) {
    if (psVar3 == (short *)0x0) {
      return 0xffffffffc00d36b3;
    }
    if (*psVar3 == param_2) break;
    psVar3 = *(short **)(psVar3 + 4);
  }
  iVar4 = *(int *)(psVar3 + 2);
  uVar8 = 0;
  uVar1 = *(ushort *)(iVar4 + 4);
  if (uVar1 == 0) {
    return 0;
  }
  do {
    uVar5 = fn_82E76510(iVar4,uVar8,auStack_60);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar6 = (uint)uStack_50;
    if (uVar6 == 0xffff) {
      if (param_4 < 2) {
        return 0xffffffffc00d3a9a;
      }
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      param_4 = param_4 - 2;
      uVar6 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
    }
    if (param_4 < uVar6) {
      return 0xffffffffc00d3a9a;
    }
    uVar5 = (**(code **)(*param_5 + 0x68))(param_5,auStack_60,puVar7,uVar6);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    puVar7 = (ushort *)(uVar6 + (int)puVar7);
    uVar8 = uVar8 + 1;
    param_4 = param_4 - uVar6;
  } while (uVar8 < uVar1);
  return uVar5;
}

