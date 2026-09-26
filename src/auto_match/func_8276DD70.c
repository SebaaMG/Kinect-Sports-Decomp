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
extern int fn_826D6290();
extern int fn_82769E90();
extern int fn_8276D930();


void fn_8276DD70(int *param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  puVar1 = (undefined4 *)*param_3;
  iVar3 = 4;
  uVar4 = 0x1505;
  lVar5 = 4;
  do {
    iVar3 = iVar3 + -1;
    uVar4 = (ulonglong)*(byte *)((int)puVar1 + iVar3) + (longlong)(int)uVar4 * 0x1003f;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar3 = *param_1;
  if ((iVar3 == 0) ||
     (iVar2 = fn_82769E90(param_1,param_3,*(uint *)(iVar3 + 4) & uVar4), iVar2 < 0)) {
    fn_8276D930(param_1,param_2,param_3,uVar4);
  }
  else {
    iVar3 = iVar2 * 0x14 + iVar3;
    *(undefined4 *)(iVar3 + 0x10) = *puVar1;
    fn_826D6290(iVar3 + 0x14,param_3[1]);
  }
  return;
}

