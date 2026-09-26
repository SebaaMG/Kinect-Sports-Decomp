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
extern int fn_8265C990();
extern int fn_829639F0();
extern int fn_82964180();
extern int fn_82BA02A8();
extern unsigned int lbl_8203878C;


void fn_829648E8(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &lbl_8203878C;
  if (param_1[4] != 0) {
    uVar2 = 0;
    if (param_1[1] != 0) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(iVar3 + param_1[4]);
        if (iVar1 != 0) {
          fn_82BA02A8(iVar1);
          fn_8265C990(iVar1,0x24810000);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < (uint)param_1[1]);
    }
    fn_8265C990(param_1[4],0x24810000);
  }
  if (param_1[5] != 0) {
    uVar2 = 0;
    if (param_1[2] != 0) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1[5] + iVar3);
        if (iVar1 != 0) {
          fn_82BA02A8(iVar1);
          fn_82964180(iVar1);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < (uint)param_1[2]);
    }
    fn_8265C990(param_1[5],0x24810000);
  }
  if (param_1[6] != 0) {
    uVar2 = 0;
    if (param_1[3] != 0) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1[6] + iVar3);
        if (iVar1 != 0) {
          fn_82BA02A8(iVar1);
          fn_829639F0(iVar1);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < (uint)param_1[3]);
    }
    fn_8265C990(param_1[6],0x24810000);
  }
  return;
}

