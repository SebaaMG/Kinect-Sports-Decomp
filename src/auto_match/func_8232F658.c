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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822BF0B0();
extern int fn_822BF738();
extern int fn_822C09B0();
extern int fn_824D3368();
extern int fn_824D33E8();


void fn_8232F658(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x24);
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar5 = fn_824D33E8(iVar2);
    if ((iVar5 == 0) && (iVar5 = fn_824D3368(iVar2), iVar5 == 0)) {
      if (*(int *)(iVar2 + 0x528) != 0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x530);
        uVar4 = *(undefined4 *)(iVar2 + 0x52c);
        fn_822C09B0(auStack_70,iVar1,1);
        fn_822BF0B0(*(undefined4 *)(iVar1 + 0x27c),uVar4,uVar3);
        uVar3 = *(undefined4 *)(iVar2 + 0x52c);
        uVar4 = *(undefined4 *)(iVar2 + 0x530);
        fn_822C09B0(auStack_60,iVar1,1);
        fn_822BF738(iVar1,uVar4,uVar3,1,0);
      }
      if (*(int *)(iVar2 + 0x9a8) != 0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x9b0);
        uVar4 = *(undefined4 *)(iVar2 + 0x9ac);
        fn_822C09B0(auStack_50,iVar1,0);
        fn_822BF0B0(*(undefined4 *)(iVar1 + 0x27c),uVar4,uVar3);
        uVar3 = *(undefined4 *)(iVar2 + 0x9ac);
        uVar4 = *(undefined4 *)(iVar2 + 0x9b0);
        fn_822C09B0(auStack_40,iVar1,0);
        fn_822BF738(iVar1,uVar4,uVar3,0,0);
      }
    }
  }
  return;
}

