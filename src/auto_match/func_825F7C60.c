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
extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_8262F8D8();
extern int fn_82630040();


void fn_825F7C60(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1 = (int *)*param_1;
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98((ulonglong)(uint)param_1[0xc] * 0x50);
      }
      iVar2 = fn_82630040(param_1[0xc] << 7,0,0);
      *param_1 = iVar2;
      if (iVar2 != 0) {
        uVar1 = *(uint *)(iVar2 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
        fn_8262F8D8(iVar2,10,0,uVar1,0,uVar1,*(uint *)(iVar2 + 0x1c) & 0x3fffffc,0);
      }
      fn_82522ED8(param_1[0xb]);
      param_1[0xb] = 0;
    }
    param_1 = (int *)param_1[0x13];
  } while( true );
}

