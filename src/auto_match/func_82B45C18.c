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
extern unsigned int *auStack_20;
extern int fn_82AA66A8();
extern int fn_82B45A50();


undefined1 fn_82B45C18(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined1 auStack_20 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe19);
  }
  if (*(int *)(param_2 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe19);
  }
  cVar1 = fn_82B45A50(param_1,*(undefined4 *)(param_2 + 8),auStack_20);
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe19);
  }
  return auStack_20[0];
}

