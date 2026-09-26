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
extern unsigned int *auStack_21e;
extern unsigned int *auStack_2c8;
extern unsigned int *auStack_2d0;
extern int fn_82F691F0();
extern unsigned int uStack_220;
extern unsigned int uStack_2cc;


undefined8 fn_82A1EBB0(void)

{
  int iVar1;
  undefined1 auStack_2d0 [4];
  uint uStack_2cc;
  uint auStack_2c8 [42];
  undefined2 uStack_220;
  undefined1 auStack_21e [518];
  
  iVar1 = XexCheckExecutablePrivilege(10);
  if (((((iVar1 != 0) && (iVar1 = XGetAVPack(), iVar1 != 3)) && (iVar1 != 6)) &&
      ((iVar1 != 8 && (iVar1 != 4)))) &&
     ((iVar1 = ExGetXConfigSetting(2,2,&uStack_2cc,4,auStack_2d0), iVar1 == 0 &&
      ((uStack_2cc & 0xff00) == 0x300)))) {
    iVar1 = ExGetXConfigSetting(3,10,auStack_2c8,4,auStack_2d0);
    if (iVar1 == 0) {
      if (((auStack_2c8[0] & 0x800000) != 0) || ((auStack_2c8[0] & 0x400000) == 0)) {
        XGetLanguage();
        uStack_220 = 0;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_21e,0,0x1fe);
      }
    }
  }
  return 0;
}

