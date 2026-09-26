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
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215018;
extern unsigned int lbl_83215070;
extern unsigned int lbl_8321507C;
extern U64 storeWordConditionalIndexed();


undefined8 fn_829C9D18(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char in_RESERVE;
  byte in_cr0;
  
  uVar5 = 0;
  lbl_8321507C = 0;
  puVar1 = &lbl_83215000;
  do {
    puVar6 = puVar1 + 0x20;
    if (lbl_83215018 != 0) {
      return 0xffffffffc000004b;
    }
    *puVar6 = 1;
    do {
      if (in_RESERVE != '\0') {
        lbl_83215070 = storeWordConditionalIndexed((ulonglong)lbl_83215070 + 1,0,0xffffffff83215070)
        ;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar2 = (*(code *)lbl_8315C3E8)(puVar1 + 0x22);
    iVar3 = (int)uVar2;
    if (iVar3 == 0x103) {
      uVar2 = 0;
    }
    else if (iVar3 != 0) {
      *puVar6 = 0;
      do {
        uVar4 = (ulonglong)lbl_83215070;
        if (in_RESERVE != '\0') {
          lbl_83215070 = storeWordConditionalIndexed(uVar4 - 1,0,0xffffffff83215070);
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)(uVar4 - 1) == 0) {
        sync(0);
        KeSetEvent(0xffffffff83215618,1,0);
      }
      if (iVar3 < 0) {
        return uVar2;
      }
    }
    uVar5 = uVar5 + 0x80;
    puVar1 = puVar6;
    if (0x1ff < uVar5) {
      return uVar2;
    }
  } while( true );
}

