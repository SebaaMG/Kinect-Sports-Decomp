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
extern unsigned int lbl_82027790;
extern unsigned int lbl_82027794;
extern unsigned int lbl_82027798;


undefined8 fn_828F0170(byte *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 == (byte *)0x0) {
    uVar4 = 0xffffffff8876086c;
  }
  else {
    uVar7 = 0;
    uVar8 = 0x31;
    do {
      uVar9 = (uVar8 + uVar7 & 0xffffffff) >> 1;
      iVar1 = (int)uVar9 * 0xc;
      pbVar6 = *(byte **)(&lbl_82027790 + iVar1);
      pbVar5 = param_1;
      do {
        uVar3 = (uint)*pbVar5;
        uVar2 = (uint)*pbVar6;
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 == uVar3);
      if (uVar2 == uVar3) {
        if ((*(uint *)(&lbl_82027798 + iVar1) & param_2) == param_2) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(&lbl_82027790 + iVar1);
            param_3[1] = *(undefined4 *)(&lbl_82027794 + iVar1);
            param_3[2] = *(undefined4 *)(&lbl_82027798 + iVar1);
          }
          return 0;
        }
        break;
      }
      if ((int)(uVar2 - uVar3) < 0) {
        uVar7 = uVar9 + 1;
        uVar9 = uVar8;
      }
      uVar8 = uVar9;
    } while (uVar7 < uVar9);
    uVar4 = 0xffffffff80004005;
  }
  return uVar4;
}

