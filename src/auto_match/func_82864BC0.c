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
extern unsigned int lbl_82005748;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_8200D8B4;
extern unsigned int lbl_8201FB94;
extern unsigned int lbl_8201FB98;
extern unsigned int lbl_8201FB9C;
extern unsigned int lbl_8201FBA0;
extern unsigned int lbl_8201FBA4;
extern unsigned int lbl_8201FBA8;
extern unsigned int lbl_8201FBAC;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_8201FBB4;
extern unsigned int lbl_8201FBB8;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82864BC0(double param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)lbl_821AAD20;
  dVar5 = (double)lbl_82005748;
  dVar4 = dVar6;
  if ((dVar6 <= param_1) && (dVar4 = param_1, dVar5 < param_1)) {
    dVar4 = dVar5;
  }
  dVar4 = (double)(float)(dVar5 - dVar4);
  if (dVar6 < dVar4) {
    if (dVar4 < (double)lbl_8201FBB8) {
      return -(double)(float)(dVar4 * (double)lbl_8201FBB4 - (double)lbl_8200D898);
    }
    if ((double)lbl_8201FBB0 <= dVar4) {
      if ((double)lbl_8201FBA8 <= dVar4) {
        if (dVar5 <= dVar4) {
          return (double)lbl_8201FB94;
        }
        fVar1 = (float)(dVar4 - (double)lbl_8201FBA8);
        fVar2 = lbl_8201FB98;
        fVar3 = lbl_8201FB9C;
      }
      else {
        fVar1 = (float)(dVar4 - (double)lbl_8201FBB0);
        fVar2 = lbl_8201FBA0;
        fVar3 = lbl_8201FBA4;
      }
    }
    else {
      fVar1 = (float)(dVar4 - (double)lbl_8201FBB8);
      fVar2 = lbl_8200D8B4;
      fVar3 = lbl_8201FBAC;
    }
    return -(double)(fVar1 * fVar3 - fVar2);
  }
  return (double)lbl_8200D898;
}

