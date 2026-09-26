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
extern int fn_82297DB0();
extern int fn_822A3128();
extern unsigned int lbl_831D1328;


/* WARNING: Removing unreachable block (ram,0x822a1c04) */

void fn_822A1BC8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  iVar2 = lbl_831D1328;
  iVar3 = lbl_831D1328 + 8;
  uVar1 = *(uint *)(lbl_831D1328 + 8);
  uVar4 = (ulonglong)uVar1;
  if (uVar4 != *(uint *)(lbl_831D1328 + 0xc)) {
    uVar6 = *(uint *)(lbl_831D1328 + 0xc);
    if (uVar4 != uVar6) {
      do {
        fn_82297DB0(uVar4,1,0);
        uVar4 = uVar4 + 0x1c;
      } while ((uVar4 & 0xffffffff) != (ulonglong)uVar6);
    }
    *(uint *)(iVar2 + 0xc) = uVar1;
  }
  uVar1 = *param_1;
  uVar6 = 0;
  if ((int)(param_1[1] - uVar1) / 0x1c != 0) {
    lVar5 = 0;
    do {
      fn_822A3128(iVar3,lVar5 + (ulonglong)uVar1);
      uVar1 = *param_1;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x1c;
    } while (uVar6 < (uint)((int)(param_1[1] - uVar1) / 0x1c));
  }
  return;
}

