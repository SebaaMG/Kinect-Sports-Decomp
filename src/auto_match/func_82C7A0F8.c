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
extern unsigned int *auStack_630;
extern int fn_82C76868();
extern int fn_82C77B70();
extern int fn_82C781F0();
extern int fn_830C0798();
extern int fn_830C0AE0();
extern int fn_830C1A80();
extern int fn_830C1B68();
extern int fn_830D9A40();
extern int fn_83105548();
extern unsigned int lbl_8329F084;


undefined8 fn_82C7A0F8(int param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_630 [1584];
  
  fn_830C1A80();
  uVar1 = *(ushort *)(param_1 + 0x3ea4) >> 1;
  fn_830C0798(lbl_8329F084,param_1 + 0x57a0);
  iVar4 = param_1 + 0x43f0;
  iVar5 = param_1 + 0x3e70;
  uVar2 = fn_830C1B68(param_1,iVar5,iVar4,0,0,uVar1);
  if ((((int)uVar2 == 0) &&
      (uVar2 = fn_83105548(param_1,iVar5,iVar4,0,0,uVar1), (int)uVar2 == 0)) &&
     (uVar2 = fn_830D9A40(param_1,iVar5,iVar4,0,0,uVar1), (int)uVar2 == 0)) {
    if (*(int *)(param_1 + 0xf6c) != 0) {
      if (*(int *)(param_1 + 0x3cb0) == 7) {
        fn_82C77B70();
      }
      else {
        fn_82C781F0(param_1,iVar5,0,0,uVar1);
      }
      fn_82C76868(param_1,iVar5,
                    (ulonglong)*(uint *)(param_1 + 0xec0) + (ulonglong)*(uint *)(param_1 + 0xdc),
                    (ulonglong)*(uint *)(param_1 + 0xec4) + (ulonglong)*(uint *)(param_1 + 0xe0),
                    (ulonglong)*(uint *)(param_1 + 0xec8) + (ulonglong)*(uint *)(param_1 + 0xe0),0,
                    uVar1);
    }
    if (((*(int *)(param_1 + 0xf6c) != 0) || (*(int *)(param_1 + 0x3a28) != 0)) ||
       (uVar3 = 0, *(int *)(param_1 + 0x3b9c) != -1)) {
      uVar3 = 1;
    }
    *(undefined4 *)(param_1 + 0x3d08) = uVar3;
    *(undefined4 *)(param_1 + 0x3d0c) = 0;
    *(undefined4 *)(param_1 + 0x3cf0) = 1;
    fn_830C0AE0(param_1 + 0x57a0,auStack_630);
    uVar2 = 0;
  }
  return uVar2;
}

