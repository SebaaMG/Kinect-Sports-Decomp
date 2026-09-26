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
extern int fn_83060438();
extern int fn_830619F8();
extern int fn_83061F80();
extern int fn_830621E8();
extern int fn_83062318();


longlong fn_830625A0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piStack_70;
  
  fn_830621E8(param_1,0);
  lVar9 = 0;
  do {
    bVar5 = false;
    iVar11 = *(int *)(param_1 + 0x2c);
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        do {
          bVar4 = false;
          fn_83060438(iVar11);
          iVar12 = 0;
          iVar2 = *(int *)(iVar11 + 8) - *(int *)(iVar11 + 4) >> 3;
          if (0 < iVar2) {
            do {
              iVar1 = *(int *)(iVar11 + 4);
              iVar3 = iVar12 * 8;
              iVar12 = iVar12 + 1;
              iVar7 = 1;
              piStack_70 = (int *)((ulonglong)*(undefined8 *)(iVar3 + iVar1) >> 0x20);
              iVar3 = *piStack_70;
              if (iVar2 <= iVar12) break;
              iVar8 = iVar12 * 8;
              do {
                piStack_70 = (int *)((ulonglong)*(undefined8 *)(iVar8 + iVar1) >> 0x20);
                if (*piStack_70 != iVar3) break;
                iVar12 = iVar12 + 1;
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 8;
              } while (iVar12 < iVar2);
              if ((iVar7 == 2) &&
                 (cVar6 = fn_83061F80(param_1,iVar11,
                                            *(undefined8 *)((iVar12 + -2) * 8 + iVar1),
                                            *(undefined8 *)(iVar12 * 8 + iVar1 + -8),param_2,param_3
                                            ,param_4), cVar6 != '\0')) {
                lVar9 = lVar9 + 1;
                bVar5 = true;
                bVar4 = true;
                break;
              }
            } while (iVar12 < iVar2);
          }
        } while (bVar4);
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x18;
      } while (iVar10 < *(int *)(param_1 + 0x18));
    }
    if (!bVar5) {
      fn_830619F8(param_1);
      if ((int)lVar9 != 0) {
        fn_83062318(param_1);
      }
      return lVar9;
    }
  } while( true );
}

