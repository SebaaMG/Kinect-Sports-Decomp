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
extern int fn_82681838();
extern int fn_82681898();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_8269A190();
extern int fn_826A2F80();
extern int fn_82F65390();
extern int fn_82F6B020();
extern unsigned int iStack_4c;
extern unsigned int uStack_3c;


void fn_8273D010(int param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int aiStack_48 [2];
  undefined1 auStack_40 [4];
  undefined1 uStack_3c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x10) + -4);
  auStack_40[0] = 0;
  if (param_4 == 0) {
    fn_826959C8(auStack_40);
    auStack_40[0] = 0;
  }
  else if (param_4 == 1) {
    fn_826959C8(auStack_40);
    auStack_40[0] = 1;
  }
  else if (param_4 < 3) {
    iVar2 = fn_82F65390(((ulonglong)*param_3 & 0xfffffffc) + 8,0xffffffff82196f18,4);
    fn_826959C8(auStack_40);
    auStack_40[0] = 2;
    uStack_3c = iVar2 == 0;
  }
  else if (param_4 == 3) {
    fn_82F6B020(((ulonglong)*param_3 & 0xfffffffc) + 8);
    fn_82681898(auStack_40);
  }
  else if (param_4 < 5) {
    fn_8269A190(&iStack_4c,(ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0x78) + 0x254);
    fn_82681838(auStack_40,&iStack_4c);
    lVar3 = (ulonglong)*(uint *)(iStack_4c + 8) - 1;
    *(int *)(iStack_4c + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8();
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    auStack_50[0] = 0;
    fn_8269A190(aiStack_48,(ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0x78) + 0x254,param_2)
    ;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))
              (iVar1 + 0x10,*(undefined4 *)(param_1 + 8),aiStack_48,auStack_40,auStack_50);
    lVar3 = (ulonglong)*(uint *)(aiStack_48[0] + 8) - 1;
    *(int *)(aiStack_48[0] + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(aiStack_48[0]);
    }
  }
  else {
    fn_826A2F80(iVar1,auStack_40);
  }
  fn_82696330(auStack_40);
  return;
}

