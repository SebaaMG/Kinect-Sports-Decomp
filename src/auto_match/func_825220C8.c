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
extern int fn_823AB478();
extern int fn_82522430();
extern unsigned int lbl_832767C8;
extern U64 storeWordConditionalIndexed();


void fn_825220C8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  char in_RESERVE;
  
  iVar2 = fn_823AB478(**(undefined4 **)(param_1 + 4));
  fn_82522430(lbl_832767C8,param_1);
  if (*(char *)(lbl_832767C8 + iVar2 + 0x88) == '\0') {
    puVar3 = (uint *)((ulonglong)lbl_832767C8 + 0xa0);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3 - 1,0,(ulonglong)lbl_832767C8 + 0xa0);
      *puVar3 = uVar1;
    }
  }
  else {
    *(undefined1 *)(lbl_832767C8 + iVar2 + 0x88) = 0;
  }
  return;
}

