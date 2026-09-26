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
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82713EE8();
extern unsigned int iStack_54;
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82012160;
extern unsigned int uStack_50;


undefined4 fn_8273D198(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int aiStack_60 [2];
  undefined **ppuStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined1 auStack_40 [64];
  
  auStack_40[0] = 0;
  fn_82681728(aiStack_60,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff82012158);
  fn_82713EE8(param_1 + 0x10,param_2,aiStack_60,auStack_40);
  lVar3 = (ulonglong)*(uint *)(aiStack_60[0] + 8) - 1;
  *(int *)(aiStack_60[0] + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(aiStack_60[0]);
  }
  iVar2 = fn_82696958(auStack_40,param_2);
  uStack_50 = 0;
  ppuStack_58 = (undefined **)&lbl_82012160;
  iStack_54 = param_2;
  (**(code **)(*(int *)(iVar2 + 0x10) + 0x20))(iVar2 + 0x10,param_2 + 0x78,&ppuStack_58,0,0);
  uVar1 = uStack_50;
  ppuStack_58 = &lbl_8200C4D4;
  fn_82696330(auStack_40);
  return uVar1;
}

