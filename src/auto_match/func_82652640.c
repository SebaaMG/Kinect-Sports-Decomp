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
extern unsigned int *__imp__VdGlobalDevice;
extern int fn_82645110();
extern int fn_82650EC8();
extern int fn_82651F48();
extern int fn_82A1BB18();
extern int fn_82A2AB78();
extern float lbl_821954C8;
extern unsigned int uRam83282404;


void fn_82652640(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  iVar1 = *__imp__VdGlobalDevice;
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) && (*(longlong *)(iVar1 + 0x2a80) != 0)) {
    if (param_1 < 0xe1) {
      if (param_1 != 0xe0) {
        if ((param_1 == 0) || (param_1 == 1)) {
          *(undefined4 *)(iVar1 + 0x5558) = 0;
          uRam83282404 = 0;
          return;
        }
        if (param_1 == 0x10) {
          uRam83282404 = uRam83282404 & ~(1 << (param_2 & 0x3f));
          if (param_2 != 6) {
            return;
          }
          *(undefined4 *)(iVar1 + 0x5558) = 0;
          return;
        }
        if (param_1 != 0x11) {
          if (param_1 != 0x22) {
            return;
          }
          *(uint *)(iVar1 + 0x5c18) = param_2;
          return;
        }
        uRam83282404 = 1 << (param_2 & 0x3f) | uRam83282404;
        if (param_2 != 6) {
          return;
        }
        *(undefined4 *)(iVar1 + 0x5558) = 1;
        *(undefined4 *)(iVar1 + 0x5550) = 0;
        *(undefined4 *)(iVar1 + 0x5554) = 0;
        return;
      }
    }
    else if ((param_1 != 0xe1) && (param_1 != 0xe2)) {
      if (param_1 == 0xe3) {
        fn_82650EC8(iVar1);
        return;
      }
      if (param_1 != 0xff) {
        return;
      }
      if ((uRam83282404 & 1) != 0) {
        fn_82A2AB78((double)((float)*(uint *)(iVar1 + 0x5520) * *(float *)(iVar1 + 0x5530) *
                                  lbl_821954C8),0x20000);
      }
      lVar5 = 0x11;
      puVar6 = (undefined4 *)0x831bea78;
      do {
        if ((puVar6[-2] & uRam83282404) != 0) {
          uVar2 = puVar6[-1];
          fn_82651F48(iVar1,*puVar6);
          fn_82A2AB78(uVar2);
        }
        lVar5 = lVar5 + -1;
        puVar6 = puVar6 + 3;
      } while (lVar5 != 0);
      return;
    }
    if ((*(int *)(iVar1 + 0x54f4) != 0) &&
       (iVar3 = fn_82A1BB18(), *(int *)(iVar1 + 0x2a88) == iVar3)) {
      uVar4 = *(uint *)(iVar1 + 0x30);
      if (*(uint *)(iVar1 + 0x38) < uVar4) {
        uVar4 = fn_82645110(iVar1);
      }
      *(uint *)(iVar1 + 0x30) = uVar4;
    }
  }
  return;
}

