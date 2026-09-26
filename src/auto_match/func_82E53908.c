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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E531C8();
extern int fn_82F68CC0();
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8 fn_82E53908(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  uint auStack_80 [4];
  uint uStack_70;
  ushort uStack_6c;
  ushort uStack_6a;
  undefined8 uStack_68;
  
  uVar7 = 0;
  if (param_2 == (int *)0x0) {
    uVar7 = 0xffffffff80004003;
  }
  else if (*(int *)(param_1 + 0x108) != 0) {
    uVar8 = 0;
    uVar5 = 0;
    do {
      lVar2 = fn_82E531C8(param_1 + 0xa0,uVar8,auStack_80);
      uVar4 = -(uint)(lVar2 != 0) & auStack_80[0];
      if (uVar4 == 0) {
        return 0xffffffff8000ffff;
      }
      uVar4 = *(int *)(uVar4 + 0x14) + 0x16 + uVar5;
      if (uVar4 < uVar5) {
        return 0xffffffff8000ffff;
      }
      uVar8 = uVar8 + 1;
      uVar5 = uVar4;
    } while ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x108));
    iVar3 = fn_82E50BE8(uVar4,0,0,0,0);
    if (iVar3 == 0) {
      uVar7 = 0xffffffff8007000e;
    }
    else {
      uVar8 = 0;
      if (*(int *)(param_1 + 0x108) != 0) {
        iVar9 = iVar3;
        do {
          lVar2 = fn_82E531C8(param_1 + 0xa0,uVar8,auStack_80);
          pbVar6 = (byte *)(-(uint)(lVar2 != 0) & auStack_80[0]);
          if (pbVar6 == (byte *)0x0) {
            uVar7 = 0xffffffff8007000e;
            goto LAB_82e53ae0;
          }
          if (uVar5 < 0x16) {
LAB_82e53af4:
            uVar7 = 0xffffffff8000ffff;
            goto LAB_82e53ae0;
          }
          uStack_70 = (uint)pbVar6[3] << 0x18 | (uint)pbVar6[2] << 0x10 | (uint)pbVar6[1] << 8 |
                      (uint)*pbVar6;
          uStack_68 = *(undefined8 *)(pbVar6 + 8);
          uStack_6c = *(ushort *)(pbVar6 + 4) << 8 | *(ushort *)(pbVar6 + 4) >> 8;
          uStack_6a = *(ushort *)(pbVar6 + 6) << 8 | *(ushort *)(pbVar6 + 6) >> 8;
          fn_82F68CC0(iVar9,&uStack_70,0x10);
          *(ushort *)(iVar9 + 0x10) =
               *(ushort *)(pbVar6 + 0x10) << 8 | *(ushort *)(pbVar6 + 0x10) >> 8;
          *(uint *)(iVar9 + 0x12) =
               (uint)pbVar6[0x17] << 0x18 | (uint)pbVar6[0x16] << 0x10 | (uint)pbVar6[0x15] << 8 |
               (uint)pbVar6[0x14];
          if (uVar5 - 0x16 < *(uint *)(pbVar6 + 0x14)) goto LAB_82e53af4;
          if (*(uint *)(pbVar6 + 0x14) != 0) {
            fn_82F68CC0(iVar9 + 0x16,*(undefined4 *)(pbVar6 + 0x18));
          }
          iVar1 = *(int *)(pbVar6 + 0x14);
          uVar8 = uVar8 + 1;
          iVar9 = iVar1 + iVar9 + 0x16;
          uVar5 = (uVar5 - 0x16) - iVar1;
        } while ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x108));
      }
      uVar7 = (**(code **)(*param_2 + 0x68))(param_2,0xffffffff8214c730,iVar3,uVar4);
LAB_82e53ae0:
      fn_82E4FE40(iVar3);
    }
  }
  return uVar7;
}

