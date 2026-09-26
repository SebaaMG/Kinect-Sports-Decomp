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
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_83215018;
extern unsigned int lbl_83215064;
extern unsigned int lbl_83215280;
extern unsigned int lbl_83215284;
extern unsigned int lbl_83215288;
extern U64 storeWordConditionalIndexed();


undefined8 fn_829C9FE0(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  uVar1 = 0;
  if (lbl_83215064 != 0) {
    lbl_83215284 = 0;
    uVar3 = 0;
    puVar4 = &lbl_83215288;
    do {
      if (lbl_83215018 == 0) {
        *puVar4 = 1;
        do {
          if (in_RESERVE != '\0') {
            lbl_83215280 = storeWordConditionalIndexed
                                     ((ulonglong)lbl_83215280 + 1,0,0xffffffff83215280);
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        uVar1 = (*(code *)lbl_8315C3E8)(puVar4 + 2);
        if ((int)uVar1 == 0x103) {
          uVar1 = 0;
          goto LAB_829ca0c8;
        }
        if ((int)uVar1 != 0) {
          *puVar4 = 0;
          do {
            uVar2 = (ulonglong)lbl_83215280;
            if (in_RESERVE != '\0') {
              lbl_83215280 = storeWordConditionalIndexed(uVar2 - 1,0,0xffffffff83215280);
              in_cr0 = 2;
            }
          } while (!(bool)(in_cr0 >> 1 & 1));
          if ((int)(uVar2 - 1) == 0) {
            sync(0);
            KeSetEvent(0xffffffff83215618,1,0);
          }
          goto LAB_829ca0c8;
        }
      }
      else {
        uVar1 = 0xffffffffc000004b;
LAB_829ca0c8:
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar3 = uVar3 + 0x80;
      puVar4 = puVar4 + 0x20;
    } while ((uVar3 & 0xffffffff) < 0x200);
  }
  return uVar1;
}

