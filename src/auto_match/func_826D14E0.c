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
extern int fn_8267C498();
extern int fn_8269A0B0();
extern int fn_8269B8B8();
extern int fn_826C7758();
extern int fn_826C86D8();
extern int fn_826D03A0();
extern int fn_82700248();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_53;
extern unsigned int uStack_54;
extern unsigned int uStack_55;
extern unsigned int uStack_56;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


ulonglong fn_826D14E0(int *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char cVar5;
  longlong lVar3;
  int iVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  
  fn_8269B8B8(param_1,param_1[0x28]);
  uVar1 = fn_826C86D8(param_1);
  if (-1 < (int)uVar1) {
    fn_826D03A0((ulonglong)(uint)param_1[0x28] + 0xa98,uVar1);
  }
  *(uint *)(param_1[0x28] + 0xb00) = *(uint *)(param_1[0x28] + 0xb00) | 0x400;
  uVar2 = fn_8269A0B0(param_1 + 0x2a);
  if ((uVar2 & 0xff) != 0) {
    uStack_60 = 4;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_56 = 0;
    uStack_55 = 0xff;
    uStack_54 = 0;
    uStack_53 = 0;
    cVar5 = fn_826C7758(param_1,&uStack_60);
    uVar2 = -(ulonglong)(cVar5 == '\0') & uVar2;
  }
  if ((uVar2 & 0xff) == 0) {
    if ((*(byte *)((int)param_1 + 0x66) & 0x20) != 0) {
      if (((uint)param_1[0x23] >> 0xc & 1) == 0) {
        lVar3 = (**(code **)(*param_1 + 0x40))(param_1);
        iVar4 = fn_82700248(lVar3 + 0xa2c,4);
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 4) = 2;
          param_1[1] = param_1[1] + 1;
          uStack_4c = 0;
          uStack_48 = 0xff;
          uStack_44 = uStack_44 & 0xffff;
          if (*(int *)(iVar4 + 8) != 0) {
            fn_8267C498();
          }
          *(int **)(iVar4 + 8) = param_1;
          if (*(int *)(iVar4 + 0xc) != 0) {
            fn_8267C498();
          }
          *(undefined4 *)(iVar4 + 0xc) = 0;
          *(undefined4 *)(iVar4 + 0x10) = uStack_50;
          *(undefined4 *)(iVar4 + 0x14) = uStack_4c;
          *(undefined4 *)(iVar4 + 0x18) = uStack_48;
          *(uint *)(iVar4 + 0x1c) = uStack_44;
        }
      }
    }
    lVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    iVar4 = fn_82700248(lVar3 + 0xa2c,4);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = 2;
      param_1[1] = param_1[1] + 1;
      uStack_4c = 0;
      uStack_48 = 0xff;
      uStack_44 = uStack_44 & 0xffff;
      if (*(int *)(iVar4 + 8) != 0) {
        fn_8267C498();
      }
      *(int **)(iVar4 + 8) = param_1;
      if (*(int *)(iVar4 + 0xc) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = uStack_50;
      *(undefined4 *)(iVar4 + 0x14) = uStack_4c;
      *(undefined4 *)(iVar4 + 0x18) = uStack_48;
      *(uint *)(iVar4 + 0x1c) = uStack_44;
    }
  }
  return uVar2;
}

