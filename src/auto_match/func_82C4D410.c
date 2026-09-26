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
extern unsigned int *auStack_80;
extern int fn_82A1DDC0();
extern int fn_82A9FA30();
extern int fn_82C4A0E0();
extern int fn_82C4C448();
extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82F68CC0();
extern unsigned int iStack_90;
extern unsigned int uStack_8c;


undefined8 fn_82C4D410(int param_1,undefined2 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iStack_90;
  undefined4 uStack_8c;
  int aiStack_88 [2];
  undefined1 auStack_80 [128];
  
  *param_2 = 0;
  iStack_90 = 0;
  uStack_8c = 0;
  aiStack_88[0] = 1;
  if (param_1 == 0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2e0);
    lVar4 = (ulonglong)*(uint *)(iVar1 + 0x6070) + 8;
    if (2 < *(int *)(iVar1 + 0x3d00)) {
      *(int *)(iVar1 + 0xd84) = *(int *)(iVar1 + 0xd84) + 1;
    }
    *(undefined4 *)(iVar1 + 0x3d00) = 0;
    if (*(short *)(iVar1 + 0xe9c) != 0) {
      fn_82C4C448(param_1,*(undefined4 *)(iVar1 + 0x3cc0),*(undefined2 *)(iVar1 + 0x3cc4),
                    *(undefined4 *)(iVar1 + 0x3cc8),*(undefined4 *)(iVar1 + 0x3cd0),0);
      *(undefined2 *)(iVar1 + 0xe9c) = 0;
    }
    iVar6 = (*(int *)(iVar1 + 0x3d04) << 0x1c) >> 0x1c;
    if ((-1 < iVar6) && (iVar6 < 5)) {
      *(int *)(iVar1 + 0xe74) = iVar6;
    }
    fn_82A9FA30(*(undefined4 *)(iVar1 + 0xd30),0,&uStack_8c,4,&iStack_90,aiStack_88);
    uVar7 = 0;
    if (aiStack_88[0] != 0) {
      do {
        if ((*(int *)(iVar1 + 0x3cb0) != 7) || (uVar5 = uVar7 + iStack_90, 0x3f < uVar5)) break;
        fn_82F68CC0(auStack_80 + uVar7,uStack_8c);
        fn_82A9FA30(*(undefined4 *)(iVar1 + 0xd30),0,&uStack_8c,4,&iStack_90,aiStack_88);
        uVar7 = uVar5;
      } while (aiStack_88[0] != 0);
      if (uVar7 != 0) {
        iVar6 = uVar7 + iStack_90;
        if (*(int *)(iVar1 + 0x5da0) < iVar6) {
          if (*(int *)(iVar1 + 0x5da0) != 0) {
            fn_82C563B0(lVar4,*(undefined4 *)(iVar1 + 0x5da4));
          }
          iVar3 = fn_82C562F0(lVar4,iVar6,0xffffffff82196582);
          *(int *)(iVar1 + 0x5da4) = iVar3;
          if (iVar3 == 0) {
            *(undefined4 *)(iVar1 + 0x5da0) = 0;
            return 0xfffffffffffffff7;
          }
          *(int *)(iVar1 + 0x5da0) = iVar6;
        }
        fn_82A1DDC0(*(undefined4 *)(iVar1 + 0x5da4),auStack_80,uVar7);
        fn_82A1DDC0(*(int *)(iVar1 + 0x5da4) + uVar7,uStack_8c,iStack_90);
        iStack_90 = uVar7 + iStack_90;
        uStack_8c = *(undefined4 *)(iVar1 + 0x5da4);
      }
    }
    uVar2 = fn_82C4A0E0(iVar1,uStack_8c,iStack_90,aiStack_88[0],param_2,param_3,0);
  }
  return uVar2;
}

