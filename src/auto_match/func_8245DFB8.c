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
extern unsigned int *auStack_84;
extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern int fn_8245E230();
extern int fn_8245E2C8();
extern int fn_82558B08();
extern int fn_8262FBD8();
extern int fn_8263B758();
extern int fn_8263BDD8();
extern int fn_82A1DDC0();
extern int fn_82A1E740();
extern int fn_82A1E7D8();
extern int fn_82E23130();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int uStack_90;


longlong fn_8245DFB8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [24];
  int iStack_68;
  int iStack_64;
  
  iVar3 = param_1 + 0xe4;
  RtlEnterCriticalSection(iVar3);
  iVar2 = *(int *)(param_1 + 0x48) * 0x1c + param_1;
  lVar5 = 0;
  iVar6 = iVar2 + 0x78;
  if (*(int *)(param_1 + 0x50) == 0) {
    if (*(int *)(param_1 + 0xe0) != 0) {
      iVar2 = *(int *)(param_1 + 0xe0) + -1;
      *(int *)(param_1 + 0xe0) = iVar2;
      *(uint *)(param_1 + 0x50) = (uint)LZCOUNT(iVar2) >> 5;
    }
    lVar5 = 0x15;
  }
  else {
    if (*(int *)(iVar2 + 0x8c) == 0x12345678) {
      uVar4 = 0;
      iVar1 = fn_82A1E740(iVar6,&uStack_90,0);
      if (iVar1 != 0) {
        do {
          iVar1 = fn_82A1E740(param_1 + 0x5c,&uStack_90,0);
          if (iVar1 == 0) {
            fn_8245E230(param_1);
            lVar5 = 0x65b;
            break;
          }
          uVar4 = uVar4 + 1;
          if (0x42 < uVar4) break;
          fn_82558B08();
          iVar1 = fn_82A1E740(iVar6,&uStack_90,0);
        } while (iVar1 != 0);
      }
      if (*(int *)(iVar2 + 0x90) == 0) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      fn_82A1E7D8(*(undefined4 *)(iVar2 + 0x84));
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      if (lVar5 != 0) goto LAB_8245e210;
    }
    fn_8245E2C8(param_1,param_2,
                      *(undefined4 *)((*(int *)(param_1 + 0x48) + 0xc) * 4 + param_1));
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar2 = *(int *)(param_1 + 0x48) + 1;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) =
           *(undefined4 *)((*(int *)(param_1 + 0x48) + 0xc) * 4 + param_1);
    }
    else {
      fn_8263BDD8(*(int *)(param_1 + 0x28),0,0,0x10,&uStack_90,auStack_84,auStack_88,
                        auStack_8c);
      fn_8263B758(*(undefined4 *)(param_1 + 0x28),0,auStack_80);
      fn_82A1DDC0(*(undefined4 *)((*(int *)(param_1 + 0x48) + 0xf) * 4 + param_1),uStack_90,
                        ((longlong)iStack_64 * (longlong)iStack_68 & 0x3fffffffU) << 2);
      iVar1 = *(int *)(param_1 + 0x28);
      fn_8262FBD8(iVar1,*(uint *)(iVar1 + 0x20) & 0xfffff000,
                        *(uint *)(iVar1 + 0x30) & 0xfffff000);
      *(undefined4 *)(iVar2 + 0x8c) = 0x12345678;
      lVar5 = fn_82E23130(param_1 + 4,
                              *(undefined4 *)((*(int *)(param_1 + 0x48) + 0xf) * 4 + param_1),
                              param_3,param_4,iVar6);
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (lVar5 != 0) {
        fn_8245E230(param_1);
        *(undefined4 *)(iVar2 + 0x8c) = 0;
        goto LAB_8245e210;
      }
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) =
           *(undefined4 *)((*(int *)(param_1 + 0x48) + 0xc) * 4 + param_1);
      iVar2 = (*(int *)(param_1 + 0x48) + 1) % 3;
    }
    *(int *)(param_1 + 0x48) = iVar2;
  }
LAB_8245e210:
  if (iVar3 != 0) {
    RtlLeaveCriticalSection(iVar3);
  }
  return lVar5;
}

