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
extern U64 storeVectorElementHalfWordIndexed();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82AAC198(int *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int iVar5;
  undefined1 uVar6;
  longlong lVar4;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 in_vs32 [16];
  undefined1 auVar11 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  
  if (0 < (int)param_5) {
    do {
      if (0 < (int)param_4) {
        iVar7 = 0;
        lVar4 = param_2;
        lVar9 = param_4;
        do {
          iVar3 = 0;
          altv300_21(in_vs58,in_vs43);
          altv300_21(in_vs57,in_vs43);
          lVar10 = 2;{ V16 _vt0 = vectorAddSignedHalfWordSaturate(in_vs32,in_vs45); memcpy(auVar11, &_vt0, 16); }{ V16 _vt1 = vectorPackSignedHalfWordUnsignedSaturate(auVar11,auVar11); memcpy(in_vs32, &_vt1, 16); }
          uVar1 = storeVectorElementHalfWordIndexed(in_vs32,0,lVar4);
          *(undefined2 *)lVar4 = uVar1;
          piVar8 = param_1;
          do {
            iVar5 = *(short *)(*piVar8 + iVar7) + 0x80;
            if (iVar5 < 0x100) {
              if (iVar5 < 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = (undefined1)iVar5;
              }
            }
            else {
              uVar6 = 0xff;
            }
            *(undefined1 *)((int)(undefined2 *)lVar4 + iVar3 + 2) = uVar6;
            iVar3 = iVar3 + 1;
            piVar8 = piVar8 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          lVar9 = lVar9 + -1;
          lVar4 = lVar4 + 4;
          iVar7 = iVar7 + 2;
        } while (lVar9 != 0);
      }
      piVar8 = param_1 + -1;
      lVar4 = 2;
      do {
        piVar2 = piVar8 + 1;
        piVar8 = piVar8 + 1;
        *piVar8 = *piVar2 + (int)param_4 * 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      param_5 = param_5 + -1;
      param_2 = param_2 + param_3;
    } while (param_5 != 0);
  }
  return;
}

