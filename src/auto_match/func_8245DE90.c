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
extern int fn_8245DB68();
extern int fn_8245DD40();
extern int fn_82E23100();
extern int fn_82E23478();
extern unsigned int lbl_83276598;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


longlong fn_8245DE90(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((*(int *)(param_1 + 0x50) == 1) || (*(int *)(param_1 + 0xe0) != 0)) {
    lVar1 = 0x15;
  }
  else if ((*(int *)(param_1 + 0x54) != 1) || (lVar1 = fn_8245DD40(param_1), lVar1 == 0)) {
    *(undefined4 *)(param_1 + 0xdc) = param_2;
    *(undefined4 *)(param_1 + 0xcc) = 0x280;
    *(undefined4 *)(param_1 + 0xd0) = 0x1e0;
    lVar1 = fn_8245DB68(param_1);
    if (lVar1 == 0) {
      uStack_38 = *(undefined4 *)(param_1 + 8);
      uStack_34 = *(undefined4 *)(param_1 + 0x14);
      uStack_4c = 0x1e;
      uStack_50 = 0x28001e0;
      uStack_48 = 4000;
      uStack_44 = 0xfe;
      uStack_3c = 0;
      uStack_40 = 4;
      lVar1 = fn_82E23478(&uStack_50,param_1 + 4);
      if ((lVar1 == 0) &&
         (lVar1 = fn_82E23100(param_1 + 4,*(undefined4 *)(param_1 + 8),
                               *(undefined4 *)(param_1 + 0x14),0,param_1 + 0x5c), lVar1 == 0)) {
        *(undefined4 *)(param_1 + 0xe0) = 0;
        *(undefined4 *)(param_1 + 0x50) = 1;
        lbl_83276598 = 1;
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    fn_8245DD40(param_1);
  }
  return lVar1;
}

