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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_824A2308();
extern int fn_824D2AE8();
extern int fn_824FDBD8();
extern int fn_8265C9E0();
extern int fn_82F51468();
extern int fn_82F51EF0();
extern int fn_82F53418();
extern unsigned int iStack_3c;
extern unsigned int lbl_82195810;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined8 fn_824FD278(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar6;
  ulonglong uVar4;
  int iVar7;
  undefined8 uVar5;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  char in_RESERVE;
  byte bVar12;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  
  *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_2 + 0x5c0);
  uVar6 = fn_824FDBD8(*(undefined4 *)(param_2 + 0x5c0));
  *(undefined4 *)(param_1 + 0xb68) = uVar6;
  *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0xb90) = *(undefined4 *)(param_2 + 0x5c8);
  uVar4 = fn_8265C9E0(0x1c);
  bVar1 = (uVar4 & 0xffffffff) == 0;
  bVar12 = bVar1 << 1;
  if (bVar1) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_824A2308(uVar4,*(undefined4 *)(param_1 + 0xb68));
  }
  *(int *)(param_1 + 0xb60) = iVar7;
  fn_82F51EF0(iVar7,*(int *)(param_2 + 0x5bc) != 0);
  *(undefined4 *)(iVar7 + 0x10) = lbl_82195810;
  *(undefined4 *)(param_1 + 0xb94) = 0;
  uVar6 = *(undefined4 *)(param_2 + 0x5cc);
  puVar3 = (undefined4 *)(param_1 + 0xba0U & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  *(undefined4 *)(param_1 + 0xb98) = uVar6;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  if (*(int *)(param_2 + 0x5d0) != 0) {
    uVar5 = fn_82F51468(auStack_38,iVar7);
    fn_824D2AE8(&uStack_40,uVar5);
    if (ZEXT48(piStack_34) != 0) {
      lVar10 = ZEXT48(piStack_34) + 8;
      do {
        puVar11 = (uint *)lVar10;
        lVar9 = (ulonglong)*puVar11 - 1;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(lVar9,0,lVar10);
          *puVar11 = uVar2;
          bVar12 = 2;
        }
      } while (!(bool)(bVar12 >> 1 & 1));
      if ((int)lVar9 == 0) {
        (**(code **)(*piStack_34 + 4))();
      }
    }
    iVar8 = fn_82F53418(uStack_40,param_2 + 0x5d0,1);
    iVar7 = 0;
    if (iVar8 != 0) {
      iVar7 = iVar8;
    }
    *(int *)(param_1 + 0xb88) = iVar7;
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  return 1;
}

