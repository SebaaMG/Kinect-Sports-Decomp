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
extern unsigned int fStack_2c;
extern int fn_82639EA8();
extern int fn_8263DE70();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8320A884;
extern unsigned int lbl_8320A888;
extern unsigned int lbl_8320A88C;
extern unsigned int lbl_8320A890;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A8B4;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82837218(void)

{
  double dVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  
  if (lbl_8320A8B4 == 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    dVar1 = (double)lbl_82002AE0;
    uStack_38 = lbl_8320A890;
    fStack_2c = lbl_82002AE0;
    uStack_34 = lbl_8320A88C;
    uStack_30 = lbl_821AAD20;
    fn_82639EA8(lbl_8320A898,&uStack_40);
    fn_8263DE70(dVar1,lbl_8320A898,0,0,-(lbl_8320A884 != 0) & 0xfU | 0x30,lbl_8320A888,0xf,0,0
                     );
  }
  return;
}

