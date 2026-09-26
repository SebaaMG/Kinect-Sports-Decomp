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
extern int fn_822315A0();
extern int fn_8261BF58();
extern int fn_82A1E658();
extern int fn_82A1EFC0();
extern int iRam83281150;


undefined8 fn_825FD748(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int aiStack_40 [16];
  
  if (iRam83281150 != 0) {
    if (*(int *)(param_3 + 4) != 0) {
      fn_822315A0();
    }
    return 0x3e5;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iRam83281150 = 1;
  fn_8261BF58(aiStack_40,*(undefined4 *)(iVar1 + 0x19c),iVar1 + 0x170,iVar1 + 0x68);
  if (*(int *)(aiStack_40[0] + 0x248) != 0) {
    fn_82A1E658();
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(aiStack_40[0] + 0x23c,0,0x1c);
}

