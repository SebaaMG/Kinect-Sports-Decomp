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
extern int fn_82681898();
extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_826BC950();


void fn_8270FB08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar6;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar7;
  double dVar8;
  
  cVar6 = fn_82695468(param_1,8);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff82005ea4,0,0);
    return;
  }
  lVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
  if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
    lVar7 = 0;
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar8 = (double)fn_826972E0(uVar3,uVar2);
    iVar1 = (int)dVar8;
    if ((-1 < iVar1) && (iVar4 = fn_82693A98(lVar7 + 0x30), iVar1 < iVar4)) {
      uVar5 = fn_82693B08(lVar7 + 0x30,iVar1);
      dVar8 = (double)uVar5;
      goto LAB_8270fbc8;
    }
  }
  dVar8 = (double)fn_826BC950();
LAB_8270fbc8:
  fn_82681898(dVar8,*(undefined4 *)(param_1 + 4));
  return;
}

