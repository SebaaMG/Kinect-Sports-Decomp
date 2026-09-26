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
extern int fn_822509A0();
extern int fn_82518FF0();
extern int fn_82F63108();


void fn_82F56C88(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [5];
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  apuStack_2c[0] = (undefined4 *)*puVar1;
  do {
    puVar2 = apuStack_2c[0];
    if (apuStack_2c[0] == puVar1) {
      return;
    }
    puVar1 = (undefined4 *)apuStack_2c[0][5];
    puStack_30 = (undefined4 *)*puVar1;
    while( true ) {
      if (puStack_30 == puVar1) break;
      if ((int *)puStack_30[0x10] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(*(int *)puStack_30[0x10] + 4))(param_1);
      fn_822509A0(&puStack_30);
      puVar1 = (undefined4 *)puVar2[5];
    }
    fn_82518FF0(apuStack_2c);
    puVar1 = *(undefined4 **)(param_2 + 4);
  } while( true );
}

