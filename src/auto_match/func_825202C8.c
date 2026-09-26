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
extern int fn_82631920();
extern int fn_82648160();
extern int fn_82A1BB18();
extern int fn_82A1E108();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B370;
extern unsigned int lbl_83276742;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825202C8(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  while( true ) {
    if ((*(int *)(param_1 + 8) == 0) || (bVar2 = true, *(int *)(param_1 + 4) != 0)) {
      bVar2 = false;
    }
    if (bVar2) break;
    fn_82A1E108(10);
  }
  if (lbl_83276742 == '\0') {
    return;
  }
  do {
    do {
      iVar1 = *(int *)(lbl_8320A898 + 0x2a88);
      iVar3 = fn_82A1BB18();
    } while (iVar1 != iVar3);
    fn_82631920(lbl_8320A898,0);
    fn_82648160(lbl_8320A898,lbl_8326B370,0);
  } while( true );
}

