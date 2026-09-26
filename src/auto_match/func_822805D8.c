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
extern int fn_82279768();
extern int fn_82280798();
extern int fn_822C5B18();
extern int fn_8265C9E0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_822805D8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 0x44) == 1) {
    lVar3 = fn_8265C9E0(0x130);
    if (lVar3 == 0) {
      uStack_50 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x4c);
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      uVar4 = fn_822C5B18(auStack_40,(ulonglong)uVar1 + 0x110);
      uStack_50 = fn_82279768(lVar3,(ulonglong)uVar1 + 0x1c,param_1,1,1,uVar4,uVar2,1);
    }
    uStack_4c = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    lVar3 = fn_8265C9E0(0x130);
    if (lVar3 == 0) {
      uStack_50 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x54);
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      uVar4 = fn_822C5B18(auStack_40,(ulonglong)uVar1 + 0x110);
      uStack_50 = fn_82279768(lVar3,(ulonglong)uVar1 + 0x1c,param_1,1,1,uVar4,uVar2,1);
    }
    uStack_4c = *(undefined4 *)(param_1 + 0x58);
  }
  fn_82280798(param_1,&uStack_50,0,0);
  return;
}

