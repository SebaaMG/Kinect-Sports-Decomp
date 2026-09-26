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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D8D6C0();
extern int fn_82D9A5F8();
extern int fn_82DFFD58();
extern int fn_82E00530();
extern int fn_82E00628();


void fn_82E00CC0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  undefined1 auStack_60 [96];
  
  bVar1 = *(byte *)(*(int *)(param_2 + 0x1c) + 0x20);
  uVar6 = (uint)bVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = fn_82CE5410();
    if ((*(uint *)(param_1 + 0x18) & 0x3fffffff) < (uint)bVar1) {
      uVar4 = (*(uint *)(param_1 + 0x18) & 0x3fffffff) << 1;
      if (uVar4 <= bVar1) {
        uVar4 = (uint)bVar1;
      }
      fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),(int *)(param_1 + 0x10),uVar4,0x60);
    }
    *(uint *)(param_1 + 0x14) = uVar6;
    if (bVar1 != 0) {
      uVar4 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x10);
        pfVar5 = (float *)(uVar4 * 0x28 + *(int *)(*(int *)(param_2 + 0x1c) + 0x8c));
        uVar3 = fn_82DFFD58((double)pfVar5[2],(double)*pfVar5,param_1);
        *(undefined4 *)(uVar4 * 0x60 + iVar2 + 4) = uVar3;
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < uVar6);
    }
  }
  uVar4 = 0;
  *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x18) + 0x10;
  if (bVar1 != 0) {
    do {
      fn_82E00628(param_1,param_2,uVar4);
      fn_82E00530(param_1,param_2,uVar4,auStack_60);
      iVar2 = fn_82CE5410();
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0xe0);
      *(undefined2 *)(iVar2 + 4) = 0xe0;
      uVar3 = fn_82D8D6C0(iVar2,auStack_60,*(undefined4 *)(param_1 + 0xc));
      iVar2 = param_1 + 0x24;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar4 * 0x60) = uVar3;
      if (param_1 == -0x1c) {
        iVar2 = 0;
      }
      fn_82D9A5F8(*(undefined4 *)(*(int *)(param_1 + 0x10) + uVar4 * 0x60),iVar2);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar6);
  }
  return;
}

