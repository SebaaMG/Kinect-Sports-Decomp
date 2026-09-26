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
extern int fn_82ADD158();
extern int fn_82ADD198();
extern int fn_82ADD570();
extern int fn_82ADD590();
extern int fn_82ADD810();
extern int fn_82ADDE40();
extern int fn_82ADE7E8();
extern int fn_82ADFFA8();
extern int fn_82AE0148();


undefined8 fn_82AF6A18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = fn_82ADD810();
  uVar2 = fn_82ADD810(param_1,param_3);
  uVar7 = 1;
  if ((uVar1 & 0xffffffff) != (uVar2 & 0xffffffff)) {
    iVar3 = fn_82ADE7E8(param_1);
    fn_82AE0148(param_1,iVar3,uVar1,0,0,0,0,1);
    iVar4 = fn_82ADD158(param_1,param_2);
    iVar5 = fn_82ADD158(param_1,param_3);
    uVar8 = *(uint *)(iVar4 + 8) >> 1 & 0xf;
    while( true ) {
      if (uVar8 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = ((ulonglong)*(ushort *)(iVar4 + 0x12) - LZCOUNT(uVar8 & ~(uVar8 - 1))) + 0x1f;
      }
      if ((uVar1 & 0xffffffff) == 0) break;
      uVar7 = fn_82ADD198(param_1,uVar1);
      iVar6 = fn_82ADD590(param_1,uVar7);
      uVar9 = *(uint *)(iVar5 + 8) >> 1 & 0xf;
      while( true ) {
        if (uVar9 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = ((ulonglong)*(ushort *)(iVar5 + 0x12) - LZCOUNT(uVar9 & ~(uVar9 - 1))) + 0x1f;
        }
        if ((uVar1 & 0xffffffff) == 0) break;
        uVar7 = fn_82ADD198(param_1,uVar1);
        fn_82ADD570(param_1,*(undefined4 *)((iVar6 + 4) * 4 + iVar3),uVar7);
        uVar9 = uVar9 - (uVar9 & ~(uVar9 - 1));
      }
      uVar8 = uVar8 - (uVar8 & ~(uVar8 - 1));
    }
    uVar7 = fn_82ADFFA8(param_1,iVar3,uVar2,0,0,0,0);
    fn_82ADDE40(param_1,iVar3);
  }
  return uVar7;
}

