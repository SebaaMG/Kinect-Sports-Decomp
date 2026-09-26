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
extern int fn_82A58270();
extern int fn_82A75390();


int fn_82A58F78(undefined2 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar11;
  ulonglong uVar10;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar4 = fn_82A75390(*param_1);
  iVar8 = *param_2;
  iVar1 = param_2[1];
  iVar5 = fn_82A58270(uVar4,iVar1,iVar8,*(undefined4 *)(param_1 + 2),param_1[1]);
  uVar7 = 0xffffffffffffffff;
  if ((iVar8 == 0) || (iVar1 != 0)) {
    bVar3 = false;
    uVar6 = ((ulonglong)*(uint *)(param_1 + 4) & 0x1fffffff) << 3;
  }
  else {
    uVar6 = (ulonglong)(uint)param_2[5];
    bVar3 = true;
  }
  uVar14 = 0;
  if ((uVar4 & 0xffffffff) == 2) {
    uVar14 = 8;
  }
  else if ((uVar4 & 0xffffffff) == 3) {
    uVar14 = 0x10;
  }
  if (iVar5 != 0) {
    uVar9 = 0;
    if (*(uint *)(iVar5 + 8) != 0) {
      iVar8 = 0;
      uVar12 = 0xffffffff;
      do {
        puVar11 = (uint *)(iVar8 + *(int *)(iVar5 + 0xc));
        uVar13 = uVar12;
        if (((*(uint *)((int)puVar11 + 0x15) & uVar14) != 0) &&
           ((ushort)*(byte *)(puVar11 + 5) == param_1[7])) {
          if (bVar3) {
            uVar2 = puVar11[4];
          }
          else {
            uVar2 = *puVar11;
          }
          uVar10 = uVar6 - uVar2;
          uVar4 = (ulonglong)((int)uVar10 >> 0x1f);
          uVar4 = (uVar10 ^ uVar4) - uVar4;
          uVar13 = uVar9;
          if (uVar4 == 0) break;
          uVar13 = uVar12;
          if (((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff)) && ((!bVar3 || (uVar6 <= uVar2)))) {
            uVar7 = uVar4;
            uVar13 = uVar9;
          }
        }
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0x19;
        uVar12 = uVar13;
      } while (uVar9 < *(uint *)(iVar5 + 8));
      if (uVar13 != 0xffffffff) {
        return uVar13 * 0x19 + *(int *)(iVar5 + 0xc);
      }
    }
  }
  return 0;
}

