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
extern int fn_829C81E8();
extern int fn_829C9BA0();
extern int fn_82F68CC0();
extern int iRam832159dc;
extern unsigned int lbl_83215690;
extern unsigned int lbl_8321570C;
extern unsigned int lbl_8321582C;
extern unsigned int lbl_832159B4;
extern unsigned int lbl_832159C8;
extern unsigned int lbl_83215A2C;
extern unsigned int lbl_83215A30;


void fn_829C8598(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = lbl_83215690;
  uVar1 = KfAcquireSpinLock(0xffffffff8321506c);
  if (lbl_83215A30 == 0) {
    iVar3 = iVar2 * 0x184;
    *(undefined4 *)(&lbl_8321582C + iVar3) = 0;
    lbl_83215A30 = 1;
    KfReleaseSpinLock(0xffffffff8321506c,uVar1);
    lbl_83215A2C = iVar2;
    lbl_832159B4 = 0x23;
    lbl_832159C8 = fn_829C81E8;
    fn_82F68CC0(0xffffffff832159d0,&lbl_8321570C + iVar3,0x5c);
    iRam832159dc = -iRam832159dc;
    iVar2 = fn_829C9BA0(0xffffffff832159b4);
    if (iVar2 < 0) {
      *(undefined4 *)(&lbl_8321582C + iVar3) = 1;
      lbl_83215A30 = 0;
    }
  }
  else {
    KfReleaseSpinLock(0xffffffff8321506c,uVar1);
  }
  return;
}

