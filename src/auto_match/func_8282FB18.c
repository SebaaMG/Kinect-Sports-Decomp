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
extern int fn_82822F60();
extern int fn_828252D0();
extern int fn_828252E8();
extern int fn_82832368();
extern int fn_82F678C8();
extern int fn_82F6AB08();
extern int fn_82F6CE40();


undefined8 fn_8282FB18(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar3;
  longlong lVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  int aiStack_30 [12];
  
  uVar1 = fn_828252D0(*(int *)(param_2 + 0xa4) << 2);
  *(int *)(param_2 + 0x3c4) = (int)uVar1;
  iVar3 = fn_82F678C8(uVar1,4,*(undefined4 *)(param_2 + 0xa4),param_1);
  if (iVar3 == *(int *)(param_2 + 0xa4)) {
    fn_82832368(*(undefined4 *)(param_2 + 0x3bc));
    uVar6 = 0;
    if (*(int *)(param_2 + 0xa4) != 0) {
      iVar3 = *(int *)(param_2 + 0x3c4);
      iVar5 = 0;
      do {
        uVar1 = fn_828252D0(*(undefined4 *)(iVar5 + iVar3));
        *(int *)(**(int **)(param_2 + 0x3bc) + iVar5) = (int)uVar1;
        iVar4 = fn_82F678C8(uVar1,1,*(undefined4 *)(iVar5 + *(int *)(param_2 + 0x3c4)),param_1);
        iVar3 = *(int *)(param_2 + 0x3c4);
        if (iVar4 != *(int *)(iVar5 + iVar3)) {
          lVar2 = fn_82F6AB08();
          uVar1 = 0xffffffff8201ef50;
          goto LAB_8282fb68;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < *(uint *)(param_2 + 0xa4));
    }
    uVar6 = 0;
    if (*(int *)(param_2 + 0xa0) != 0) {
      do {
        aiStack_30[0] = fn_828252E8(param_2,0x18);
        *(int *)(aiStack_30[0] + 0x10) = param_2;
        *(uint *)(aiStack_30[0] + 0x14) = uVar6;
        fn_82822F60(param_2 + 0x38c,aiStack_30[0],0xffffffff82824430,aiStack_30);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_2 + 0xa0));
    }
    uVar1 = 0;
  }
  else {
    lVar2 = fn_82F6AB08();
    uVar1 = 0xffffffff8201ef08;
LAB_8282fb68:
    fn_82F6CE40(lVar2 + 0x40,uVar1);
    uVar1 = 5;
  }
  return uVar1;
}

