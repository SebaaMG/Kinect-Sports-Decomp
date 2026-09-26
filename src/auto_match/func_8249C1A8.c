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
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_82381BC0();
extern int fn_8249ABC0();
extern int fn_825200A8();
extern unsigned int lbl_832765BC;


uint fn_8249C1A8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int aiStack_60 [24];
  
  uVar7 = 0;
  aiStack_60[0] = **(int **)(param_1 + 0x38);
  if ((int *)aiStack_60[0] != *(int **)(param_1 + 0x38)) {
    do {
      uVar1 = *(uint *)(aiStack_60[0] + 0xc);
      iVar8 = 0;
      iVar4 = 0;
      piVar9 = (int *)(param_1 + 0x14);
      do {
        if ((*(uint *)(*piVar9 + 0x24) & uVar1) != 0) {
          if ((uVar1 & *(uint *)(param_1 + 0x6c)) == 0) {
            fn_8225F160();
            iVar3 = fn_8225F3C0();
            if ((((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) == 1)) ||
                ((uVar1 & *(uint *)(param_1 + 0x6c)) != 0)) ||
               ((iVar3 != 1 || (iVar4 != *(int *)(param_1 + 0x20))))) {
              iVar8 = iVar8 + 1;
              goto LAB_8249c24c;
            }
          }
          iVar8 = 2;
          break;
        }
LAB_8249c24c:
        iVar4 = iVar4 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar4 < 2);
      fn_8225F160();
      iVar4 = fn_8225F3C0();
      if (1 < iVar4) {
        iVar3 = fn_8249ABC0();
        iVar3 = *(int *)(iVar3 + 0x70);
        if ((iVar3 != 0) && (*(int *)(*(int *)(iVar3 + 0x844) + 0x358) == 0)) {
          iVar5 = fn_825200A8(0xffffffff8326597c);
          if (iVar5 != 0) goto LAB_8249c324;
          uVar2 = *(uint *)(iVar3 + 0xd54);
          if ((ulonglong)uVar2 != 0xfffffffffffffff0) {
            if (*(int *)(uVar2 + 0x18) == 0) {
              iVar3 = *(int *)(uVar2 + 0x14);
              if (iVar3 != 0) {
                uVar6 = (uint)(*(int *)(iVar3 + 8) == 9);
                if (*(int *)(iVar3 + 0x2c) != 0) {
                  uVar6 = (uint)LZCOUNT(*(undefined4 *)(*(int *)(iVar3 + 0x2c) + 0x2c)) >> 5 & uVar6
                  ;
                }
                if (uVar6 != 0) goto LAB_8249c324;
              }
              if (*(int *)(uVar2 + 0x14) != 0) goto LAB_8249c320;
            }
            if (lbl_832765BC != 0) goto LAB_8249c324;
          }
        }
LAB_8249c320:
        iVar4 = 1;
      }
LAB_8249c324:
      if (2 - iVar8 < iVar4) {
        uVar7 = uVar1 | uVar7;
      }
      fn_82381BC0(aiStack_60);
    } while (aiStack_60[0] != *(int *)(param_1 + 0x38));
  }
  return uVar7;
}

