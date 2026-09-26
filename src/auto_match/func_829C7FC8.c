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
extern int fn_829C7C30();
extern int fn_829C7D80();
extern unsigned int lbl_82054148;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_83215060;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156C4;
extern unsigned int lbl_832156E0;
extern unsigned int lbl_832156E4;
extern unsigned int lbl_832156E8;
extern unsigned int lbl_832156EC;


undefined8 fn_829C7FC8(int param_1,uint param_2,longlong param_3,float *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (param_2 < 2) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = lbl_821AAD20;
      if ((lbl_83215060 != 0) && (param_2 == 0)) {
        return 0xffffffff8301000b;
      }
      if (((((param_1 == 0) && ((uint)param_3 < 9)) &&
           (bVar1 = (uint)param_3 != 0, param_3 != 1 || !bVar1)) &&
          ((param_3 != 2 || !bVar1 && (param_3 != 3 || !bVar1)))) && (param_3 != 4 || !bVar1)) {
        if (param_3 == 5 && bVar1) {
          *param_4 = (float)(longlong)(int)(&lbl_832156C4)[param_2 * 0x61] * lbl_82054148;
          return 0;
        }
        if (param_3 == 6 && bVar1) {
          if ((((&lbl_832156B0)[param_2 * 0x61] & 2) == 0) &&
             (uVar2 = fn_829C7C30(), (int)uVar2 < 0)) {
            return uVar2;
          }
          dVar3 = (double)fn_829C7D80((&lbl_832156E0)[param_2 * 0x61]);
          *param_4 = (float)dVar3;
          return 0;
        }
        if (param_3 == 7 && bVar1) {
          if ((((&lbl_832156B0)[param_2 * 0x61] & 4) == 0) &&
             (uVar2 = fn_829C7C30(), (int)uVar2 < 0)) {
            return uVar2;
          }
          dVar3 = (double)fn_829C7D80((&lbl_832156E4)[param_2 * 0x61]);
          *param_4 = (float)dVar3;
          return 0;
        }
        if (!bVar1) {
          if ((((&lbl_832156B0)[param_2 * 0x61] & 1) == 0) &&
             (uVar2 = fn_829C7C30(), (int)uVar2 < 0)) {
            return uVar2;
          }
          *param_4 = (float)(longlong)(int)(&lbl_832156EC)[param_2 * 0x61] * lbl_82054148;
          return 0;
        }
        if ((((&lbl_832156B0)[param_2 * 0x61] & 8) == 0) &&
           (uVar2 = fn_829C7C30(), (int)uVar2 < 0)) {
          return uVar2;
        }
        dVar3 = (double)fn_829C7D80((&lbl_832156E8)[param_2 * 0x61]);
        *param_4 = (float)dVar3;
        return 0;
      }
    }
  }
  return 0xffffffff80070057;
}

