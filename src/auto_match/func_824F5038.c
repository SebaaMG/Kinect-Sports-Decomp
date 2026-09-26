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
extern int fn_82639F78();
extern int fn_8263A120();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_824F5038(int param_1)

{
  fn_82639F78(lbl_8320A898,0,*(undefined4 *)(param_1 + 0x1c),0,0,1);
  fn_8263A120(lbl_8320A898,*(undefined4 *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x20) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(lbl_8320A898,0,*(undefined4 *)(param_1 + 0x10),0x80000000);
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0,*(undefined4 *)(param_1 + 8),0x80000000);
}

