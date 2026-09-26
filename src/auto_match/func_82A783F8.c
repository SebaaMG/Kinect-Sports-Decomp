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
extern int fn_82A40BA8();
extern int fn_82A49C98();
extern int fn_82A49DF8();
extern int fn_82A59718();
extern int fn_82A598F0();
extern int fn_82A761A0();
extern int fn_82A76380();
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


longlong fn_82A783F8(int param_1)

{
  ushort uVar1;
  int iVar4;
  undefined8 uVar2;
  longlong lVar3;
  int iVar5;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 *puStack_58;
  uint uStack_54;
  undefined1 auStack_50 [80];
  
  iVar4 = fn_82A59718(*(undefined4 *)(param_1 + 4));
  puStack_58 = *(undefined1 **)(param_1 + 0x78);
  uStack_60 = *(undefined4 *)(iVar4 + 0x2c);
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = fn_82A49C98(uStack_60,1);
    fn_82A49DF8(auStack_50,0x28,1,*(undefined2 *)(*(int *)(param_1 + 0x78) + 2),
                      *(undefined4 *)(*(int *)(param_1 + 0x78) + 4),0x10,0x10,uVar2);
    puStack_58 = auStack_50;
  }
  uVar1 = *(ushort *)(*(int *)(iVar4 + 0x2c) + 0xc);
  trapWord(6,(ulonglong)uVar1,0);
  uStack_5c = *(uint *)(iVar4 + 0x34) / (uint)uVar1;
  uStack_54 = uStack_5c;
  (**(code **)(**(int **)(param_1 + 0xfc) + 0x24))();
  lVar3 = (**(code **)(**(int **)(param_1 + 0xfc) + 0x20))
                    (*(int **)(param_1 + 0xfc),1,&puStack_58,1,&uStack_60);
  if (-1 < lVar3) {
    fn_82A40BA8(param_1 + 0x38);
    fn_82A76380();
    iVar5 = fn_82A598F0(param_1 + 0x38,iVar4);
    if (iVar5 == 0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      lVar3 = 0;
      fn_82A761A0(iVar4);
    }
  }
  return lVar3;
}

