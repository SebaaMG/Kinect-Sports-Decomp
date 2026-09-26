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
extern unsigned int *auStack_50;
extern int fn_82BE5240();
extern int fn_82BE5B38();
extern int fn_82BE6638();
extern int fn_82BE7908();
extern int fn_82BE79F0();
extern int fn_82BE7A68();
extern int fn_82BE7AE0();
extern int fn_82BEE7D0();
extern int fn_82BF2BE0();
extern unsigned int iStack_60;
extern unsigned int lbl_83175240;
extern unsigned int lbl_83175244;


undefined8 fn_82BE82F0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iStack_60;
  int aiStack_5c [3];
  undefined1 auStack_50 [80];
  
  uVar4 = fn_82BE5B38(*(undefined4 *)(param_1 + 0x80));
  uVar5 = fn_82BE7908(uVar4,&iStack_60);
  if ((int)uVar5 != 0) {
    if (iStack_60 == 0) {
      fn_82BE6638(*(undefined4 *)(param_1 + 0x80),2);
      *(undefined4 *)(param_1 + 0x80) = 0;
      uVar4 = 0x321;
    }
    else {
      uVar5 = fn_82BE79F0(*(undefined4 *)(param_1 + 0x80));
      aiStack_5c[0] = iStack_60;
      fn_82BEE7D0(2,aiStack_5c,auStack_50,0x10);
      uVar3 = lbl_83175244;
      uVar2 = lbl_83175240;
      uVar1 = *(uint *)(*(int *)(param_1 + 0x80) + 0x14);
      uVar4 = fn_82BE7A68(uVar4);
      iVar6 = fn_82BF2BE0(param_1 + 0xa0,uVar4,iStack_60,uVar5,uVar3,uVar2,
                              (uVar1 & 0xf000) == 0x1000);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 0x9c) = 1;
        return 0;
      }
      fn_82BE7AE0(param_1);
      uVar4 = 800;
    }
    uVar5 = fn_82BE5240(param_1,uVar4,0xffffffff82196582);
  }
  return uVar5;
}

