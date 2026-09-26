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
extern int fn_82819F70();
extern int fn_82822F60();
extern int fn_828233A0();


void fn_8281A000(int param_1,short *param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(short *)(param_1 + 0x82) < *(short *)(param_1 + 0x80)) {
    iVar7 = *(int *)(param_1 + 0x7c);
    iVar6 = *param_2 * 0x40 + iVar7;
    uVar1 = *(uint *)(iVar6 + 0x20);
    uVar5 = *(int *)(iVar6 + 0x24) + uVar1;
    if (0x1f < (int)(uVar5 - uVar1)) {
      bVar2 = *(int *)(param_1 + 0x70) != 5;
      param_4 = param_4 & 0xffff;
      if (bVar2) {
        uVar4 = ((param_4 + uVar1 + param_5) - 1 & ~(param_4 - 1)) + param_3;
        if (uVar4 < uVar1) {
          return;
        }
        if (uVar5 < uVar4) {
          return;
        }
        iVar6 = uVar5 - uVar4;
      }
      else {
        uVar4 = (uVar5 - param_3 & ~(param_4 - 1)) - param_5;
        if (uVar4 < uVar1) {
          return;
        }
        if (uVar5 < uVar4) {
          return;
        }
        iVar6 = uVar4 - uVar1;
      }
      if (0x1f < iVar6) {
        sVar3 = fn_82819F70(param_1);
        if (*(short *)(param_1 + 0x84) != -1) {
          *(short *)(*(short *)(param_1 + 0x84) * 0x40 + iVar7 + 0x32) = sVar3;
        }
        iVar7 = sVar3 * 0x40 + iVar7;
        *(undefined2 *)(iVar7 + 0x30) = *(undefined2 *)(param_1 + 0x84);
        *(undefined2 *)(iVar7 + 0x32) = 0xffff;
        *(short *)(param_1 + 0x84) = sVar3;
        fn_82822F60(param_1 + 200,iVar7,0xffffffff82819260,0);
        fn_82822F60(param_1 + 0xd8,iVar7 + 0x10,0xffffffff82819288,0);
        fn_828233A0(param_1 + 0xd8);
        if (!bVar2) {
          *param_2 = sVar3;
        }
      }
    }
  }
  return;
}

