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
extern int fn_82F641F8();
extern int fn_82F68BF0();
extern int fn_82F6ACF0();
extern int fn_82F6AD80();
extern int fn_82F71A70();
extern int fn_82F71B90();
extern int fn_82F71CD0();
extern int fn_82F7BACC();
extern unsigned int lbl_8329F734;
extern unsigned int lbl_8329F738;


undefined4 * fn_82F7B940(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puStack_50;
  
  puStack_50 = (undefined4 *)0x0;
  fn_82F71CD0(1);
  iVar4 = 0;
  do {
    iVar3 = lbl_8329F734;
    puVar2 = puStack_50;
    if (lbl_8329F738 <= iVar4) {
LAB_82f7ba88:
      puStack_50 = puVar2;
      if (puStack_50 != (undefined4 *)0x0) {
        puStack_50[3] = puStack_50[3] & 0x8000;
        puStack_50[1] = 0;
        puStack_50[2] = 0;
        *puStack_50 = 0;
        puStack_50[7] = 0;
        puStack_50[4] = 0xffffffff;
      }
      fn_82F7BACC();
      return puStack_50;
    }
    iVar5 = iVar4 * 4;
    if (*(int *)(iVar5 + lbl_8329F734) == 0) {
      iVar4 = fn_82F68BF0(0x3c);
      *(int *)(iVar5 + iVar3) = iVar4;
      if (iVar4 != 0) {
        iVar4 = fn_82F71A70((ulonglong)*(uint *)(iVar5 + lbl_8329F734) + 0x20,4000);
        if (iVar4 == 0) {
          fn_82F641F8(*(undefined4 *)(iVar5 + lbl_8329F734));
          *(undefined4 *)(iVar5 + lbl_8329F734) = 0;
        }
        else {
          RtlEnterCriticalSection((ulonglong)*(uint *)(iVar5 + lbl_8329F734) + 0x20);
          puVar2 = *(undefined4 **)(iVar5 + lbl_8329F734);
          puVar2[3] = 0;
        }
      }
      goto LAB_82f7ba88;
    }
    uVar1 = *(uint *)(*(int *)(iVar5 + lbl_8329F734) + 0xc);
    if (((uVar1 & 0x83) == 0) && ((uVar1 & 0x8000) == 0)) {
      if ((2 < iVar4) && ((iVar4 < 0x14 && (iVar3 = fn_82F71B90(iVar4 + 0x10), iVar3 == 0))))
      goto LAB_82f7ba88;
      fn_82F6ACF0(iVar4,*(undefined4 *)(iVar5 + lbl_8329F734));
      puVar2 = *(undefined4 **)(iVar5 + lbl_8329F734);
      if (((*(undefined4 **)(iVar5 + lbl_8329F734))[3] & 0x83) == 0) goto LAB_82f7ba88;
      fn_82F6AD80(iVar4);
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

