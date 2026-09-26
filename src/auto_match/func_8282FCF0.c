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
extern int fn_82816B30();
extern int fn_828223C8();
extern int fn_82822F60();
extern int fn_828252E8();
extern int fn_82F678C8();
extern int fn_82F6AB08();
extern int fn_82F6CE40();
extern unsigned int iStack_48;
extern unsigned int uStack_40;


undefined8 fn_8282FCF0(undefined8 param_1,int param_2)

{
  int iVar2;
  longlong lVar1;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int aiStack_60 [4];
  int aiStack_50 [2];
  int iStack_48;
  undefined4 uStack_40;
  
  aiStack_60[0] = param_2 + 0x2fc;
  iVar6 = 0;
  iVar4 = 0;
  iVar3 = 0;
  uVar5 = 0;
  if (*(int *)(param_2 + 0xac) != 0) {
    do {
      iVar2 = fn_82F678C8(aiStack_50,0x14,1,param_1);
      if (iVar2 != 1) {
        lVar1 = fn_82F6AB08();
        fn_82F6CE40(lVar1 + 0x40,0xffffffff8201ef98);
        return 5;
      }
      if (iVar3 != aiStack_50[0]) {
        do {
          fn_828223C8(aiStack_60[0],aiStack_60);
          iVar3 = *(int *)(aiStack_60[0] + 0xc);
          iVar4 = *(int *)(aiStack_60[0] + 0x18);
          iVar6 = aiStack_60[0];
        } while (iVar3 != aiStack_50[0]);
      }
      iStack_48 = iStack_48 + iVar4;
      aiStack_50[0] = iVar6;
      fn_82816B30(*(undefined4 *)(iVar6 + 0x48),aiStack_50);
      *(undefined1 *)(iVar6 + 0x54) = 0;
      iVar2 = fn_828252E8(param_2,0x18);
      *(int *)(iVar2 + 0x10) = param_2;
      *(undefined4 *)(iVar2 + 0x14) = uStack_40;
      fn_82822F60(param_2 + 0x3a4,iVar2,0xffffffff828244e8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0xac));
  }
  return 0;
}

