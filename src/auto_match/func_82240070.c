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
extern int fn_82230040();
extern int fn_82F62450();
extern unsigned int lbl_8202114C;
extern unsigned int uStack_18;
extern unsigned int uStack_28;
extern unsigned int uStack_38;


void fn_82240070(int param_1,uint param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined **ppuStack_40;
  char *pcStack_3c;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  char *pcStack_2c;
  undefined8 uStack_28;
  undefined **ppuStack_20;
  char *pcStack_1c;
  undefined8 uStack_18;
  
  uVar2 = *(uint *)(param_1 + 0x10) & param_2 & 0x17;
  *(uint *)(param_1 + 0xc) = param_2 & 0x17;
  if (uVar2 != 0) {
    if (param_3 == '\0') {
      if ((uVar2 & 4) != 0) {
        uVar1 = fn_82F62450();
        uStack_38 = CONCAT44(1,uVar1);
        pcStack_3c = "ios_base::badbit set";
        ppuStack_40 = &lbl_8202114C;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_40);
      }
      if ((uVar2 & 2) != 0) {
        uVar1 = fn_82F62450();
        uStack_28 = CONCAT44(1,uVar1);
        pcStack_2c = "ios_base::failbit set";
        ppuStack_30 = &lbl_8202114C;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_30);
      }
      uVar1 = fn_82F62450();
      uStack_18 = CONCAT44(1,uVar1);
      pcStack_1c = "ios_base::eofbit set";
      ppuStack_20 = &lbl_8202114C;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_20);
    }
  }
  return;
}

