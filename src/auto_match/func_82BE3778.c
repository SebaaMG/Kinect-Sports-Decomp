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
extern int fn_82BE29F8();
extern int fn_82BE2E60();
extern int fn_82BE5240();
extern int fn_82BE5758();
extern int fn_82BE57C0();
extern int fn_82BE7068();
extern int fn_82BE8458();
extern int fn_82BE8B30();
extern int fn_82BE8E48();
extern int fn_82BE8FB8();
extern int fn_82BE9078();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82D7EA10();
extern unsigned int lbl_8322B130;


int fn_82BE3778(undefined8 param_1)

{
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (lbl_8322B130 != 0) {
    fn_82BE5240(lbl_8322B130,0xc9,0xffffffff82196582);
    return 0xc9;
  }
  fn_82BE5758();
  iVar2 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8f48);
  if (iVar2 == 0) {
    return 0x69;
  }
  fn_82BE8E48();
  iVar2 = fn_82D7EA10();
  if (iVar2 == 0) {
    iVar4 = 0x68;
LAB_82be37fc:
    fn_82BE8FB8();
    fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8f48);
    fn_82BE57C0();
    return iVar4;
  }
  uVar1 = thunk_FUN_82be5550(0x198);
  if ((uVar1 & 0xffffffff) == 0) {
    lbl_8322B130 = 0;
  }
  else {
    lbl_8322B130 = fn_82BE29F8(uVar1,param_1,1);
  }
  if (lbl_8322B130 == 0) {
    iVar4 = 0x65;
    lbl_8322B130 = 0;
    goto LAB_82be37fc;
  }
  if (*(int *)(lbl_8322B130 + 0x10) == 0) {
    iVar4 = *(int *)(lbl_8322B130 + 4);
    if (iVar4 == 0) {
      iVar4 = 100;
    }
LAB_82be38d0:
    if (iVar4 == 0) goto LAB_82be38e4;
  }
  else {
    iVar2 = fn_82BE7068();
    if ((iVar2 != 0) && (iVar2 = fn_82BE8458(lbl_8322B130 + 0x120), iVar2 != 0)) {
      iVar2 = lbl_8322B130 + 0x30;
      if (lbl_8322B130 == 0) {
        iVar2 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = lbl_8322B130 + 0x28;
      }
      fn_82BE8B30(iVar3,iVar2);
      fn_82BE9078();
      goto LAB_82be38d0;
    }
    iVar4 = 0x65;
    *(undefined4 *)(lbl_8322B130 + 0x10) = 0;
  }
  fn_82BE2E60(1,0);
LAB_82be38e4:
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8f48);
  return iVar4;
}

