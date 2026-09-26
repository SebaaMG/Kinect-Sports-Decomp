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
extern int fn_8301E600();
extern int fn_8301EE18();
extern unsigned int lbl_82014898;
extern unsigned int lbl_821AAD20;


double fn_82FF2658(uint *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = (ulonglong)*(byte *)((int)param_1 + 6);
  uVar3 = 0;
  dVar8 = (double)lbl_82014898;
  if (uVar1 != 0) {
    lVar2 = -0x7cd9b9d8;
    dVar9 = dVar8;
    do {
      dVar8 = dVar9;
      if ((uVar1 & 1) != 0) {
        if ((ulonglong)(uint)((int)((uint)*(byte *)((int)param_1 + 7) << 0x1b) >> 0x1b) ==
            (uVar3 & 0xffffffff)) {
          return (double)lbl_821AAD20;
        }
        if (*(short *)(param_1 + 1) == 0) {
          dVar6 = (double)fn_8301E600(lVar2,0xffffffff831bc80c);
          dVar7 = (double)fn_8301EE18(uVar3);
          dVar8 = (double)(float)(dVar6 / dVar7);
          if ((float)(dVar9 - (double)(float)(dVar6 / dVar7)) < 0.0) {
            dVar8 = dVar9;
          }
        }
        else {
          uVar4 = 0;
          lVar5 = 0;
          do {
            dVar6 = (double)fn_8301E600(lVar2,lVar5 + (ulonglong)*param_1);
            dVar7 = (double)fn_8301EE18(uVar3);
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 0x18;
            dVar8 = (double)(float)(dVar6 / dVar7);
            if ((float)(dVar9 - (double)(float)(dVar6 / dVar7)) < 0.0) {
              dVar8 = dVar9;
            }
            dVar9 = dVar8;
          } while (uVar4 < *(ushort *)(param_1 + 1));
        }
      }
      uVar1 = uVar1 >> 1;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x90;
      dVar9 = dVar8;
    } while (uVar1 != 0);
  }
  return dVar8;
}

