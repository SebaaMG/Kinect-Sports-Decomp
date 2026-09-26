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
extern int fn_827664B0();
extern int fn_827668B8();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_827B08A0(longlong param_1,int param_2,longlong param_3,int param_4)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uStack_60;
  uint uStack_5c;
  byte abStack_58 [16];
  byte abStack_48 [72];
  
  iVar2 = fn_827664B0(param_1 + 0xc,param_2,&uStack_5c);
  iVar2 = iVar2 + param_2;
  iVar3 = fn_827664B0(param_3 + 0xc,param_4,&uStack_60);
  iVar3 = iVar3 + param_4;
  if (uStack_5c == uStack_60) {
    uVar10 = uStack_5c >> 1;
    while (uVar10 != 0) {
      uVar10 = uVar10 - 1;
      iVar4 = fn_827668B8(param_1 + 0xc,iVar2,abStack_48);
      iVar5 = fn_827668B8(param_3 + 0xc,iVar3,abStack_58);
      if (iVar4 != iVar5) goto LAB_827b08f4;
      pbVar8 = abStack_58;
      pbVar9 = abStack_48;
      lVar7 = 0;
      if (iVar4 != 0) {
        pbVar6 = pbVar9 + iVar4;
        do {
          lVar7 = (ulonglong)*pbVar9 - (ulonglong)*pbVar8;
          if (lVar7 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar8 = pbVar8 + 1;
        } while (pbVar9 != pbVar6);
      }
      if ((int)lVar7 != 0) goto LAB_827b08f4;
      iVar2 = iVar4 + iVar2;
      iVar3 = iVar5 + iVar3;
    }
    uVar1 = 1;
  }
  else {
LAB_827b08f4:
    uVar1 = 0;
  }
  return uVar1;
}

