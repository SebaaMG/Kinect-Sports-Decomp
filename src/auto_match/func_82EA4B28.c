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
extern unsigned int *auStack_104;
extern unsigned int *auStack_160;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82F26F98();
extern unsigned int iStack_170;
extern unsigned int iStack_174;
extern unsigned int *iStack_1a0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000034;
extern unsigned int uStack_16c;
extern unsigned int uStack_178;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_19c;


void fn_82EA4B28(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  undefined4 uStack0000001c;
  uint uStack00000034;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  undefined4 in_stack_0000008c;
  uint in_stack_000000a4;
  uint in_stack_000000ac;
  int in_stack_000000c4;
  int in_stack_000000cc;
  uint in_stack_000000d4;
  uint in_stack_000000dc;
  undefined4 in_stack_000000e4;
  undefined4 in_stack_000000ec;
  undefined4 *in_stack_000000f4;
  undefined4 *in_stack_000000fc;
  int *in_stack_00000104;
  int iStack_1a0;
  uint uStack_19c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  uint uStack_180;
  uint uStack_178;
  int iStack_174;
  int iStack_170;
  uint uStack_16c;
  uint auStack_160 [23];
  undefined4 auStack_104 [65];
  
  uVar4 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  if (in_stack_00000064 == 0) {
    uStack_16c = 0;
    uVar3 = 0;
  }
  else {
    uStack_16c = 0xfffffffd;
    uVar3 = 0xfffffffffffffffe;
  }
  if (in_stack_00000074 == 0) {
    uStack_178 = 0;
    uStack_180 = 0;
  }
  else {
    uStack_178 = 0xfffffffd;
    uStack_180 = 0xfffffffe;
  }
  if (in_stack_0000006c == 0) {
    iStack_170 = 0;
    lVar6 = 0;
  }
  else {
    iStack_170 = 3;
    lVar6 = 2;
  }
  if (in_stack_0000007c == 0) {
    iStack_174 = 0;
  }
  else {
    uVar4 = 2;
    iStack_174 = 3;
  }
  uVar7 = (ulonglong)in_stack_000000dc;
  uVar10 = (ulonglong)in_stack_000000d4;
  auStack_104[1] = in_stack_000000ec;
  auStack_104[2] = in_stack_000000e4;
  uStack0000001c = param_2;
  uStack00000034 = param_5;
  if ((int)uVar3 < 0) {
    lVar11 = uVar3 + uVar7;
    lVar8 = uVar3 + (uVar3 & 0x3fffffff) * 4;
    do {
      uVar3 = (ulonglong)uStack_180;
      if ((int)uStack_180 < 0) {
        do {
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                              uVar3 + uVar10,lVar11,0);
            fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                              uVar3 + uVar10,lVar11,0);
            fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
          }
          iVar5 = (int)((lVar8 + uVar3 & 0xffffffff) << 3);
          *(undefined4 *)((int)auStack_104 + iVar5 + 4) = 0;
          uVar3 = uVar3 + 1;
          *(undefined4 *)((int)auStack_104 + iVar5 + 8) = 0;
        } while ((longlong)uVar3 < 0);
      }
      lVar14 = 0;
      if (-1 < (int)uVar4) {
        do {
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                              lVar14 + uVar10,lVar11,0);
            fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                              lVar14 + uVar10,lVar11,0);
            fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
          }
          iVar5 = (int)((lVar8 + lVar14 & 0xffffffffU) << 3);
          *(undefined4 *)((int)auStack_104 + iVar5 + 4) = 0;
          lVar14 = lVar14 + 1;
          *(undefined4 *)((int)auStack_104 + iVar5 + 8) = 0;
        } while ((int)lVar14 <= (int)uVar4);
      }
      lVar8 = lVar8 + 5;
      lVar11 = lVar11 + 1;
    } while (lVar8 < 0);
  }
  if ((int)uStack_180 < 0) {
    lVar11 = uStack_180 + uVar10;
    puVar9 = auStack_104 + uStack_180 * 2;
    lVar8 = -(ulonglong)uStack_180;
    do {
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          lVar11,uVar7,0);
        fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          lVar11,uVar7,0);
        fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
      }
      lVar8 = lVar8 + -1;
      puVar9[1] = 0;
      lVar11 = lVar11 + 1;
      puVar9 = puVar9 + 2;
      *puVar9 = 0;
    } while (lVar8 != 0);
  }
  uVar3 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    puVar9 = auStack_104 + 2;
    uVar12 = uVar10;
    do {
      uVar12 = uVar12 + 1;
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar12,uVar7,0);
        fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar12,uVar7,0);
        fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
      }
      uVar3 = uVar3 - 1;
      puVar9[1] = 0;
      puVar9 = puVar9 + 2;
      *puVar9 = 0;
    } while (uVar3 != 0);
  }
  if ((int)lVar6 != 0) {
    lVar8 = 5;
    do {
      uVar3 = (ulonglong)uStack_180;
      uVar7 = uVar7 + 1;
      if ((int)uStack_180 < 0) {
        do {
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                              uVar3 + uVar10,uVar7,0);
            fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                              uVar3 + uVar10,uVar7,0);
            fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
          }
          iVar5 = (int)((lVar8 + uVar3 & 0xffffffff) << 3);
          *(undefined4 *)((int)auStack_104 + iVar5 + 4) = 0;
          uVar3 = uVar3 + 1;
          *(undefined4 *)((int)auStack_104 + iVar5 + 8) = 0;
        } while ((longlong)uVar3 < 0);
      }
      lVar11 = 0;
      if (-1 < (int)uVar4) {
        do {
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                              lVar11 + uVar10,uVar7,0);
            fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_0000008c,8,
                              lVar11 + uVar10,uVar7,0);
            fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000c4);
          }
          iVar5 = (int)((lVar8 + lVar11 & 0xffffffffU) << 3);
          *(undefined4 *)((int)auStack_104 + iVar5 + 4) = 0;
          lVar11 = lVar11 + 1;
          *(undefined4 *)((int)auStack_104 + iVar5 + 8) = 0;
        } while ((int)lVar11 <= (int)uVar4);
      }
      lVar6 = lVar6 + -1;
      lVar8 = lVar8 + 5;
    } while (lVar6 != 0);
  }
  iStack_1a0 = 0;
  uStack_19c = 0;
  uVar7 = (ulonglong)uStack_16c;
  uVar3 = (ulonglong)in_stack_000000a4;
  if ((int)uStack_16c < 0) {
    lVar6 = ((ulonglong)uStack_16c & 0x1fffffff) * 8 - uVar7;
    do {
      uVar1 = uStack0000001c;
      uVar4 = *(uint *)(param_1 + 0x564);
      uVar10 = (ulonglong)uStack00000034;
      uVar12 = (ulonglong)uStack_178;
      if ((int)uStack_178 < 0) {
        do {
          iVar5 = *(int *)((int)((lVar6 + uVar12 & 0xffffffff) << 2) + -0x7ce76038);
          (**(code **)(param_1 + 0x9b8))
                    ((uVar10 - uVar4) + -1,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,
                     uVar12,uVar7,*(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618))
          ;
          fn_82E9AC18(param_1,uVar1,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000c4);
          uStack_19c = auStack_160[iVar5 * 2] | uStack_19c;
          iVar2 = fn_82E9B140(param_1,uVar12 + uVar3,uVar7 + in_stack_000000ac,uStack_19c,0);
          iStack_1a0 = iVar2 + iStack_1a0;
          if (in_stack_000000cc != 0) {
            iStack_1a0 = iStack_1a0 + 1;
          }
          iVar5 = *(int *)(in_stack_000000c4 + 0x6c) * iStack_1a0 + auStack_160[iVar5 * 2 + 1];
          if (iVar5 < in_stack_0000005c) {
            uStack_188 = (undefined4)uVar12;
            in_stack_0000005c = iVar5;
            uStack_184 = (int)uVar7;
          }
          uVar12 = uVar12 + 1;
        } while ((longlong)uVar12 < 0);
      }
      uVar1 = uStack0000001c;
      uVar4 = *(uint *)(param_1 + 0x564);
      lVar8 = 0;
      uVar10 = (ulonglong)uStack00000034;
      if (-1 < iStack_174) {
        do {
          iVar5 = *(int *)((int)((lVar6 + lVar8 & 0xffffffffU) << 2) + -0x7ce76038);
          (**(code **)(param_1 + 0x9b8))
                    (uVar10 - uVar4,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar8,
                     uVar7,*(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,uVar1,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000c4);
          uStack_19c = auStack_160[iVar5 * 2] | uStack_19c;
          iVar2 = fn_82E9B140(param_1,lVar8 + uVar3,uVar7 + in_stack_000000ac,uStack_19c,0);
          iStack_1a0 = iVar2 + iStack_1a0;
          if (in_stack_000000cc != 0) {
            iStack_1a0 = iStack_1a0 + 1;
          }
          iVar5 = *(int *)(in_stack_000000c4 + 0x6c) * iStack_1a0 + auStack_160[iVar5 * 2 + 1];
          if (iVar5 < in_stack_0000005c) {
            uStack_188 = (undefined4)lVar8;
            in_stack_0000005c = iVar5;
            uStack_184 = (int)uVar7;
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 <= iStack_174);
      }
      lVar6 = lVar6 + 7;
      uVar7 = uVar7 + 1;
    } while (lVar6 < 0);
  }
  uVar1 = uStack0000001c;
  uVar10 = (ulonglong)uStack_178;
  uVar7 = (ulonglong)uStack00000034;
  if ((int)uStack_178 < 0) {
    piVar13 = (int *)(uStack_178 * 4 + -0x7ce76038);
    do {
      iVar5 = *piVar13;
      (**(code **)(param_1 + 0x9b8))
                (uVar7 - 1,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,uVar10,0,
                 *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
      fn_82E9AC18(param_1,uVar1,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000c4);
      uStack_19c = auStack_160[iVar5 * 2] | uStack_19c;
      iVar2 = fn_82E9B140(param_1,uVar10 + uVar3,in_stack_000000ac,uStack_19c,0);
      iStack_1a0 = iVar2 + iStack_1a0;
      if (in_stack_000000cc != 0) {
        iStack_1a0 = iStack_1a0 + 1;
      }
      iVar5 = *(int *)(in_stack_000000c4 + 0x6c) * iStack_1a0 + auStack_160[iVar5 * 2 + 1];
      if (iVar5 < in_stack_0000005c) {
        uStack_188 = (undefined4)uVar10;
        uStack_184 = 0;
        in_stack_0000005c = iVar5;
      }
      piVar13 = piVar13 + 1;
      uVar10 = uVar10 + 1;
    } while ((int)piVar13 < -0x7ce76038);
  }
  uVar4 = uStack00000034;
  uVar1 = uStack0000001c;
  lVar6 = 1;
  if (iStack_174 != 0) {
    piVar13 = (int *)0x83189fcc;
    do {
      iVar5 = *piVar13;
      (**(code **)(param_1 + 0x9b8))
                (uVar4,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar6,0,
                 *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
      fn_82E9AC18(param_1,uVar1,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000c4);
      uStack_19c = auStack_160[iVar5 * 2] | uStack_19c;
      iVar2 = fn_82E9B140(param_1,lVar6 + uVar3,in_stack_000000ac,uStack_19c,0);
      iStack_1a0 = iVar2 + iStack_1a0;
      if (in_stack_000000cc != 0) {
        iStack_1a0 = iStack_1a0 + 1;
      }
      iVar5 = *(int *)(in_stack_000000c4 + 0x6c) * iStack_1a0 + auStack_160[iVar5 * 2 + 1];
      if (iVar5 < in_stack_0000005c) {
        uStack_188 = (undefined4)lVar6;
        uStack_184 = 0;
        in_stack_0000005c = iVar5;
      }
      lVar6 = lVar6 + 1;
      piVar13 = piVar13 + 1;
    } while ((int)lVar6 <= iStack_174);
  }
  lVar6 = 1;
  if (iStack_170 != 0) {
    lVar8 = 7;
    do {
      uVar10 = (ulonglong)uStack_178;
      if ((int)uStack_178 < 0) {
        do {
          iVar5 = *(int *)((int)((lVar8 + uVar10 & 0xffffffff) << 2) + -0x7ce76038);
          (**(code **)(param_1 + 0x9b8))
                    (uVar7 - 1,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,uVar10,lVar6,
                     *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,uVar1,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000c4);
          uStack_19c = auStack_160[iVar5 * 2] | uStack_19c;
          iVar2 = fn_82E9B140(param_1,uVar10 + uVar3,lVar6 + (ulonglong)in_stack_000000ac,
                                uStack_19c,0);
          iStack_1a0 = iVar2 + iStack_1a0;
          if (in_stack_000000cc != 0) {
            iStack_1a0 = iStack_1a0 + 1;
          }
          iVar5 = *(int *)(in_stack_000000c4 + 0x6c) * iStack_1a0 + auStack_160[iVar5 * 2 + 1];
          if (iVar5 < in_stack_0000005c) {
            uStack_188 = (undefined4)uVar10;
            in_stack_0000005c = iVar5;
            uStack_184 = (int)lVar6;
          }
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < 0);
      }
      lVar11 = 0;
      if (-1 < iStack_174) {
        do {
          iVar5 = *(int *)((int)((lVar8 + lVar11 & 0xffffffffU) << 2) + -0x7ce76038);
          (**(code **)(param_1 + 0x9b8))
                    (uVar4,*(undefined4 *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar11,lVar6,
                     *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,uVar1,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000c4);
          uStack_19c = auStack_160[iVar5 * 2] | uStack_19c;
          iVar2 = fn_82E9B140(param_1,lVar11 + uVar3,lVar6 + (ulonglong)in_stack_000000ac,
                                uStack_19c,0);
          iStack_1a0 = iVar2 + iStack_1a0;
          if (in_stack_000000cc != 0) {
            iStack_1a0 = iStack_1a0 + 1;
          }
          iVar5 = *(int *)(in_stack_000000c4 + 0x6c) * iStack_1a0 + auStack_160[iVar5 * 2 + 1];
          if (iVar5 < in_stack_0000005c) {
            uStack_188 = (undefined4)lVar11;
            in_stack_0000005c = iVar5;
            uStack_184 = (int)lVar6;
          }
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 <= iStack_174);
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 7;
    } while ((int)lVar6 <= iStack_170);
  }
  *in_stack_000000f4 = uStack_188;
  *in_stack_000000fc = uStack_184;
  *in_stack_00000104 = in_stack_0000005c;
  return;
}

