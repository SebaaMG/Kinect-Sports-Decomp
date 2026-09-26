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


undefined8 fn_829A7C60(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [14];
  
  uVar5 = 0;
  uVar7 = *(uint *)(param_1[0x41] + 0xc);
  if (uVar7 != 0) {
    iVar6 = 0;
    do {
      if ((**(uint **)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar6) * 4 + param_1[5]) &
          0x2000000) == 0) break;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < uVar7);
  }
  if (uVar5 < uVar7) {
    iVar6 = param_1[0x41];
    uVar3 = 0xf;
  }
  else {
    iVar6 = param_1[0x41];
    if (*(ushort *)((int)param_1 + 0xca) < 0x200) {
      bVar2 = false;
      if (*(uint *)(iVar6 + 4) < *(uint *)(iVar6 + 0xc)) {
        uVar3 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_40,4,0,0);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uStack_44 = 0;
        uVar3 = fn_8295D318(param_1,0x4f,auStack_38,1,*(undefined4 *)(param_1[0x41] + 8),0,0,1
                                 );
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iVar6 = param_1[0x41];
        uVar7 = 0;
        if (*(int *)(iVar6 + 0xc) != 0) {
          puVar4 = &uStack_44;
          do {
            uVar7 = uVar7 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = auStack_38[0];
          } while (uVar7 < *(uint *)(iVar6 + 0xc));
        }
        uStack_44 = 0;
        uVar1 = *(undefined4 *)(param_1[0x41] + 0xc);
        uVar3 = fn_8295D318(param_1,1,*(undefined4 *)(param_1[0x41] + 0x10),uVar1,auStack_40,0
                                  ,0,uVar1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      else {
        uVar5 = 0;
        if (uVar7 != 0) {
          iVar6 = 0;
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar6) * 4 + param_1[5])
                        + 0x10) == 2) {
              uStack_44 = 0;
              uVar3 = fn_8295D318(param_1,0x4f,*(int *)(param_1[0x41] + 0x10) + iVar6,1,
                                        *(int *)(param_1[0x41] + 8) + iVar6,0,0,1);
            }
            else {
              if (!bVar2) {
                uVar3 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_40,4,0,0);
                if ((int)uVar3 < 0) {
                  return uVar3;
                }
                bVar2 = true;
              }
              uStack_44 = 0;
              uVar3 = fn_8295D318(param_1,0x4f,auStack_38,1,
                                        *(int *)(param_1[0x41] + 8) + iVar6,0,0,1);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              uStack_44 = 0;
              uVar3 = fn_8295D318(param_1,1,*(int *)(param_1[0x41] + 0x10) + iVar6,1,
                                        auStack_38,0,0,1);
            }
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (uVar5 < *(uint *)(param_1[0x41] + 0xc));
        }
      }
      return 0;
    }
    uVar3 = 0x4f;
  }
  uVar3 = fn_8295FA70(param_1,uVar3,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 8),
                            *(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 4),0,0);
  return uVar3;
}

