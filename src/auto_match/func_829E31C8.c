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
extern unsigned int *auStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_829E3C40();
extern int fn_829E53C0();
extern int fn_829E5408();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8315C704;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


uint fn_829E31C8(int param_1)

{
  uint uVar1;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((*(char *)(param_1 + 0x6c) != '\0') && (*(char *)(param_1 + 0x6d) != '\0')) {
    uStack_38 = 1;
    uStack_34 = 1;
    uStack_40 = lbl_82005748;
    uStack_30 = 4;
    uStack_3c = lbl_82005748;
    uStack_28 = 1;
    uStack_1c = lbl_8201EBA4;
    uStack_20 = 0;
    uStack_18 = lbl_8201FBB0;
    uVar1 = fn_829E3C40(*(undefined4 *)(param_1 + 8),&uStack_40);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_829E5408(param_1 + 0x40,&fStack_4c,&fStack_50,auStack_48);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((double)lbl_821AAD20 < (double)fStack_50) {
      uVar1 = fn_829E53C0((double)fStack_4c,(double)fStack_50,(double)lbl_8315C704,param_1 + 0x40);
      return (int)uVar1 >> 0x1f & uVar1;
    }
  }
  return 0x8000ffff;
}

