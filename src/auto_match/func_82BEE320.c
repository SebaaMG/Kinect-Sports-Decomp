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
extern int fn_82BA02A8();
extern int fn_82BE1A10();
extern int fn_82BE2078();
extern int fn_82BE5B80();
extern int fn_82BE5C30();
extern int fn_82BE5CC0();
extern int fn_82BE5D08();
extern int fn_82BE5F40();
extern int fn_82BE68A0();
extern int fn_82BE68F0();
extern int fn_82BE6950();
extern unsigned int lbl_831751CC;


bool fn_82BEE320(int param_1)

{
  uint uVar1;
  int iVar4;
  char cVar7;
  uint uVar5;
  undefined8 uVar2;
  int iVar6;
  longlong lVar3;
  char cVar8;
  
  cVar8 = '\0';
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar4 = fn_82BE68A0();
  if ((iVar4 != 0) && (cVar7 = fn_82BE5C30(param_1), cVar7 == -0x34)) {
    uVar5 = fn_82BE5CC0(param_1);
    iVar4 = *(int *)(param_1 + 0x20);
    if (uVar5 != 0) {
      do {
        uVar2 = fn_82BE5C30(param_1);
        uVar1 = (uint)uVar2 & 0xff;
        if (uVar1 == 0x1e) {
          fn_82BE68F0(param_1,uVar2);
          fn_82BA02A8(param_1,*(undefined4 *)(param_1 + 0x30),0x14);
          uVar5 = uVar5 - 0x16;
LAB_82bee420:
          cVar8 = cVar8 + '\x01';
        }
        else {
          if (uVar1 == 0x2a) {
            uVar2 = fn_82BE5D08();
            *(undefined8 *)(param_1 + 0x50) = uVar2;
            goto LAB_82bee420;
          }
          if (uVar1 == 0x2b) {
            uVar2 = fn_82BE5D08();
            *(undefined8 *)(param_1 + 0x58) = uVar2;
            goto LAB_82bee420;
          }
          if (uVar1 == 0x47) {
            lVar3 = fn_82BE6950();
            if (lVar3 != 0) {
              uVar2 = fn_82BE1A10();
              fn_82BE2078(uVar2,lVar3);
              (*(code *)lbl_831751CC)(lVar3);
            }
          }
          else {
            iVar6 = fn_82BE5F40();
            if (iVar6 == 0) {
              return false;
            }
          }
        }
      } while ((uint)(*(int *)(param_1 + 0x20) - iVar4) < uVar5);
    }
    if (cVar8 == '\x03') {
      lVar3 = fn_82BE5B80(param_1);
      return lVar3 != 0;
    }
  }
  return false;
}

