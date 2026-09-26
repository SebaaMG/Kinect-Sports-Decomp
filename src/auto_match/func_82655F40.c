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
extern unsigned int *auStack_68;
extern unsigned int *auStack_b0;
extern int fn_82655C68();
extern int fn_82F68CC0();
extern int fn_8314284C();
extern unsigned int uStack_6a;
extern unsigned int uStack_6c;
extern unsigned int uStack_6e;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


void fn_82655F40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined1 auStack_68 [104];
  
  uStack_ac = *(undefined4 *)(param_2 + 4);
  uStack_a8 = *(undefined4 *)(param_2 + 8);
  uStack_a4 = *(undefined4 *)(param_2 + 0xc);
  uStack_a0 = *(undefined4 *)(param_2 + 0x10);
  uStack_9c = *(undefined4 *)(param_2 + 0x14);
  if (*(int *)(param_2 + 0x18) == 0) {
    uStack_98 = 0;
    uStack_88 = 0;
  }
  else {
    uStack_98 = 3;
    uStack_88 = 3;
  }
  iVar1 = *(int *)(param_1 + 0x3ac0);
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x35bc);
    iVar2 = *(int *)(param_1 + 0x35c0);
  }
  else {
    iVar2 = (*(uint *)(iVar1 + 0x28) >> 0x1e & 2) + 1;
    iVar3 = (*(uint *)(iVar1 + 0x24) & 0x1fff) + iVar2;
    iVar2 = (*(uint *)(iVar1 + 0x24) >> 0xd & 0x1fff) + iVar2;
  }
  fn_82F68CC0(param_1 + 0x3670,auStack_b0,0x38);
  *(byte *)(param_1 + 0x2abe) = *(byte *)(param_1 + 0x2abe) | 0x10;
  fn_82655C68(param_1,iVar3,iVar2,param_1 + 0x3670,auStack_b0);
  uStack_70 = (undefined2)iVar3;
  uStack_6e = (undefined2)iVar2;
  uStack_6c = (undefined2)*(undefined4 *)(param_1 + 0x5500);
  uStack_6a = (undefined2)*(undefined4 *)(param_1 + 0x5504);
  fn_82F68CC0(auStack_68,auStack_b0,0x38);
  fn_8314284C(1,&uStack_70);
  return;
}

