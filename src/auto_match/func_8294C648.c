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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_60;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_f0;


longlong fn_8294C648(int param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_120 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 auStack_100 [4];
  undefined4 uStack_f0;
  undefined1 auStack_60 [96];
  
  puVar1 = *(uint **)(param_1 + 0x104);
  iVar4 = 0;
  uStack_10c = 1;
  auStack_120[0] = 0;
  uStack_110 = 0;
  uStack_108 = 2;
  uStack_104 = 3;
  if (((*puVar1 & 0xfffff) == 1) &&
     ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1[4] * 4 + *(int *)(param_1 + 0x14)) + 4) *
                          4 + *(int *)(param_1 + 0x10)) + 4) & 0x20) == 0)) {
    lVar2 = fn_8294AC48(param_1,puVar1,0xffffffff82036cd0,auStack_60,auStack_120,auStack_100,
                          &uStack_110,1);
    if ((int)lVar2 == 0) {
      iVar3 = fn_82963998(0x74);
      if (iVar3 != 0) {
        iVar4 = fn_829632A0();
      }
      if (iVar4 == 0) {
        lVar2 = -0x7ff8fff2;
      }
      else {
        lVar2 = fn_82963A30(iVar4,0x70d00001,2,1,0);
        if ((lVar2 < 0) || (lVar2 = fn_829632F0(iVar4,*(undefined4 *)(param_1 + 0x104)), lVar2 < 0)
           ) {
          fn_82BA02A8(iVar4);
          fn_829639F0(iVar4);
        }
        else {
          fn_82F68CC0(*(undefined4 *)(iVar4 + 0x10),
                       *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10),
                       *(int *)(*(int *)(param_1 + 0x104) + 0xc) << 2);
          **(undefined4 **)(iVar4 + 8) = uStack_f0;
          *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = auStack_100[0];
          lVar2 = fn_82963D50(*(undefined4 *)(param_1 + 0x104),iVar4);
          fn_82BA02A8(iVar4);
          fn_829639F0(iVar4);
        }
      }
    }
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}

