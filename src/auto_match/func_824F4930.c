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
extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern unsigned int lbl_8320A898;


void fn_824F4930(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lbl_8320A898;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x74) != '\x01')) {
    *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
    if (*(int *)(lbl_8320A898 + 0x3148) != 0) {
      fn_8262FE50(*(int *)(lbl_8320A898 + 0x3148));
    }
    if (*(int *)(lbl_8320A898 + 0x3158) != 0) {
      fn_8262FE50(*(int *)(lbl_8320A898 + 0x3158));
    }
    fn_8263A1B8(lbl_8320A898,0,*(undefined4 *)(param_1 + 0x38));
    fn_8263A508(lbl_8320A898,0);
    fn_82631920(lbl_8320A898,*(undefined4 *)(param_1 + 0x1c));
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}

