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
extern int fn_82773958();
extern int fn_8278FD18();
extern int fn_827912D8();
extern int fn_82F68CC0();


void fn_82791420(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  lVar3 = fn_827912D8();
  fn_82773958(param_2,lVar3 + 1);
  iVar6 = 0;
  uVar7 = 0;
  iVar5 = 0;
  while( true ) {
    if ((((int *)(param_1 + 0xc) == (int *)0x0) || (iVar6 < 0)) ||
       (bVar2 = false, *(int *)(param_1 + 0x10) <= iVar6)) {
      bVar2 = true;
    }
    if (bVar2) break;
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + iVar5);
    iVar8 = puVar1[1];
    if (iVar8 != 0) {
      cVar4 = fn_8278FD18(puVar1,*puVar1);
      if (cVar4 != '\0') {
        iVar8 = iVar8 + -1;
      }
    }
    fn_82F68CC0(((ulonglong)uVar7 & 0x7fffffff) * 2 + (ulonglong)*param_2);
    uVar7 = iVar8 + uVar7;
    if (iVar6 < *(int *)(param_1 + 0x10)) {
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
  }
  *(undefined2 *)(uVar7 * 2 + *param_2) = 0;
  return;
}

