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
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D96A0();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


void fn_82627F00(int param_1,uint *param_2,int param_3,int param_4,int *param_5,undefined8 param_6
                  )

{
  uint uVar1;
  int *piVar2;
  undefined4 uStack_50;
  int iStack_4c;
  
  piVar2 = *(int **)(param_1 + 0x34);
  do {
    if (piVar2 == *(int **)(param_1 + 0x38)) {
LAB_82627f54:
      *param_5 = param_3;
      fn_82517A50(param_6,param_4);
LAB_82627f64:
      if (*(int *)(param_4 + 4) != 0) {
        fn_822315A0();
      }
      return;
    }
    uVar1 = fn_827D96A0(*piVar2);
    if ((uVar1 & 0xffff) == *param_2) {
      if (*piVar2 != 0) {
        *param_5 = *piVar2;
        uStack_50 = 0;
        iStack_4c = 0;
        fn_82517978(&uStack_50,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
        fn_823F2E20(param_6,&uStack_50);
        if (iStack_4c != 0) {
          fn_822315A0();
        }
        goto LAB_82627f64;
      }
      goto LAB_82627f54;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

