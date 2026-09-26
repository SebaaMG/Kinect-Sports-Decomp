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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_8295D318();
extern int fn_8295FA70();
extern unsigned int uStack_44;


undefined8 fn_829A7920(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [14];
  
  uVar7 = 0;
  uVar9 = *(uint *)(param_1[0x41] + 0xc);
  if (uVar9 != 0) {
    iVar8 = 0;
    do {
      if ((**(uint **)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar8) * 4 + param_1[5]) &
          0x2000000) == 0) break;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < uVar9);
  }
  if (uVar7 < uVar9) {
    iVar8 = param_1[0x41];
    uVar5 = 0xe;
  }
  else {
    iVar8 = param_1[0x41];
    if (*(ushort *)((int)param_1 + 0xca) < 0x200) {
      bVar4 = false;
      if (*(uint *)(iVar8 + 4) < *(uint *)(iVar8 + 0xc)) {
        uVar5 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_40,4,0,0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uStack_44 = 0;
        uVar5 = fn_8295D318(param_1,0x4e,auStack_38,1,*(undefined4 *)(param_1[0x41] + 8),0,0,1
                                 );
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        iVar8 = param_1[0x41];
        uVar9 = 0;
        if (*(int *)(iVar8 + 0xc) != 0) {
          puVar6 = &uStack_44;
          do {
            uVar9 = uVar9 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = auStack_38[0];
          } while (uVar9 < *(uint *)(iVar8 + 0xc));
        }
        uStack_44 = 0;
        uVar1 = *(undefined4 *)(param_1[0x41] + 0xc);
        uVar5 = fn_8295D318(param_1,1,*(undefined4 *)(param_1[0x41] + 0x10),uVar1,auStack_40,0
                                  ,0,uVar1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
      }
      else {
        uVar7 = 0;
        if (uVar9 != 0) {
          iVar8 = 0;
          do {
            puVar3 = *(uint **)(*(int *)(*(int *)(param_1[0x41] + 8) + iVar8) * 4 + param_1[5]);
            iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar8) * 4 +
                                     param_1[5]) + 0x10);
            if ((((iVar2 == 0) && ((*puVar3 & 2) != 0)) || (iVar2 == 2)) ||
               (((iVar2 == 3 && (uVar9 = *puVar3, (uVar9 & 4) != 0)) && ((uVar9 & 8) != 0)))) {
              uStack_44 = 0;
              uVar5 = fn_8295D318(param_1,0x4e,*(int *)(param_1[0x41] + 0x10) + iVar8,1,
                                        *(int *)(param_1[0x41] + 8) + iVar8,0,0,1);
            }
            else {
              if (!bVar4) {
                uVar5 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_40,4,0,0);
                if ((int)uVar5 < 0) {
                  return uVar5;
                }
                bVar4 = true;
              }
              uStack_44 = 0;
              uVar5 = fn_8295D318(param_1,0x4e,auStack_38,1,
                                        *(int *)(param_1[0x41] + 8) + iVar8,0,0,1);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
              uStack_44 = 0;
              uVar5 = fn_8295D318(param_1,1,*(int *)(param_1[0x41] + 0x10) + iVar8,1,
                                        auStack_38,0,0,1);
            }
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar7 < *(uint *)(param_1[0x41] + 0xc));
        }
      }
      return 0;
    }
    uVar5 = 0x4e;
  }
  uVar5 = fn_8295FA70(param_1,uVar5,*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 8),
                            *(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 4),0,0);
  return uVar5;
}

