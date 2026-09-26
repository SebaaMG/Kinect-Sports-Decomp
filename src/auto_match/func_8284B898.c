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
extern unsigned int *auStack_98;
extern int fn_822462F0();
extern int fn_8284A128();
extern int fn_8284A218();
extern int fn_8284A940();
extern int fn_8284B530();
extern int fn_82BA02A8();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_90;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_b8;
extern unsigned int iStack_c0;
extern unsigned int uStack_bc;


undefined4 * fn_8284B898(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  int iStack_c0;
  undefined1 uStack_bc;
  int iStack_b8;
  int iStack_a8;
  int iStack_a4;
  int aiStack_a0 [2];
  undefined1 auStack_98 [8];
  int iStack_90;
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_1c;
  int iStack_18;
  
  iStack_b8 = param_4 + 0xc;
  iStack_c0 = 0;
  uStack_bc = 0;
  iStack_90 = *(int *)(param_2 + 8);
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  if (iStack_90 == 0) {
    fn_8284A940(param_1,param_2,1,*(undefined4 *)(param_2 + 4),param_4);
    return puStack00000014;
  }
  piStack_58 = *(int **)(param_2 + 4);
  iStack_a8 = *piStack_58;
  iStack_54 = iStack_a8;
  fn_82BA02A8(&iStack_a8,param_2);
  if (iStack_a8 == iStack00000024) {
    iStack_50 = iStack00000024;
    uVar1 = fn_822462F0(iStack_b8,iStack00000024 + 0xc);
    if ((int)LZCOUNT(uVar1) == 0) {
      fn_8284A940(puStack00000014,iStack0000001c,1,iStack00000024,iStack0000002c);
      return puStack00000014;
    }
  }
  else {
    iStack_a4 = *(int *)(iStack0000001c + 4);
    iStack_4c = iStack_a4;
    fn_82BA02A8(&iStack_a4,iStack0000001c);
    if (iStack_a4 == iStack00000024) {
      piStack_48 = (int *)(*(int *)(iStack0000001c + 4) + 8);
      iStack_44 = *piStack_48 + 0xc;
      uVar1 = fn_822462F0(iStack_44,iStack_b8);
      if ((int)LZCOUNT(uVar1) == 0) {
        fn_8284A940(puStack00000014,iStack0000001c,0,
                      *(undefined4 *)(*(int *)(iStack0000001c + 4) + 8),iStack0000002c);
        return puStack00000014;
      }
    }
    else {
      iStack_40 = iStack00000024;
      uVar1 = fn_822462F0(iStack_b8,iStack00000024 + 0xc);
      if ((int)LZCOUNT(uVar1) == 0) {
        iStack_c0 = iStack00000024;
        fn_8284A218(&iStack_c0);
        iStack_3c = iStack_c0;
        uVar1 = fn_822462F0(iStack_c0 + 0xc,iStack_b8);
        if ((int)LZCOUNT(uVar1) == 0) {
          iStack_38 = iStack_c0;
          if (*(char *)(*(int *)(iStack_c0 + 8) + 0x2d) != '\0') {
            fn_8284A940(puStack00000014,iStack0000001c,0,iStack_c0,iStack0000002c);
            return puStack00000014;
          }
          fn_8284A940(puStack00000014,iStack0000001c,1,iStack00000024,iStack0000002c);
          return puStack00000014;
        }
      }
      iStack_34 = iStack00000024;
      uVar1 = fn_822462F0(iStack00000024 + 0xc,iStack_b8);
      if ((int)LZCOUNT(uVar1) == 0) {
        iStack_c0 = iStack00000024;
        aiStack_a0[0] = *(int *)(iStack0000001c + 4);
        iStack_30 = aiStack_a0[0];
        fn_82BA02A8(aiStack_a0,iStack0000001c);
        fn_8284A128(&iStack_c0);
        if (aiStack_a0[0] != iStack_c0) {
          iStack_1c = iStack_c0;
          uVar1 = fn_822462F0(iStack_b8,iStack_c0 + 0xc);
          if ((int)LZCOUNT(uVar1) != 0) goto code_r0x8284bf8c;
        }
        iStack_18 = iStack00000024;
        if (*(char *)(*(int *)(iStack00000024 + 8) + 0x2d) != '\0') {
          fn_8284A940(puStack00000014,iStack0000001c,0,iStack00000024,iStack0000002c);
          return puStack00000014;
        }
        fn_8284A940(puStack00000014,iStack0000001c,1,iStack_c0,iStack0000002c);
        return puStack00000014;
      }
    }
  }
code_r0x8284bf8c:
  puVar2 = (undefined4 *)fn_8284B530(auStack_98,iStack0000001c,iStack0000002c,uStack_bc);
  *puStack00000014 = *puVar2;
  return puStack00000014;
}

