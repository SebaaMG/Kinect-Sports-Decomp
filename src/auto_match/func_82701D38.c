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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826BD928();
extern int fn_826FD908();
extern int fn_826FD968();
extern int fn_826FE888();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


void fn_82701D38(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int aiStack_90 [4];
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar5 = (**(code **)(*(int *)(param_2 + 0x68) + 8))(param_2 + 0x68);
  if ((iVar5 != 2) || (iVar5 = fn_826BD928(param_2 + 0x68), *(int *)(iVar5 + 0x1a8) < 0)) {
    uVar10 = 0;
    if (param_1[0x2a4] != 0) {
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = (**(code **)(*param_1 + 0xd8))(param_1);
      iStack_7c = 0;
      iStack_80 = 0;
      uStack_78 = 0;
      uStack_74 = (**(code **)(*param_1 + 0xd8))(param_1);
      iVar5 = param_2;
      do {
        iVar13 = iVar5;
        aiStack_90[0] = iVar13;
        fn_826FD968(&uStack_70,aiStack_90);
        uVar4 = uStack_70;
        iVar5 = *(int *)(iVar13 + 0x20);
      } while (*(int *)(iVar13 + 0x20) != 0);
      uVar1 = param_1[0x2a4];
      uVar11 = (ulonglong)uStack_70;
      iVar5 = 0;
      if (uVar1 != 0) {
        iVar12 = 0;
        do {
          if (*(int *)(iVar12 + param_1[0x2a3]) == param_2) {
            fn_8267BE38(iVar5);
            fn_8267BE38(uVar11);
            return;
          }
          fn_826FD908(&iStack_80,0);
          iVar5 = *(int *)(iVar12 + param_1[0x2a3]);
          iVar8 = 0;
          while (iVar2 = iVar5, iVar2 != 0) {
            aiStack_90[0] = iVar2;
            fn_826FD968(&iStack_80,aiStack_90);
            iVar8 = iVar2;
            iVar5 = *(int *)(iVar2 + 0x20);
          }
          iVar5 = iStack_80;
          if (iVar8 == iVar13) {
            bVar3 = false;
            uVar9 = (ulonglong)uStack_6c - 1;
            iVar8 = iStack_7c + -1;
            if (-1 < (longlong)uVar9) {
              lVar7 = (uVar9 & 0x3fffffff) * 4 + uVar11;
              piVar6 = (int *)(iVar8 * 4 + iStack_80);
              while (-1 < iVar8) {
                if (*(int *)lVar7 != *piVar6) {
                  if (*(int *)(*(int *)((int)((uVar9 & 0xffffffff) << 2) + uVar4) + 0x14) <
                      *(int *)(*(int *)(iVar8 * 4 + iStack_80) + 0x14)) {
                    bVar3 = true;
                  }
                  break;
                }
                uVar9 = uVar9 - 1;
                lVar7 = lVar7 + -4;
                iVar8 = iVar8 + -1;
                piVar6 = piVar6 + -1;
                if ((longlong)uVar9 < 0) break;
              }
            }
            if (bVar3) break;
          }
          else if (*(int *)(iVar13 + 0x1a8) < *(int *)(iVar8 + 0x1a8)) break;
          uVar10 = uVar10 + 1;
          iVar12 = iVar12 + 4;
        } while ((uVar10 & 0xffffffff) < (ulonglong)uVar1);
      }
      fn_8267BE38(iVar5);
      fn_8267BE38(uVar11);
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    aiStack_90[0] = param_2;
    fn_826FE888(param_1 + 0x2a3,uVar10,aiStack_90);
    fn_8267C498(param_2);
  }
  return;
}

