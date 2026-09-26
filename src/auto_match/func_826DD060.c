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
extern int fn_8268BA10();
extern int fn_826D8938();
extern int fn_826DC8F8();


void fn_826DD060(int *param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar1 = (undefined4 *)*param_3;
  iVar3 = 4;
  uVar5 = 0x1505;
  lVar6 = 4;
  do {
    iVar3 = iVar3 + -1;
    uVar5 = (ulonglong)*(byte *)((int)puVar1 + iVar3) + (longlong)(int)uVar5 * 0x1003f;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar3 = *param_1;
  if ((iVar3 == 0) ||
     (iVar2 = fn_826D8938(param_1,param_3,*(uint *)(iVar3 + 4) & uVar5), iVar2 < 0)) {
    fn_826DC8F8(param_1,param_2,param_3,uVar5);
  }
  else {
    puVar4 = (undefined4 *)((iVar2 + 1) * 0x10 + iVar3);
    *puVar4 = *puVar1;
    fn_8268BA10(puVar4 + 1,param_3[1]);
  }
  return;
}

