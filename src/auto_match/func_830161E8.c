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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83016050();
extern int fn_830162F8();
extern unsigned int lbl_831BC768;


int fn_830161E8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  iVar1 = fn_83016050();
  if (iVar1 == 0) {
    iVar1 = fn_82FA5060(lbl_831BC768,0x324);
    if (iVar1 != 0) {
      RtlInitializeCriticalSection();
      *(undefined4 *)(iVar1 + 800) = 0;
      *(undefined4 *)(iVar1 + 800) = 0;
      puVar3 = (undefined4 *)(iVar1 + 0x18);
      lVar4 = 0xc1;
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar2 = fn_830162F8(param_1 + 0x1c,param_2,iVar1);
      if (iVar2 == 0) {
        fn_82FA5190(lbl_831BC768,iVar1);
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

