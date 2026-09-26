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
extern int fn_82250A18();
extern int fn_82511700();
extern int fn_825117D8();
extern unsigned int lbl_832975B0;
extern unsigned int lbl_83297800;


void fn_824E3390(void)

{
  int iVar1;
  
  if (lbl_832975B0 == 0) {
    fn_82250A18();
  }
  iVar1 = lbl_83297800;
  if (lbl_83297800 == 0) {
    iVar1 = fn_825117D8();
  }
  if ((*(char *)(iVar1 + 8) != '\0') && (*(char *)(iVar1 + 10) == '\0')) {
    *(undefined1 *)(iVar1 + 9) = 0;
    fn_82511700(iVar1);
    *(undefined1 *)(iVar1 + 9) = 1;
  }
  return;
}

