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
extern int fn_82C75FE0();
extern int fn_830BA448();
extern int fn_830BC7C0();
extern int fn_830BD1B0();
extern int fn_830C0798();
extern int fn_830C0AE0();
extern unsigned int lbl_8329F084;


undefined8 fn_830BD320(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_630 [1584];
  
  iVar3 = param_1 + 0x3e70;
  fn_830BD1B0(param_1,iVar3);
  fn_830C0798(lbl_8329F084,param_1 + 0x57a0);
  uVar1 = fn_830BA448(param_1,iVar3,param_1 + 0x43f0,0,0,*(ushort *)(param_1 + 0x3ea4) >> 1);
  if (((int)uVar1 == 0) &&
     (uVar1 = fn_830BC7C0(param_1,iVar3,param_1 + 0x43f0,0,0,*(ushort *)(param_1 + 0x3ea4) >> 1)
     , (int)uVar1 == 0)) {
    if (*(int *)(param_1 + 0xf6c) != 0) {
      lVar2 = (longlong)(*(int *)(param_1 + 0xd0) >> 1) * (longlong)*(int *)(param_1 + 0x43c8);
      fn_82C75FE0(param_1,iVar3,
                        (longlong)(*(int *)(param_1 + 0xcc) >> 1) *
                        (longlong)*(int *)(param_1 + 0x43c8) + (ulonglong)*(uint *)(param_1 + 0xec0)
                        + (ulonglong)*(uint *)(param_1 + 0xdc),
                        (ulonglong)*(uint *)(param_1 + 0xec4) + (ulonglong)*(uint *)(param_1 + 0xe0)
                        + lVar2,(ulonglong)*(uint *)(param_1 + 0xec8) +
                                (ulonglong)*(uint *)(param_1 + 0xe0) + lVar2,0,
                        *(undefined4 *)(param_1 + 0x8c));
    }
    fn_830C0AE0(param_1 + 0x57a0,auStack_630);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x3d0c) = 0;
  }
  return uVar1;
}

