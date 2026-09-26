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
extern unsigned int *auStack_12f;
extern unsigned int *auStack_180;
extern unsigned int *auStack_af;
extern int fn_82489D60();
extern int fn_82A1E658();
extern int fn_82F691F0();
extern unsigned int uStack_130;
extern unsigned int uStack_b0;


void fn_82489AA0(int param_1,int param_2)

{
  int iVar1;
  undefined4 auStack_180 [20];
  undefined1 uStack_130;
  undefined1 auStack_12f [127];
  undefined1 uStack_b0;
  undefined1 auStack_af [175];
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != iVar1) {
    if (((0 < iVar1) && (iVar1 < 3)) && (*(int *)(param_1 + 0x18) != -1)) {
      fn_82A1E658();
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
    *(int *)(param_1 + 4) = param_2;
    if (*(int *)(param_1 + 0x24) == 0) {
      if (param_2 == 1) {
        uStack_b0 = 0;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_af,0,0x7f);
      }
      if (param_2 == 2) {
        uStack_130 = 0;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_12f,0,0x7f);
      }
    }
    else {
      auStack_180[0] = *(undefined4 *)(param_1 + 0x14);
      fn_82489D60((ulonglong)*(uint *)(param_1 + 0x20) + 0x20,auStack_180);
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}

