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
extern unsigned int *auStack_50;
extern int fn_828252D0();
extern int fn_82827728();
extern int fn_8282BF78();
extern int fn_8282BFF0();
extern int fn_82F6E2F0();


/* WARNING: Removing unreachable block (ram,0x8282d184) */
/* WARNING: Removing unreachable block (ram,0x8282d1a4) */

undefined8 fn_8282D218(undefined8 param_1,int *param_2)

{
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar1;
  undefined8 uVar5;
  undefined1 auStack_50 [80];
  
  *param_2 = 0;
  iVar2 = *param_2;
  uVar5 = 0;
  if (iVar2 == 0) {
    iVar2 = fn_828252D0(0x136);
    uVar3 = fn_82F6E2F0(param_1);
    *(undefined4 *)(iVar2 + 0xcc) = uVar3;
    *(undefined1 *)(iVar2 + 0x134) = 0;
    *(byte *)(iVar2 + 0x134) = *(byte *)(iVar2 + 0x134) | 0x80;
    *param_2 = iVar2;
    uVar4 = fn_82827728();
    *(undefined1 *)(iVar2 + 0x135) = uVar4;
  }
  if ((*(byte *)(iVar2 + 0x134) & 4) == 0) {
    uVar1 = fn_8282BF78(iVar2,auStack_50);
    if ((*(byte *)(iVar2 + 0x134) & 0x40) == 0) {
      uVar5 = fn_8282BFF0(uVar1,auStack_50);
    }
  }
  else {
    uVar5 = 4;
  }
  return uVar5;
}

