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
extern int fn_825FA440();


undefined8 fn_825C44A8(int *param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_3 < 0) || (2 < param_3)) {
    return 0;
  }
  piVar3 = (int *)*param_1;
  piVar4 = (int *)0x0;
  do {
    piVar1 = piVar3;
    if (piVar1 == (int *)0x0) {
LAB_825c450c:
      if (param_3 == 0) {
        uVar2 = *(undefined4 *)(param_2 + 4);
      }
      else {
        uVar2 = *(undefined4 *)(param_3 * 4 + -0x7ce3fc6c);
      }
      fn_825FA440(uVar2,param_4);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(0xc);
      }
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0xc);
    }
    if (piVar1[1] == param_3) {
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(8);
      }
      goto LAB_825c450c;
    }
    piVar3 = (int *)piVar1[2];
    piVar4 = piVar1;
  } while( true );
}

