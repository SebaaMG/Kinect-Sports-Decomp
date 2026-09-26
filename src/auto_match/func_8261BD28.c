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
extern int fn_82522ED8();
extern int fn_825A23C0();
extern int fn_825A2410();
extern int fn_8261BE28();
extern unsigned int lbl_832749B4;
extern unsigned int lbl_83274A04;


void fn_8261BD28(uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  short *psVar8;
  int aiStack_50 [20];
  
  if (lbl_83274A04 != 0) {
    aiStack_50[0] = fn_825A23C0(4,4);
    iVar7 = 0;
    if (0 < lbl_83274A04) {
      psVar8 = &lbl_832749B4;
      do {
        iVar5 = 0;
        lVar6 = 10;
        do {
          if (*psVar8 != 0) {
            puVar4 = param_1 + 2;
            uVar3 = 0;
            if (*param_1 != 0) {
              do {
                if (*(short *)((int)puVar4 + 6) == *psVar8) goto LAB_8261bdc0;
                uVar3 = uVar3 + 1;
                puVar4 = (uint *)(*puVar4 + (int)puVar4);
              } while (uVar3 < *param_1);
            }
            puVar4 = (uint *)0x0;
LAB_8261bdc0:
            if (puVar4 != (uint *)0x0) {
              puVar1 = (undefined4 *)fn_825A2410(aiStack_50);
              iVar5 = iVar5 + 1;
              *puVar1 = puVar4;
            }
          }
          lVar6 = lVar6 + -1;
          psVar8 = psVar8 + 1;
        } while (lVar6 != 0);
        iVar2 = aiStack_50[0];
        if (1 < iVar5) {
          iVar2 = fn_8261BE28();
        }
        iVar7 = iVar7 + 1;
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 4);
      } while (iVar7 < lbl_83274A04);
    }
    fn_82522ED8();
  }
  return;
}

