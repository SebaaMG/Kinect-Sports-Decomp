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
extern int fn_828252D8();
extern int fn_828252E8();
extern int fn_82826568();
extern int fn_828295A8();
extern int fn_82F678C8();
extern int fn_82F6AB08();
extern int fn_82F6CE40();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


undefined8 fn_8282F5A8(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  int iStack_60;
  undefined4 uStack_5c;
  int aiStack_58 [22];
  
  uVar1 = (ulonglong)*(uint *)(param_2 + 0xb4) +
          ((ulonglong)*(uint *)(param_2 + 0xb0) & 0x7fffffff) * 2 & 0x3fffffff;
  lVar8 = uVar1 << 2;
  if (uVar1 != 0) {
    iVar2 = fn_828252D0(lVar8);
    iVar3 = fn_82F678C8(iVar2,lVar8,1,param_1);
    if (iVar3 != 1) {
      lVar8 = fn_82F6AB08();
      fn_82F6CE40(lVar8 + 0x40,0xffffffff8201efe0);
      return 5;
    }
    uVar5 = 0;
    iVar3 = *(int *)(param_2 + 0xb0) * 8 + iVar2;
    if (*(int *)(param_2 + 0xb0) != 0) {
      puVar9 = (uint *)(iVar2 + 4);
      do {
        uVar7 = 0;
        uVar4 = 0;
        if (*puVar9 != 0) {
          puVar6 = (undefined4 *)(iVar3 + -4);
          do {
            iStack_60 = fn_828252E8(param_2,0x1c);
            *(uint *)(iStack_60 + 0x14) = puVar9[-1];
            puVar6 = puVar6 + 1;
            *(undefined4 *)(iStack_60 + 0x18) = *puVar6;
            fn_82826568(param_2,*(undefined4 *)(iStack_60 + 0x14),&uStack_5c);
            fn_828295A8(uStack_5c,aiStack_58);
            *(int *)(iStack_60 + 0x10) = *(int *)(iStack_60 + 0x18) + aiStack_58[0];
            fn_82822F60(param_2 + 0x36c,iStack_60,0xffffffff82829f30,&iStack_60);
            uVar4 = *puVar9;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
        }
        uVar5 = uVar5 + 1;
        iVar3 = uVar4 * 4 + iVar3;
        puVar9 = puVar9 + 2;
      } while (uVar5 < *(uint *)(param_2 + 0xb0));
    }
    fn_828252D8(iVar2);
  }
  return 0;
}

