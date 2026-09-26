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
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B106A0();
extern int fn_82B841E8();
extern int fn_82B8A3A0();
extern unsigned int lbl_821AAD20;


void fn_82B10858(int param_1,int param_2,uint param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  int iVar4;
  double dVar5;
  
  if ((param_4 & 0xffffffff) == 0) {
    if (*(int *)(param_1 + 0x150) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x11bd);
    }
  }
  else {
    fn_82AA65B0(param_1,0xe38);
  }
  param_4 = 0xf - param_4;
  if (param_3 == 0) {
    param_3 = fn_82B841E8(param_1,param_2,0,0x75,0,0);
    uVar1 = param_3 & 0xfffffffe;
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x2000000;
    *(undefined4 *)(uVar1 + 0x28) = *(undefined4 *)(param_2 + 0x24);
    *(uint *)((*(uint *)(param_2 + 0x24) & 0xfffffffe) + 0x24) = uVar1 + 0x28;
    *(uint *)(uVar1 + 0x24) = param_2 + 0x24U | 1;
    *(uint *)(param_2 + 0x24) = uVar1;
  }
  dVar5 = (double)lbl_821AAD20;
  uVar2 = fn_82B8A3A0(dVar5,dVar5,dVar5,param_1,1);
  puVar3 = (uint *)fn_82AD17B0(param_1,uVar2);
  *puVar3 = (uint)((((0x8da691691448U >> (param_4 & 0x7f)) >> (param_4 & 0x7f)) >> (param_4 & 0x7f)
                   & 7) << 0x19) | *puVar3 & 0xf1ffffff;
  fn_82AD1270(puVar3,0);
  *puVar3 = *puVar3 & 0xffffe01f;
  iVar4 = fn_82B106A0(param_1,param_2,puVar3,puVar3);
  puVar3 = (uint *)fn_82AD17B0(param_1,iVar4);
  *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x20;
  *puVar3 = (uint)((param_4 & 0xffffffff) << 0xd) & 0x1e000 | 0x407c0000 | *puVar3 & 0xfe7c1fff;
  fn_82AD1978(param_3,puVar3);
  return;
}

