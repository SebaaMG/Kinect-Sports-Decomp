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
extern int fn_829C8918();
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_83215000;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156B4;
extern unsigned int lbl_832156C8;
extern unsigned int lbl_832156CC;
extern unsigned int lbl_8321570C;
extern unsigned int lbl_83215724;


undefined8 fn_829C8B38(int param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)param_2;
  if (uVar3 < 2) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if (param_1 == 0) {
      if (param_3 == 0) {
        if ((param_4 & 0xffffffff) == 0) {
          iVar4 = uVar3 * 0x184;
          *(undefined4 *)(&lbl_832156C8 + iVar4) = 0;
          if (*(int *)(&lbl_83215724 + iVar4) == 1) {
            uVar2 = (&lbl_832156B0)[uVar3 * 0x61];
            *(uint *)(&lbl_8321570C + iVar4) = *(uint *)(&lbl_8321570C + iVar4) & 0xfffffff0;
            (&lbl_832156B0)[uVar3 * 0x61] = uVar2 & 0xfffffff0;
          }
          fn_829C8918(param_2);
          return 0;
        }
        if ((param_4 & 0xffffffff) == 1) {
          *(undefined4 *)(&lbl_832156C8 + uVar3 * 0x184) = 1;
          fn_829C8918(param_2);
          return 0;
        }
      }
      else if (param_3 == 1) {
        if ((param_4 & 0xffffffff) == 0) {
          if ((lbl_83215000 & 0x40) == 0) {
            *(undefined4 *)(&lbl_832156B4 + uVar3 * 0x184) = 1;
            fn_829C8918(param_2);
            return 0;
          }
        }
        else {
          if ((param_4 & 0xffffffff) == 1) {
            *(undefined4 *)(&lbl_832156B4 + uVar3 * 0x184) = 2;
            fn_829C8918(param_2);
            return 0;
          }
          if ((param_4 & 0xffffffff) < 3) {
            *(undefined4 *)(&lbl_832156B4 + uVar3 * 0x184) = 3;
            fn_829C8918(param_2);
            return 0;
          }
        }
      }
      else if ((param_3 < 3) && ((param_4 & 0xffffffff) < 4)) {
        bVar1 = (int)param_4 != 0;
        if (param_4 == 1 && bVar1) {
          *(undefined4 *)(&lbl_832156CC + uVar3 * 0x184) = 2;
          fn_829C8918(param_2);
          return 0;
        }
        if (param_4 != 2 || !bVar1) {
          if (!bVar1) {
            *(undefined4 *)(&lbl_832156CC + uVar3 * 0x184) = 0;
            fn_829C8918(param_2);
            return 0;
          }
          *(undefined4 *)(&lbl_832156CC + uVar3 * 0x184) = 1;
          fn_829C8918(param_2);
          return 0;
        }
        *(undefined4 *)(&lbl_832156CC + uVar3 * 0x184) = 3;
        fn_829C8918(param_2);
        return 0;
      }
    }
  }
  return 0xffffffff80070057;
}

