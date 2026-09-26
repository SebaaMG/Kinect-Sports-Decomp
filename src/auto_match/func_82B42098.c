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
extern unsigned int *auStack_70;
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B4A218();
extern int fn_82B4BAA8();
extern int fn_82B84350();
extern int fn_82B84C90();
extern int fn_82B85298();


void fn_82B42098(int param_1,longlong param_2,int param_3,int param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar4;
  undefined4 uVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined1 auStack_70 [112];
  
  iVar5 = fn_82B4A218(param_2,param_3,param_1);
  uVar6 = fn_82B84C90(param_1,param_3,param_4,1,0x68,param_2,param_2 + 0x18U | 3);
  puVar10 = (uint *)(param_3 * 0x28 + *(int *)(param_1 + 0xc));
  if (param_5 != '\0') {
    *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) | 0x2000000;
  }
  uVar7 = 0;
  uVar1 = *(uint *)(param_4 * 8 + puVar10[7]);
  if (1 < (*(uint *)(uVar6 + 8) >> 0xe & 7)) {
    uVar7 = fn_82B84350(param_1,*(undefined4 *)(uVar6 + 0x1c),0);
    uVar2 = uVar7 & 0xfffffffe;
    puVar9 = (uint *)((uVar6 & 0xfffffffe) + 0x24);
    *(uint *)(uVar2 + 0x24) = *puVar9;
    *(uint *)(*puVar9 & 0xfffffffe) = uVar2;
    *(uint *)(uVar2 + 0x28) = uVar6 & 0xfffffffe;
    *puVar9 = uVar2 + 0x28;
  }
  uVar11 = 0;
  if ((*puVar10 & 0x1fff8) != 0) {
    puVar9 = (uint *)(iVar5 + 4);
    do {
      uVar2 = *(uint *)((int)puVar9 + puVar10[7] + (-4 - iVar5));
      if ((uVar1 >> 4 & 0x3fff) == (uVar2 >> 4 & 0x3fff)) {
        puVar9[-1] = uVar6;
        lVar3 = -LZCOUNT(uVar2 & 0xf);
        *puVar9 = (uint)((lVar3 + 0x1fU & 0xffffffff) << 2) & 0xfffc | *puVar9 & 0x10000 | 1;
        fn_82B85298(auStack_70,param_1,param_2,param_3,uVar11);
        uVar4 = fn_82B4BAA8(param_1,auStack_70);
        if (uVar7 == 0) {
          uVar8 = fn_82AD1978(uVar6,uVar4);
          *(undefined4 *)(uVar6 + 0x2c) = uVar8;
        }
        else {
          uVar8 = fn_82AD1978(uVar7,uVar4);
          *(undefined4 *)((int)((lVar3 + 0x2aU & 0xffffffff) << 2) + uVar7) = uVar8;
        }
      }
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 2;
    } while ((uVar11 & 0xffffffff) < ((ulonglong)(*puVar10 >> 3) & 0x3fff));
  }
  if (uVar7 != 0) {
    uVar4 = fn_82AD17B0(param_1,uVar7);
    uVar8 = fn_82AD1978(uVar6,uVar4);
    *(undefined4 *)(uVar6 + 0x2c) = uVar8;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
  return;
}

