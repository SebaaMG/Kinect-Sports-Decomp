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
extern unsigned int *auStack_60;
extern int fn_8268ACE8();
extern int fn_8278FD18();
extern int fn_82791070();
extern int fn_82795C78();
extern unsigned int iStack_54;


void fn_82795FB8(int param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar5;
  int iVar4;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint auStack_60 [2];
  int *piStack_58;
  int iStack_54;
  
  fn_82791070(&piStack_58,param_1,param_3,auStack_60);
  param_4 = param_4 - param_3;
  uVar8 = (ulonglong)auStack_60[0];
  iVar4 = iStack_54 << 2;
  iVar7 = iStack_54;
  while( true ) {
    if (((piStack_58 == (int *)0x0) || (iVar7 < 0)) || (bVar2 = false, piStack_58[1] <= iVar7)) {
      bVar2 = true;
    }
    if (bVar2) break;
    iVar1 = *(int *)(*piStack_58 + iVar4);
    uVar6 = (ulonglong)*(uint *)(iVar1 + 4);
    if ((uVar6 != 0) && (cVar5 = fn_8278FD18(iVar1), cVar5 != '\0')) {
      uVar6 = uVar6 - 1;
    }
    uVar9 = param_4 + uVar8;
    uVar3 = uVar6;
    if ((((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff)) ||
        (uVar3 = uVar9, (uVar9 & 0xffffffff) == (uVar6 & 0xffffffff))) &&
       ((uVar9 = uVar3, cVar5 = fn_8278FD18(iVar1), cVar5 != '\0' &&
        (uVar9 = uVar9 + 1, (int)param_4 != -1)))) {
      param_4 = param_4 + 1;
    }
    fn_82795C78(iVar1,*(undefined4 *)(param_1 + 8),param_2,uVar8,uVar9);
    param_4 = (param_4 - uVar9) + uVar8;
    uVar8 = 0;
    if (iVar7 < piStack_58[1]) {
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 4;
    }
  }
  if ((*(ushort *)(param_2 + 0x2a) & 0x100) != 0) {
    iVar4 = fn_8268ACE8(param_2 + 0x10);
    bVar2 = true;
    if (iVar4 != 0) goto LAB_827960e4;
  }
  bVar2 = false;
LAB_827960e4:
  if (bVar2) {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
  }
  return;
}

