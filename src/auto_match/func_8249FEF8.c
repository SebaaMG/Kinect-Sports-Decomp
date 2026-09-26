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
extern int fn_82536288();
extern int fn_82A1EFC0();


void fn_8249FEF8(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 4))();
    if (cVar1 == '\0') {
      (**(code **)**(undefined4 **)(param_1 + 0x78))();
    }
    fn_82536288((undefined4 *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x10,0,0x14);
}

