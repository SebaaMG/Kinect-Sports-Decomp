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
extern unsigned int *auStack_80;
extern int fn_82ED6B90();
extern unsigned int iStack_b0;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_82F2ACF0(undefined8 param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iStack_b0;
  int aiStack_ac [4];
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined1 auStack_80 [4];
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  
  iStack_b0 = 0;
  aiStack_ac[0] = 0;
  puVar5 = (uint *)(param_2 + 4);
  uVar4 = 1;
  lVar1 = param_4 + 0x80;
  do {
    lVar3 = lVar1;
    lVar2 = param_3;
    fn_82ED6B90(param_1,lVar3,lVar2,uVar4,param_2,&iStack_b0,aiStack_ac,auStack_80);
    uVar4 = uVar4 + 1;
    param_3 = lVar2 + 0x10;
    lVar1 = lVar3 + 0x100;
  } while ((uVar4 & 0xffffffff) < 5);
  fn_82ED6B90(param_1,lVar3 + 0x100,lVar2 + 0x10,5,param_2,&iStack_b0,aiStack_ac,auStack_80);
  fn_82ED6B90(param_1,lVar3 + 0x200,lVar2 + 0x20,6,param_2,&iStack_b0,aiStack_ac,auStack_80);
  if (aiStack_ac[0] < iStack_b0) {
    *(undefined4 *)(param_2 + 0x1c) = 1;
    *puVar5 = (uint)(((ulonglong)*puVar5 - (ulonglong)uStack_9c) + (ulonglong)uStack_7c != 0);
    *(uint *)(param_2 + 8) =
         (uint)(((ulonglong)*(uint *)(param_2 + 8) - (ulonglong)uStack_98) + (ulonglong)uStack_78 !=
               0);
    *(uint *)(param_2 + 0xc) =
         (uint)(((ulonglong)*(uint *)(param_2 + 0xc) - (ulonglong)uStack_94) + (ulonglong)uStack_74
               != 0);
    *(uint *)(param_2 + 0x10) =
         (uint)(((ulonglong)*(uint *)(param_2 + 0x10) - (ulonglong)uStack_90) + (ulonglong)uStack_70
               != 0);
    *(uint *)(param_2 + 0x14) =
         (uint)(((ulonglong)uStack_6c - (ulonglong)uStack_8c) + (ulonglong)*(uint *)(param_2 + 0x14)
               != 0);
    *(uint *)(param_2 + 0x18) =
         (uint)(((ulonglong)uStack_68 - (ulonglong)uStack_88) + (ulonglong)*(uint *)(param_2 + 0x18)
               != 0);
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *puVar5 = (uint)(*puVar5 != 0);
    *(uint *)(param_2 + 8) = (uint)(*(int *)(param_2 + 8) != 0);
    *(uint *)(param_2 + 0xc) = (uint)(*(int *)(param_2 + 0xc) != 0);
    *(uint *)(param_2 + 0x10) = (uint)(*(int *)(param_2 + 0x10) != 0);
    *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x14) != 0);
    *(uint *)(param_2 + 0x18) = (uint)(*(int *)(param_2 + 0x18) != 0);
  }
  return;
}

