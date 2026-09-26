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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


int fn_822AA940(int param_1)

{
  uint *puVar2;
  ulonglong uVar1;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    param_1 = param_1 + 0x4c;
  }
  else {
    puVar2 = (uint *)(param_1 + 0x5c);
    if ((puVar2 == (uint *)0x0) ||
       (uVar7 = (ulonglong)*puVar2, uVar7 == (uVar7 - 1) + (ulonglong)(uVar7 == 0))) {
      param_1 = 0;
    }
    else if (*(int *)(param_1 + 0x8c) < 7) {
      uVar1 = fn_8251F720(puVar2,1);
      iVar6 = 0;
      uVar8 = uVar1;
      uVar7 = uVar1;
      while ((uVar7 != 0 && (*(int *)uVar8 != 0))) {
        iVar6 = iVar6 + 1;
        uVar8 = -(ulonglong)(((int *)uVar8)[1] != 0) & uVar8 + 4;
        uVar7 = uVar8 & 0xffffffff;
      }
      dVar10 = (double)(longlong)iVar6;
      uVar7 = (ulonglong)lbl_83265A28;
      dVar9 = (double)lbl_821CA460;
      do {
        lVar4 = 0;
        uVar7 = (longlong)(int)uVar7 * 0x19660d + 0x3c6ef35f;
        lbl_83265A28 = (uint)uVar7;
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x8c);
        uVar8 = ((ulonglong)
                 (uint)(int)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                            dVar9) * dVar10) & 0x3fffffff) * 4 + uVar1;
        if (0 < (int)*(uint *)(param_1 + 0x8c)) {
          iVar6 = param_1 + 0x70;
          do {
            iVar3 = fn_825200A8(iVar6);
            if (iVar3 != 0) {
              uVar8 = 0;
              break;
            }
            lVar4 = lVar4 + 1;
            iVar6 = iVar6 + 4;
          } while ((int)lVar4 < *(int *)(param_1 + 0x8c));
        }
      } while ((uVar8 & 0xffffffff) == 0);
      *(undefined4 *)((int)((uVar5 + 0x1c & 0xffffffff) << 2) + param_1) = *(undefined4 *)uVar8;
      fn_8251FA58(uVar1);
      iVar6 = *(int *)(param_1 + 0x8c);
      *(int *)(param_1 + 0x8c) = iVar6 + 1;
      param_1 = (iVar6 + 0x1c) * 4 + param_1;
    }
    else {
      param_1 = param_1 + 0x88;
    }
  }
  return param_1;
}

