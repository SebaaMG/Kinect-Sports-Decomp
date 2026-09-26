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
extern int fn_826972E0();
extern int fn_82739680();
extern int fn_827397D8();


void fn_8273A100(int param_1)

{
  undefined4 uVar1;
  char cVar5;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  
  cVar5 = fn_82695468(param_1,0x23);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar9 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar9 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      dVar10 = (double)fn_826972E0(uVar2,uVar1);
      iVar6 = *(int *)(iVar9 + 0x58);
      uVar8 = (uint)dVar10;
      uVar7 = (ulonglong)uVar8;
      if (0x3b < iVar6) {
        uVar3 = fn_82739680(*(undefined4 *)(iVar9 + 0x54));
        uVar3 = uVar3 & 0xff;
        uVar4 = fn_82739680(uVar7);
        uVar8 = (uint)uVar7;
        *(uint *)(iVar9 + 0x58) = (iVar6 - uVar3) + (uVar4 & 0xff);
      }
      *(uint *)(iVar9 + 0x54) = uVar8;
      uVar3 = uVar8 - 0x7b1;
      *(longlong *)(iVar9 + 0x48) =
           (longlong)
           (int)(((int)(uVar8 - 0x641) / 400 - (int)(uVar8 - 0x76d) / 100) +
                 ((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0) +
                 (uVar8 - 0x7b2) * 0x16d + *(int *)(iVar9 + 0x58)) * 86400000 +
           (longlong)*(int *)(iVar9 + 0x50);
      fn_827397D8(iVar9);
    }
  }
  return;
}

