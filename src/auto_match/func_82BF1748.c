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
extern int fn_82BE8AE0();
extern int fn_82BE8AF8();
extern int fn_82BF0EB0();
extern int fn_82BF1098();
extern unsigned int lbl_8322B224;


void fn_82BF1748(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0x15) {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && (*(int *)(iVar1 + 0xc) != 0)) &&
       (iVar1 = fn_82BF1098(param_1,*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0xc)), iVar1 == 0)
       ) {
      *(undefined4 *)(param_1 + 0x68) = 1;
      if (lbl_8322B224 != 0) {
        fn_82BE8AE0();
      }
      *(undefined4 *)(param_1 + 0x10) = 0x17;
      return;
    }
    if (lbl_8322B224 != 0) {
      fn_82BE8AF8();
    }
    fn_82BF0EB0(param_1);
  }
  return;
}

