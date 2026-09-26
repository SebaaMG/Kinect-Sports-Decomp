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
#define NAN(x) ((x) != (x))
extern int fn_8287D518();
extern int fn_8287FD98();
extern int fn_82897BD0();
extern int fn_82F63108();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82404638(double param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_2 + 0x98) != 0) {
    uVar1 = fn_82897BD0(*(undefined4 *)(*(int *)(param_2 + 0x34) + 0x38));
    uVar2 = fn_8287FD98();
    dVar3 = (double)fn_8287D518(uVar2,uVar1);
    dVar3 = -(double)(float)((double)(float)(dVar3 * (double)lbl_8218E8E8) * (double)lbl_82193CC0 -
                            param_1);
    if (*(int *)(param_2 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    dVar4 = -dVar3;
    dVar5 = (double)lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar5) << 2) | (uint)(NAN(dVar4) || NAN(dVar5)) << 2)) <
        0.0) {
      dVar5 = dVar3;
    }
    (**(code **)(**(int **)(param_2 + 0x98) + 4))(dVar5);
  }
  return;
}

