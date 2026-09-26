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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268C510();
extern int fn_82696BC8();
extern int fn_826FC2F0();
extern int fn_826FF580();
extern U64 storeWordConditionalIndexed();


void fn_826FFF98(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  int *piVar8;
  char in_RESERVE;
  uint auStack_40 [16];
  
  auStack_40[0] = 0;
  lVar3 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x80,0);
  if (lVar3 == 0) {
    iVar4 = 0;
  }
  else {
    fn_8268C510(auStack_40,param_3);
    iVar4 = fn_826FC2F0(lVar3,auStack_40,param_4,1,0);
    lVar3 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar7 = (uint *)lVar3;
      uVar6 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar3);
        *puVar7 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
    if (uVar6 == 1) {
      fn_8267BE38();
    }
  }
  if (iVar4 != 0) {
    fn_82696BC8(iVar4 + 0x30,param_2);
    iVar5 = (**(code **)(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x17);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0xb24) + 1;
      *(int *)(param_1 + 0xb24) = iVar5;
      *(int *)(iVar4 + 0x40) = iVar5;
      piVar8 = *(int **)(param_1 + 0xb20);
      if (piVar8 == (int *)0x0) {
        *(int *)(param_1 + 0xb20) = iVar4;
      }
      else {
        for (; *piVar8 != 0; piVar8 = (int *)*piVar8) {
        }
        *piVar8 = iVar4;
      }
    }
    else {
      fn_8267C4F0();
      fn_826FF580(param_1,iVar4);
    }
  }
  return;
}

