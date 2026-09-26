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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_8269A190();
extern int fn_826A2F80();
extern int fn_826B32D0();
extern int fn_8273D588();
extern unsigned int iStack_5c;


void fn_8273DC88(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined4 auStack_58 [2];
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x78);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x10) + -4);
  uVar3 = fn_826B32D0(*(int *)(param_1 + 8),*(undefined4 *)(iVar1 + 0x2a0),iVar1 + 0xc,0,
                            0xffffffffffffffff);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    auStack_60[0] = 0;
    fn_8269A190(&iStack_5c,(ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0x78) + 0x254,param_2)
    ;
    iVar1 = *(int *)(iVar2 + 0x10);
    uVar4 = fn_826961B0(auStack_50,uVar3);
    (**(code **)(iVar1 + 0xc))
              (iVar2 + 0x10,*(undefined4 *)(param_1 + 8),&iStack_5c,uVar4,auStack_60);
    lVar5 = (ulonglong)*(uint *)(iStack_5c + 8) - 1;
    *(int *)(iStack_5c + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_5c);
    }
  }
  else {
    uVar4 = fn_826961B0(auStack_50,uVar3);
    fn_826A2F80(iVar2,uVar4);
  }
  fn_82696330(auStack_50);
  auStack_58[0] = (undefined4)uVar3;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  fn_8273D588(param_1 + 0x10,auStack_58);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  return;
}

