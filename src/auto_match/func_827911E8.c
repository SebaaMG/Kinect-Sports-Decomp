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
extern int fn_8278FD18();
extern int fn_82790FA0();
extern int fn_82791070();
extern unsigned int iStack_54;


void fn_827911E8(int param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint auStack_60 [2];
  int *piStack_58;
  int iStack_54;
  
  fn_82791070(&piStack_58,param_1,param_3,auStack_60);
  uVar8 = param_4 - param_3;
  uVar7 = (ulonglong)auStack_60[0];
  iVar5 = iStack_54 << 2;
  iVar6 = iStack_54;
  while( true ) {
    if (((piStack_58 == (int *)0x0) || (iVar6 < 0)) || (bVar2 = false, piStack_58[1] <= iVar6)) {
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
    iVar1 = *(int *)(*piStack_58 + iVar5);
    if (uVar7 == 0) {
      fn_82790FA0(iVar1,*(undefined4 *)(param_1 + 8),param_2);
    }
    if ((uVar8 & 0xffffffff) == 0) break;
    uVar4 = (ulonglong)*(uint *)(iVar1 + 4);
    if ((uVar4 != 0) && (cVar3 = fn_8278FD18(iVar1), cVar3 != '\0')) {
      uVar4 = uVar4 - 1;
    }
    if ((uVar8 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
      uVar4 = uVar8 + uVar7;
    }
    uVar8 = (uVar8 - uVar4) + uVar7;
    uVar7 = 0;
    if (iVar6 < piStack_58[1]) {
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
  }
  return;
}

