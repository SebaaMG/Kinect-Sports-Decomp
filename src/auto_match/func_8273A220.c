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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826972E0();
extern int fn_82739680();
extern int fn_82739A30();
extern unsigned int lbl_82011DF0;


void fn_8273A220(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  
  cVar6 = fn_82695468(param_1,0x23);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar11 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar11 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      dVar12 = (double)fn_826972E0(uVar4,uVar2);
      uVar1 = (uint)dVar12;
      fn_82739A30(param_1);
      dVar12 = (double)fn_826972E0(*(undefined4 *)(param_1 + 4),
                                         *(undefined4 *)(param_1 + 0x18));
      iVar10 = (int)dVar12;
      iVar7 = *(int *)(iVar11 + 0x58);
      iVar9 = 0;
      puVar8 = &lbl_82011DF0;
      if (0 < (int)uVar1) {
        puVar8 = &lbl_82011DF0;
        uVar5 = fn_82739680(*(undefined4 *)(iVar11 + 0x54));
        iVar9 = *(int *)(puVar8 + (int)(((uVar5 & 0xff) * 0xc + (ulonglong)uVar1 & 0xffffffff) << 2)
                                  + -4);
      }
      uVar5 = fn_82739680(*(undefined4 *)(iVar11 + 0x54));
      if (*(int *)(puVar8 + (int)(((uVar5 & 0xff) * 0xc + (ulonglong)uVar1 & 0xffffffff) << 2)) -
          iVar9 < iVar10) {
        iVar10 = *(int *)(puVar8 + (int)(((uVar5 & 0xff) * 0xc + (ulonglong)uVar1 & 0xffffffff) << 2
                                        )) - iVar9;
      }
      iVar10 = iVar9 + iVar10 + -1;
      *(int *)(iVar11 + 0x58) = iVar10;
      *(longlong *)(iVar11 + 0x48) =
           (longlong)(iVar10 - iVar7) * 86400000 + *(longlong *)(iVar11 + 0x48);
      puVar3 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar3);
      *puVar3 = 0;
    }
  }
  return;
}

