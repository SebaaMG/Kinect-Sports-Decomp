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
extern unsigned int *auStack_10;
extern int fn_8225C590();
extern int fn_8225CDB0();
extern int fn_8249ABC0();
extern int fn_825200A8();
extern unsigned int lbl_832659CD;
extern unsigned int lbl_8329618C;


void fn_824E4160(void)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined4 auStack_10 [4];
  
  if (lbl_8329618C == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(lbl_8329618C + 4);
  }
  auStack_10[0] = *puVar3;
  if (lbl_832659CD == '\0') {
    iVar2 = fn_825200A8(0xffffffff8326597c,auStack_10);
    if (iVar2 == 0) {
      iVar2 = fn_8249ABC0();
      if ((*(int *)(iVar2 + 8) != 2) && (*(int *)(iVar2 + 8) != 1)) {
        uVar1 = fn_8225C590();
        fn_8225CDB0(uVar1,0);
      }
    }
  }
  return;
}

