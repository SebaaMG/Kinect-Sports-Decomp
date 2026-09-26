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
extern unsigned int *auStack_50;
extern int fn_82E50D88();
extern int fn_82E50FA0();
extern int fn_82E64450();
extern int fn_82E644B8();
extern int fn_82E72FC0();
extern int fn_82E7E7E0();


undefined8 fn_82E64C30(int param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint auStack_50 [20];
  
  fn_82E50D88(param_1 + 0xc);
  if ((param_3 & 0xffffffff) == 0) {
    uVar9 = 0xffffffff80070057;
  }
  else if (*(int *)(param_1 + 0xb8) == -1) {
    uVar9 = 0xffffffff80004005;
  }
  else {
    lVar4 = fn_82E644B8(param_1 + 0x4c,*(int *)(param_1 + 0xb8),auStack_50);
    uVar7 = -(uint)(lVar4 != 0) & auStack_50[0];
    if (uVar7 == 0) {
LAB_82e64ca0:
      uVar9 = 0xffffffff80004003;
    }
    else {
      uVar8 = 0;
      if (*(int *)(uVar7 + 0x6c) != 0) {
        do {
          lVar4 = fn_82E64450(uVar7 + 4,uVar8,auStack_50);
          pbVar10 = (byte *)(-(uint)(lVar4 != 0) & auStack_50[0]);
          if (pbVar10 == (byte *)0x0) goto LAB_82e64ca0;
          pbVar6 = pbVar10;
          pbVar5 = param_2;
          do {
            bVar1 = *pbVar6;
            bVar2 = *pbVar5;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar6 != pbVar10 + 0x10);
          if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
             (*(int *)(pbVar10 + 0x10) == *(int *)(param_2 + 0x10))) {
            fn_82E7E7E0(param_3);
            uVar9 = fn_82E72FC0(param_3,pbVar10 + 0x18,*(undefined2 *)(pbVar10 + 0x18));
            goto LAB_82e64d8c;
          }
          uVar8 = uVar8 + 1;
        } while ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(uVar7 + 0x6c));
      }
      fn_82E7E7E0(param_3);
      piVar3 = *(int **)(param_1 + 0x48);
      uVar9 = 1;
      if (piVar3 != (int *)0x0) {
        uVar9 = (**(code **)(*piVar3 + 0x14))(piVar3,param_2,param_3);
      }
    }
  }
LAB_82e64d8c:
  fn_82E50FA0(param_1 + 0xc);
  return uVar9;
}

