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
extern int fn_82A21368();
extern int fn_82A214B0();
extern int fn_82A23408();
extern int fn_82A234F0();
extern unsigned int lbl_83219B94;


uint fn_82A23880(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_82A23408(lbl_83219B94,0,0xffffffff820892c4,6,0);
  if (iVar1 == 0) {
    iVar1 = fn_82A234F0(lbl_83219B94,0,0xffffffff820892c4,6);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x80;
    fn_82A21368(lbl_83219B94,iVar1);
  }
  uVar3 = *(int *)(iVar1 + 8) + 1;
  *(uint *)(iVar1 + 8) = uVar3;
  uVar3 = uVar3 & 0xff;
  iVar2 = fn_82A234F0(lbl_83219B94,0,param_1,0x10);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 8) = uVar3;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x80;
    fn_82A21368(lbl_83219B94,iVar2);
  }
  fn_82A21368(lbl_83219B94,iVar1);
  fn_82A214B0(lbl_83219B94,iVar1);
  fn_82A214B0(lbl_83219B94,iVar2);
  return uVar3;
}

