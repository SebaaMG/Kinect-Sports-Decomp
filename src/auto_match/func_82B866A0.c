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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack0000002c;
extern unsigned int fStack00000034;
extern unsigned int fStack0000003c;
extern unsigned int fStack00000044;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82AD17B0();
extern int fn_82B86348();
extern unsigned int uStack_6c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong *
fn_82B866A0(double param_1,double param_2,double param_3,double param_4,ulonglong *param_5,
             int param_6,ulonglong param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  float *pfVar5;
  ulonglong uVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fStack0000002c;
  float fStack00000034;
  float fStack0000003c;
  float fStack00000044;
  undefined4 uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  fStack00000034 = (float)param_2;
  fStack0000003c = (float)param_3;
  fStack00000044 = (float)param_4;
  fStack0000002c = (float)param_1;
  fStack_60 = (float)param_1;
  fStack_58 = (float)param_3;
  fStack_5c = (float)param_2;
  fStack_54 = (float)param_4;
  iVar11 = ((uint)((int)fStack00000044 + (int)fStack0000003c + (int)fStack00000034 +
                  (int)fStack0000002c) % 7 + 0xf) * 4;
  iVar1 = *(int *)(iVar11 + param_6);
  do {
    if (iVar1 == 0) {
      iVar2 = fn_82B86348(param_6,param_7,&fStack_60,0);
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar11 + param_6);
      *(int *)(iVar11 + param_6) = iVar2;
      iVar1 = *(int *)(param_6 + 0x58);
      *param_5 = CONCAT44(iVar2,uStack_6c) & 0xffffffff00010000 | 1;
      *(int *)(param_6 + 0x58) = iVar1 + 1;
      return param_5;
    }
    if ((*(uint *)(iVar1 + 0x14) & 0x3fc) == 0) {
      uVar8 = *(uint *)(iVar1 + 8) >> 0xe;
      uVar10 = (ulonglong)uVar8 & 7;
      if ((param_7 & 0xffffffff) <= uVar10) {
        uVar4 = 0;
        uVar12 = 0;
        uVar6 = 0;
        if ((uVar8 & 7) != 0) {
          pfVar5 = (float *)(iVar1 + 0x2c);
          do {
            uVar8 = 0;
            uVar9 = 0;
            pfVar7 = &fStack_60;
            lVar13 = 4;
            do {
              if (*pfVar5 == *pfVar7) {
                uVar4 = (uint)(1 << (uVar8 & 0x3f)) | uVar4;
                uVar12 = uVar12 & ~(ulonglong)(uint)(3 << (uVar9 & 0x3f)) |
                         (ulonglong)(uint)((int)uVar6 << (uVar9 & 0x3f));
              }
              uVar8 = uVar8 + 1;
              pfVar7 = pfVar7 + 1;
              uVar9 = uVar9 + 2;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            uVar6 = uVar6 + 1;
            pfVar5 = pfVar5 + 1;
          } while ((uVar6 & 0xffffffff) < uVar10);
        }
        if (((ulonglong)(uint)(1 << ((uint)param_7 & 0x3f)) - 1 & uVar4 + 1) == 0) {
          puVar3 = (uint *)fn_82AD17B0(param_6);
          uVar8 = *puVar3;
          *param_5 = CONCAT44(puVar3,uStack_6c) & 0xffffffff00010000 | 2;
          *puVar3 = (uint)(((param_7 & 7) << 0x14 | uVar12 & 0xff) << 5) | uVar8 & 0xf1ffe01f;
          return param_5;
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 0x20);
  } while( true );
}

