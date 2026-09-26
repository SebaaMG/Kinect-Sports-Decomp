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
extern int fn_82BE66A0();
extern int fn_82BEA200();
extern int fn_82BEA230();


undefined8 fn_82BE7128(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = fn_82BEA200(param_1 + 0x2c,0xffffffff820e9850);
  if (iVar1 == 0) {
    return 0x2c0;
  }
  iVar1 = param_1 + 0x14;
  do {
    fn_82BE5340(iVar1);
    while( true ) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        fn_82BEA230(param_1 + 0x2c,0xffffffff820e9850);
        return 0;
      }
      iVar2 = fn_82BE5378(iVar1);
      if ((*(int *)(iVar2 + 0x14) != 0x1065) && (*(int *)(iVar2 + 0x14) != 0x1073)) break;
      fn_82BE5350(iVar1);
    }
    fn_82BE66A0();
  } while( true );
}

