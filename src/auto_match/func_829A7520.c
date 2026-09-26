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
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_8295D318();
extern unsigned int uStack_64;


undefined8 fn_829A7520(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_64;
  undefined1 auStack_60 [4];
  undefined4 auStack_5c [23];
  
  bVar3 = false;
  if (*(uint *)(param_1[0x41] + 4) < *(uint *)(param_1[0x41] + 0xc)) {
    uVar4 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_60,4,0,0);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uStack_64 = 0;
    uVar4 = fn_8295D318(param_1,0x4e,auStack_5c,1,*(undefined4 *)(param_1[0x41] + 8),0,0,1);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    iVar1 = param_1[0x41];
    uVar7 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      puVar6 = &uStack_64;
      do {
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = auStack_5c[0];
      } while (uVar7 < *(uint *)(iVar1 + 0xc));
    }
    uStack_64 = 0;
    uVar2 = *(undefined4 *)(param_1[0x41] + 0xc);
    uVar4 = fn_8295D318(param_1,1,*(undefined4 *)(param_1[0x41] + 0x10),uVar2,auStack_60,0,0,
                              uVar2);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
  }
  else {
    uVar7 = 0;
    do {
      iVar1 = param_1[0x41];
      uVar9 = 0;
      uVar5 = *(uint *)(iVar1 + 0xc);
      if (uVar5 != 0) {
        iVar12 = 0;
        uVar10 = 1;
        uVar11 = 2;
        do {
          piVar8 = (int *)(*(int *)(iVar1 + 0x10) + iVar12);
          iVar1 = *(int *)(*(int *)(*piVar8 * 4 + param_1[5]) + 0x10);
          if ((iVar1 == 1) && (uVar11 < uVar5)) {
            if (uVar7 == 1) {
              uStack_64 = 0;
              uVar4 = fn_8295D318(param_1,0x4e,*(int *)(param_1[0x41] + 0x10) + iVar12,1,
                                        *(int *)(param_1[0x41] + 8) + iVar12,0,0,1);
LAB_829a76c4:
              if ((int)uVar4 < 0) {
                return uVar4;
              }
            }
LAB_829a76cc:
            uVar9 = uVar9 + 1;
            uVar11 = uVar11 + 1;
            uVar10 = uVar10 + 1;
            iVar12 = iVar12 + 4;
          }
          else {
            if (uVar5 <= uVar10) {
              if (uVar7 == 0) {
                if (!bVar3) {
                  uVar4 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_60,4,0,0);
                  if ((int)uVar4 < 0) {
                    return uVar4;
                  }
                  bVar3 = true;
                }
                uStack_64 = 0;
                uVar4 = fn_8295D318(param_1,0x4e,auStack_5c,1,
                                          *(int *)(param_1[0x41] + 8) + iVar12,0,0,1);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                uStack_64 = 0;
                uVar4 = fn_8295D318(param_1,1,*(int *)(param_1[0x41] + 0x10) + iVar12,1,
                                          auStack_5c,0,0,1);
                goto LAB_829a76c4;
              }
              goto LAB_829a76cc;
            }
            if ((iVar1 == 0) && (*(int *)(*(int *)(piVar8[1] * 4 + param_1[5]) + 0x10) == 1)) {
              if (uVar7 == 1) {
                uStack_64 = 0;
                uVar4 = fn_8295D318(param_1,0x13,*(int *)(param_1[0x41] + 0x10) + iVar12,2,
                                          *(int *)(param_1[0x41] + 8) + iVar12,0,0,2);
LAB_829a78dc:
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
              }
            }
            else if (uVar7 == 0) {
              if (!bVar3) {
                uVar4 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_60,4,0,0);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                bVar3 = true;
              }
              uStack_64 = 0;
              uVar4 = fn_8295D318(param_1,0x13,auStack_60,2,
                                        *(int *)(param_1[0x41] + 8) + iVar12,0,0,2);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uStack_64 = 0;
              uVar4 = fn_8295D318(param_1,1,*(int *)(param_1[0x41] + 0x10) + iVar12,2,
                                        auStack_60,0,0,2);
              goto LAB_829a78dc;
            }
            iVar12 = iVar12 + 8;
            uVar10 = uVar10 + 2;
            uVar11 = uVar11 + 2;
            uVar9 = uVar9 + 2;
          }
          iVar1 = param_1[0x41];
          uVar5 = *(uint *)(iVar1 + 0xc);
        } while (uVar9 < uVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
  }
  return 0;
}

