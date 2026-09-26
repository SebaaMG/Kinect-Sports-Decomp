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
extern int fn_82773958();
extern int fn_8278FD18();
extern int fn_82791070();
extern int fn_827912D8();
extern int fn_82F68CC0();
extern unsigned int iStack_54;


void fn_827921B8(undefined8 param_1,uint *param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint auStack_60 [2];
  int *piStack_58;
  int iStack_54;
  
  if ((int)param_4 == -1) {
    param_4 = fn_827912D8();
  }
  uVar9 = param_4 - param_3;
  fn_82773958(param_2,uVar9 + 1);
  auStack_60[0] = 0;
  fn_82791070(&piStack_58,param_1,param_3,auStack_60);
  uVar3 = (ulonglong)auStack_60[0];
  uVar8 = 0;
  iVar6 = iStack_54 << 2;
  iVar7 = iStack_54;
  while( true ) {
    if (((piStack_58 == (int *)0x0) || (iVar7 < 0)) || (bVar1 = false, piStack_58[1] <= iVar7)) {
      bVar1 = true;
    }
    if ((bVar1) || ((uVar9 & 0xffffffff) == 0)) break;
    puVar5 = *(uint **)(*piStack_58 + iVar6);
    uVar4 = (ulonglong)puVar5[1];
    if (uVar4 != 0) {
      cVar2 = fn_8278FD18(puVar5);
      if (cVar2 != '\0') {
        uVar4 = uVar4 - 1;
      }
    }
    uVar10 = uVar4 - uVar3;
    if ((uVar9 & 0xffffffff) < (uVar4 - uVar3 & 0xffffffff)) {
      uVar10 = uVar9;
    }
    fn_82F68CC0((uVar8 & 0x7fffffff) * 2 + (ulonglong)*param_2,
                 (uVar3 & 0x7fffffff) * 2 + (ulonglong)*puVar5,(uVar10 & 0x7fffffff) << 1);
    uVar8 = uVar10 + uVar8;
    uVar3 = 0;
    uVar9 = uVar9 - uVar10;
    if (iVar7 < piStack_58[1]) {
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
    }
  }
  *(undefined2 *)((int)((uVar8 & 0xffffffff) << 1) + *param_2) = 0;
  return;
}

