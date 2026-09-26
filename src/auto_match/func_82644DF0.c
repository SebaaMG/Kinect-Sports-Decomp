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
extern int fn_82643B08();
extern int fn_82643C30();
extern int fn_82644568();
extern int fn_8264F3F0();
extern int fn_82F68CC0();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


int fn_82644DF0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 undefined8 param_6,longlong param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uStack_60;
  undefined4 uStack_5c;
  
  bVar1 = false;
  uVar3 = (undefined4)param_3;
  uVar7 = (uint)param_4;
  iVar6 = param_2;
  uStack_5c = uVar3;
  if (*(int *)(param_1 + 0x3460) == 0) {
    if (*(int *)(param_1 + 0x2b04) != 0) {
      uVar2 = KfAcquireSpinLock(param_1 + 0x2b08);
      if (*(int *)(param_1 + 0x2b04) != 0) {
        uVar4 = 0x8f000000;
        if ((int)param_7 == 0) {
          uVar4 = 0x81000000;
        }
        *(uint *)(param_2 + 4) = uVar4 | uVar7;
        *(undefined4 *)(param_2 + 8) = uVar3;
        *(undefined4 *)(param_2 + 0xc) = 0xc0000000;
        iVar6 = param_2 + 0x10;
        fn_82643C30(param_6,param_2,iVar6);
        bVar1 = true;
        *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + param_5;
      }
      KfReleaseSpinLock(param_1 + 0x2b08,uVar2);
      if (bVar1) {
        return iVar6;
      }
    }
    if ((*(int *)(param_1 + 0x54f4) != 0) || (bVar1 = false, *(int *)(param_1 + 0x5c18) != 0)) {
      bVar1 = true;
    }
    if ((((~*(uint *)(param_1 + 0x5e88) & 0x100) == 0) || ((int)param_7 == 0)) || (!bVar1)) {
      *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + param_5;
      uStack_60 = ((-(uint)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | uVar7 & 0xffffff;
      fn_82644568(param_1,&uStack_60,1);
    }
    else {
      *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + param_5 + 1;
      fn_8264F3F0(param_1,param_3,param_4,param_6,0xffffffff8f000000);
    }
  }
  else {
    puVar5 = &uStack_60;
    uVar4 = 2;
    uStack_60 = ((-(uint)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | uVar7 & 0xffffff;
    while( true ) {
      uVar7 = *(int *)(param_1 + 0x3510) - *(int *)(param_1 + 0x350c) >> 2 & 0xfffffffe;
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      fn_82F68CC0(*(int *)(param_1 + 0x350c),puVar5,uVar7 * 4);
      uVar4 = uVar4 - uVar7;
      puVar5 = puVar5 + uVar7;
      *(uint *)(param_1 + 0x350c) = *(int *)(param_1 + 0x350c) + uVar7 * 4;
      if (uVar4 == 0) break;
      fn_82643B08(param_1 + 0x3500);
    }
  }
  return iVar6;
}

