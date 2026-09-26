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
extern int fn_82681838();
extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_826944C8();
extern int fn_82694928();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_82710990(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar6;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar7;
  double dVar8;
  int iStack_30;
  int iStack_2c;
  longlong lStack_28;
  
  cVar6 = fn_82695468(param_1,8);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff82005ea4,0,0);
  }
  else {
    lVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar7 = 0;
    }
    iStack_30 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
    *(int *)(iStack_30 + 8) = *(int *)(iStack_30 + 8) + 1;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar8 = (double)fn_826972E0(uVar3,uVar2);
    iVar1 = (int)dVar8;
    lStack_28 = (longlong)iVar1;
    if ((-1 < iVar1) && (iVar4 = fn_82693A98(lVar7 + 0x30), iVar1 < iVar4)) {
      uVar3 = fn_82693B08(lVar7 + 0x30,iVar1);
      piVar5 = (int *)fn_82694928(&iStack_2c,&iStack_30,uVar3);
      iVar1 = *piVar5;
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      lVar7 = (ulonglong)*(uint *)(iStack_30 + 8) - 1;
      *(int *)(iStack_30 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(iStack_30);
      }
      lVar7 = (ulonglong)*(uint *)(iStack_2c + 8) - 1;
      *(int *)(iStack_2c + 8) = (int)lVar7;
      iStack_30 = iVar1;
      if (lVar7 == 0) {
        fn_826944C8(iStack_2c);
      }
    }
    fn_82681838(*(undefined4 *)(param_1 + 4),&iStack_30);
    lVar7 = (ulonglong)*(uint *)(iStack_30 + 8) - 1;
    *(int *)(iStack_30 + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(iStack_30);
    }
  }
  return;
}

