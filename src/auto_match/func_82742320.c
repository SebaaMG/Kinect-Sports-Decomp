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
extern unsigned int *auStack_90;
extern int fn_8268CC00();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82F643F8();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_821AAD20;


void fn_82742320(void)

{
  undefined4 uVar1;
  int iVar3;
  char cVar4;
  undefined8 uVar2;
  int iVar5;
  double dVar6;
  undefined1 auStack_90 [144];
  
  iVar3 = fn_82F6A53C();
  cVar4 = fn_82695468(iVar3,0xf);
  if (cVar4 == '\0') {
    fn_826954C0(iVar3,0xffffffff8200ef08,0,0);
  }
  else {
    iVar5 = *(int *)(iVar3 + 8) + -0x10;
    if (*(int *)(iVar3 + 8) == 0) {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (1 < *(int *)(iVar3 + 0x1c))) {
      fn_8268CC00(auStack_90);
      uVar1 = *(undefined4 *)(iVar3 + 0x18);
      uVar2 = fn_826957D0(iVar3,0);
      fn_826972E0(uVar2,uVar1);
      uVar1 = *(undefined4 *)(iVar3 + 0x18);
      uVar2 = fn_826957D0(iVar3,1);
      fn_826972E0(uVar2,uVar1);
      dVar6 = (double)lbl_821AAD20;
      if (2 < *(int *)(iVar3 + 0x1c)) {
        uVar1 = *(undefined4 *)(iVar3 + 0x18);
        uVar2 = fn_826957D0(iVar3,2);
        dVar6 = (double)fn_826972E0(uVar2,uVar1);
        dVar6 = (double)(float)dVar6;
        if (3 < *(int *)(iVar3 + 0x1c)) {
          uVar1 = *(undefined4 *)(iVar3 + 0x18);
          uVar2 = fn_826957D0(iVar3,3);
          fn_826972E0(uVar2,uVar1);
          if (4 < *(int *)(iVar3 + 0x1c)) {
            uVar1 = *(undefined4 *)(iVar3 + 0x18);
            uVar2 = fn_826957D0(iVar3,4);
            fn_826972E0(uVar2,uVar1);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_82F643F8(dVar6);
    }
  }
  fn_82F6A588();
  return;
}

