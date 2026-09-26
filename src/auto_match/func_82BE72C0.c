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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();
extern int fn_82BE5B58();
extern int fn_82BE64E0();
extern int fn_82BEA200();
extern int fn_82BEA230();


longlong fn_82BE72C0(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = fn_82BEA200(param_1 + 0x2c,0xffffffff820e98b0);
  if ((int)lVar1 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar3 = param_1 + 0x14;
      fn_82BE5340(iVar3);
      while (lVar1 = fn_82BE5378(iVar3), lVar1 != 0) {
        iVar2 = fn_82BE5B58(lVar1);
        if (iVar2 != 0) {
          fn_82BE5398(iVar3,*(undefined4 *)(param_1 + 0x1c),1);
          fn_82BE64E0(lVar1,0x100);
          goto LAB_82be7308;
        }
        fn_82BE5350();
      }
    }
    lVar1 = 0;
LAB_82be7308:
    fn_82BEA230(param_1 + 0x2c,0xffffffff820e98b0);
  }
  return lVar1;
}

