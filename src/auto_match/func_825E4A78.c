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
extern unsigned int lbl_821CC160;


void fn_825E4A78(int param_1,ushort param_2,ushort param_3,float *param_4,float *param_5,
                  float *param_6)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  fVar4 = lbl_821CC160;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar8 = *(int *)(param_1 * 8 + -0x7cd8ff24);
    if (iVar8 != 0) {
      iVar6 = 0;
      iVar3 = *(int *)(param_1 * 8 + -0x7cd8ff20);
      iVar5 = iVar8;
      if (iVar8 < 0) {
        do {
          iVar8 = iVar8 >> 1;
          iVar7 = iVar8 * 0xc + iVar3;
          uVar2 = *(ushort *)(iVar8 * 0xc + iVar3);
          bVar1 = param_2 < uVar2;
          if ((param_2 == uVar2) &&
             (bVar1 = param_3 < *(ushort *)(iVar7 + 2), param_3 == *(ushort *)(iVar7 + 2))) {
            if ((param_5 != (float *)0x0) && (*(float *)(iVar7 + 4) != lbl_821CC160)) {
              *param_5 = *param_4 * *(float *)(iVar7 + 4) + *param_5;
            }
            if (param_6 == (float *)0x0) {
              return;
            }
            if (*(float *)(iVar7 + 8) == fVar4) {
              return;
            }
            *param_6 = param_4[1] * *(float *)(iVar7 + 8) + *param_6;
            return;
          }
          if (bVar1) {
            iVar5 = iVar8 + -1;
          }
          else {
            iVar6 = iVar8 + 1;
          }
          iVar8 = iVar6 + iVar5;
        } while (iVar5 < iVar6);
      }
    }
  }
  return;
}

