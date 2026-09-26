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
extern int fn_8282CD18();
extern int fn_8282CF08();
extern int fn_82F6E2F0();


longlong fn_8282D0E0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar1;
  longlong lVar5;
  undefined1 auStack_50 [80];
  
  iVar2 = *param_3;
  lVar5 = 0;
  if (iVar2 == 0) {
    iVar2 = fn_828252D0(0x136);
    uVar3 = fn_82F6E2F0(param_1);
    *(undefined4 *)(iVar2 + 0xcc) = uVar3;
    *(undefined1 *)(iVar2 + 0x134) = 0;
    *(byte *)(iVar2 + 0x134) = *(byte *)(iVar2 + 0x134) | 0x80;
    *param_3 = iVar2;
    uVar4 = fn_82827728();
    *(undefined1 *)(iVar2 + 0x135) = uVar4;
  }
  if ((*(byte *)(iVar2 + 0x134) & 4) == 0) {
    uVar1 = fn_8282BF78(iVar2,auStack_50);
    if (((((*(byte *)(iVar2 + 0x134) & 0x40) != 0) ||
         (lVar5 = fn_8282BFF0(uVar1,auStack_50), lVar5 == 0)) &&
        (((int)param_2 < 1 || (lVar5 = fn_8282CF08(iVar2,param_2,auStack_50), lVar5 == 0)))) &&
       ((int)param_2 == 4)) {
      lVar5 = fn_8282CD18(iVar2,auStack_50);
    }
  }
  else {
    lVar5 = 4;
  }
  return lVar5;
}

