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
extern unsigned int *auStack_260;
extern unsigned int *auStack_2a0;
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_8276B1A8();
extern int fn_8276B218();
extern unsigned int uStack_270;
extern unsigned int uStack_278;
extern unsigned int uStack_280;
extern unsigned int uStack_288;
extern unsigned int uStack_290;
extern unsigned int uStack_298;


undefined8 fn_8276B860(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  ushort auStack_2a0 [4];
  undefined4 uStack_298;
  undefined1 *puStack_294;
  undefined4 uStack_290;
  undefined4 uStack_288;
  undefined1 *puStack_284;
  undefined4 uStack_280;
  undefined4 uStack_278;
  undefined1 *puStack_274;
  undefined4 uStack_270;
  undefined1 auStack_260 [608];
  
  fn_8268B330();
  uVar2 = 0;
  auStack_2a0[0] = 0;
  iVar5 = 0;
  bVar1 = true;
  uVar4 = 0;
  if (param_2[1] != 0) {
    do {
      if (uVar4 == 0) {
        auStack_2a0[0] = *(ushort *)*param_2;
LAB_8276b974:
        bVar1 = false;
        uVar2 = auStack_2a0[0];
      }
      else {
        puVar3 = (ushort *)*param_2 + uVar4 * 2;
        if (puVar3[-1] + 1 < (uint)*puVar3) {
          if (uVar2 == puVar3[-1]) {
            uStack_278 = 2;
            uStack_270 = 0x200;
            puStack_274 = auStack_260;
            fn_8276B1A8(&uStack_278,0xffffffff82014f0c);
          }
          else {
            uStack_298 = 2;
            uStack_290 = 0x200;
            puStack_294 = auStack_260;
            fn_8276B218(&uStack_298,0xffffffff82014f14,auStack_2a0,puVar3 + -1);
          }
          bVar1 = true;
          if (iVar5 != 0) {
            fn_8268B610(param_1,0xffffffff82196824,0xffffffffffffffff);
          }
          fn_8268B610(param_1,auStack_260,0xffffffffffffffff);
          iVar5 = iVar5 + 1;
          if (iVar5 < 5) {
            auStack_2a0[0] = *(ushort *)(uVar4 * 4 + *param_2);
            goto LAB_8276b974;
          }
          break;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2[1]);
  }
  if (!bVar1) {
    puStack_284 = auStack_260;
    uStack_288 = 2;
    uStack_280 = 0x200;
    fn_8276B218(&uStack_288,0xffffffff82014f14,auStack_2a0,
                  ((ulonglong)param_2[1] & 0x3fffffff) * 4 + (ulonglong)*param_2 + -2);
    if (iVar5 != 0) {
      fn_8268B610(param_1,0xffffffff82196824,0xffffffffffffffff);
    }
    fn_8268B610(param_1,auStack_260,0xffffffffffffffff);
  }
  if (uVar4 < param_2[1]) {
    fn_8268B610(param_1,0xffffffff82014efc,0xffffffffffffffff);
  }
  return param_1;
}

