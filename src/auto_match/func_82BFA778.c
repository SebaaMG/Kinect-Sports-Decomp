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
extern int fn_82BFA4D0();
extern unsigned int lbl_8322FCFC;
extern unsigned int lbl_8322FD08;
extern unsigned int lbl_8322FD0C;
extern unsigned int lbl_8322FD18;
extern unsigned int lbl_8322FD1C;
extern unsigned int lbl_8322FD1E;
extern unsigned int lbl_8322FD20;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD24;
extern unsigned int lbl_8322FD26;
extern unsigned int lbl_8322FD2C;
extern unsigned int lbl_8322FD30;
extern unsigned int lbl_8322FD38;
extern unsigned int lbl_8322FD3C;
extern unsigned int lbl_8322FD40;


ulonglong fn_82BFA778(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  if (lbl_8322FD18 == 0) {
    uVar1 = CurlOpenTitleBackingFile(0xffffffff8322fd18,0xffffffff8322fd10);
    if ((uVar1 & 0xffffffff) == 0) {
      RtlInitializeCriticalSection(0xffffffff83231d48);
      lbl_8322FD2C = 0xffff;
      lbl_8322FD38 = &lbl_8322FD08;
      lbl_8322FD08 = &lbl_8322FD38;
      lbl_8322FD0C = &lbl_8322FD38;
      lbl_8322FD3C = &lbl_8322FD08;
      lbl_8322FD40 = 0xffff;
      lbl_8322FCFC = 0xffff;
      lbl_8322FD30 = 0;
      iVar2 = fn_82BFA4D0();
      if (iVar2 == 0) {
        lbl_8322FD22 = 0xffff;
        lbl_8322FD24 = 0xffff;
        lbl_8322FD1C = 0xffe;
        lbl_8322FD1E = 0;
        lVar4 = 0xffe;
        lbl_8322FD20 = 0;
        lbl_8322FD26 = 0;
        puVar3 = (undefined2 *)0x8322bcf6;
        do {
          puVar3 = puVar3 + 1;
          *puVar3 = 0xffff;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x8001;
  }
  return uVar1;
}

