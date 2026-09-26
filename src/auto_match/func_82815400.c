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
extern int fn_828142D8();
extern int fn_82815360();
extern int fn_8281FDF0();
extern int fn_82F68CC0();


undefined8 fn_82815400(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar5;
  undefined8 uVar4;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int aiStack_60 [24];
  
  cVar5 = fn_8281FDF0(param_1,0xffffffff8201e0c4);
  if (cVar5 != '\0') {
    uVar10 = 0;
    *param_3 = 0;
    uVar6 = 0;
    uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x28);
    if (uVar1 != 0) {
      iVar7 = 0;
      do {
        if (*(int *)(iVar7 + *(int *)(param_1 + 0x44) + 4) == param_2) {
          iVar7 = *(int *)(uVar6 * 0xe + *(int *)(param_1 + 0x44));
          if (iVar7 == -1) {
            return 0;
          }
          iVar11 = 0;
          do {
            piVar8 = (int *)(*(int *)(param_1 + 0x44) + iVar11);
            if ((*(char *)(piVar8 + 3) == cVar5) && (*piVar8 == iVar7)) {
              iVar9 = *(int *)(param_1 + 0x44) + iVar11;
              uVar2 = *(undefined4 *)(iVar9 + 8);
              uVar3 = *(undefined4 *)(iVar9 + 4);
              fn_828142D8(0xffffffff8201e0d0,aiStack_60);
              if (aiStack_60[0] != 0) {
                uVar4 = (**(code **)(aiStack_60[0] + 0xc))
                                  (0,uVar2,1 << (*(byte *)(*(int *)(param_1 + 0x44) + iVar11 + 0xd)
                                                & 0x3f),0);
                *param_3 = (int)uVar4;
                fn_82F68CC0(uVar4,uVar3,uVar2);
                uVar4 = fn_82815360(param_1,*(undefined4 *)(param_1 + 0x58),
                                      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34),
                                      *(undefined4 *)(param_1 + 0x5c),*param_3,uVar10);
                fn_82815360(uVar4,*(undefined4 *)(param_1 + 0x60),
                              *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44),
                              *(undefined4 *)(param_1 + 100),*param_3);
              }
            }
            uVar10 = uVar10 + 1;
            iVar11 = iVar11 + 0xe;
          } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(param_1 + 0x1c) + 0x28));
          return 1;
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0xe;
      } while (uVar6 < uVar1);
    }
  }
  return 0;
}

