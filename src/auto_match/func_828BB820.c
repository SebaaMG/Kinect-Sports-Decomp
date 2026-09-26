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
extern int fn_8223C478();
extern int fn_828E9DB8();
extern int fn_828E9F18();
extern int fn_828EA268();
extern int fn_828EA2D8();
extern unsigned int lbl_8321404C;


void fn_828BB820(int param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  
  uVar3 = lbl_8321404C;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  fn_8223C478(param_2,lbl_8321404C,0);
  fn_828E9DB8(param_2,uVar2,uVar3);
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 - 1U < 7) {
    if (iVar6 == 2) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      fn_8223C478(param_2,0x40,0);
      fn_828E9F18(param_2,uVar7,0x40);
    }
    else if (iVar6 == 3) {
      dVar8 = *(double *)(param_1 + 0x10);
      fn_8223C478(param_2,0x40,0);
      fn_828E9F18(param_2,(longlong)dVar8,0x40);
    }
    else {
      if (iVar6 == 4) {
        uVar4 = fn_828EA268(*(undefined4 *)(param_1 + 0x10));
        if ((uVar4 & 0xffffffff) != 0) {
          uVar4 = uVar4 - 1;
        }
        fn_8223C478(param_2,5,0);
        fn_828E9DB8(param_2,uVar4,5);
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        fn_8223C478(param_2,uVar4 + 1,0);
        fn_828E9DB8(param_2,uVar2,uVar4 + 1);
        iVar6 = *(int *)(param_1 + 0x10);
        if (iVar6 == 0) {
          return;
        }
        iVar5 = iVar6 << 4;
        iVar6 = iVar6 << 1;
      }
      else {
        if (iVar6 == 5) {
          fVar1 = *(float *)(param_1 + 0x10);
          fn_8223C478(param_2,0x20,0);
          fn_828E9DB8(param_2,(longlong)fVar1 & 0xffffffff,0x20);
          return;
        }
        if (iVar6 != 6) {
          if (iVar6 == 1) {
            uVar2 = *(undefined4 *)(param_1 + 0x10);
            fn_8223C478(param_2,0x20,0);
            fn_828E9DB8(param_2,uVar2,0x20);
            return;
          }
          fn_8223C478(param_2,0x40,0);
          fn_828EA2D8(param_2,param_1 + 0x10,8);
          return;
        }
        uVar4 = fn_828EA268(*(undefined4 *)(param_1 + 0x10));
        if ((uVar4 & 0xffffffff) != 0) {
          uVar4 = uVar4 - 1;
        }
        fn_8223C478(param_2,5,0);
        fn_828E9DB8(param_2,uVar4,5);
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        fn_8223C478(param_2,uVar4 + 1,0);
        fn_828E9DB8(param_2,uVar2,uVar4 + 1);
        iVar6 = *(int *)(param_1 + 0x10);
        if (iVar6 == 0) {
          return;
        }
        iVar5 = iVar6 << 3;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      fn_8223C478(param_2,iVar5,0);
      fn_828EA2D8(param_2,uVar2,iVar6);
    }
  }
  return;
}

