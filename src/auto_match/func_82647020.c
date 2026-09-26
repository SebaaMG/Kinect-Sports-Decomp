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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


undefined8 fn_82647020(int param_1)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  longlong lVar5;
  
  iVar3 = fn_8265C940(0x1000,0xffffffffb5800000);
  *(int *)(param_1 + 0x5e90) = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = fn_8265C940(0x200,0x64800000);
    *(int *)(param_1 + 0x5e98) = iVar3;
    if (iVar3 == 0) {
      fn_8265C990(*(undefined4 *)(param_1 + 0x5e90),0xffffffffb1800000);
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x5e90) = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5e90);
      *(undefined4 *)(iVar3 + 0x20) = 0xc0003b00;
      *(undefined4 *)(iVar3 + 0x24) = 0x300;
      *(undefined4 *)(iVar3 + 0x28) = 0xc0192b00;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0x18;
      fn_82F68CC0(iVar3 + 0x34,0xffffffff8218d780,0x60);
      *(undefined4 *)(iVar3 + 0x94) = 0x2205;
      lVar5 = 0xf;
      *(uint *)(iVar3 + 0x98) = *(uint *)(param_1 + 0x2948) & 0xfffff807;
      *(undefined4 *)(iVar3 + 0x9c) = 0x12180;
      *(undefined4 *)(iVar3 + 0xa0) = 1;
      puVar4 = (undefined4 *)(iVar3 + 0xa4);
      *puVar4 = 0;
      uVar1 = *(uint *)(param_1 + 0x5e90);
      do {
        puVar4[1] = 0xc0032201;
        puVar4[2] = 0;
        puVar4[3] = 0x30004;
        puVar4[4] = ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff);
        puVar4 = puVar4 + 5;
        *puVar4 = 0x40000003;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar2 = 1;
      *(int *)(param_1 + 0x5e94) = (int)puVar4 + (-0x1c - *(int *)(param_1 + 0x5e90)) >> 2;
    }
  }
  return uVar2;
}

