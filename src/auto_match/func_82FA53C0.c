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
extern int fn_82FA57F0();
extern int fn_8306C0C0();
extern unsigned int lbl_83264208;
extern unsigned int lbl_83264210;
extern unsigned int lbl_83264214;
extern unsigned int uRam8326420c;


void fn_82FA53C0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (lbl_83264214 != '\0') {
    lVar3 = 0;
    if (0 < lbl_83264208) {
      iVar2 = 0;
      iVar1 = lbl_83264208;
      do {
        if (*(int *)(iVar2 + lbl_83264210) != 0) {
          fn_82FA57F0(lVar3);
          iVar1 = lbl_83264208;
        }
        lVar3 = lVar3 + 1;
        iVar2 = iVar2 + 0x50;
      } while ((int)lVar3 < iVar1);
    }
    fn_8306C0C0(lbl_83264210);
    lbl_83264208 = 0;
    lbl_83264214 = '\0';
    lbl_83264210 = 0;
    uRam8326420c = 0;
  }
  return;
}

