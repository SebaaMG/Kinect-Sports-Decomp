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
extern unsigned int *auStack_28;
extern int fn_82E32058();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


longlong fn_82E24438(int param_1)

{
  longlong lVar1;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong auStack_28 [2];
  
  uStack_30 = 0;
  auStack_28[0] = 0;
  piStack_40 = (int *)0x0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  lVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x10))(*(int **)(param_1 + 0x104),&uStack_30);
  if (-1 < lVar1) {
    lVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x1c))(*(int **)(param_1 + 0x104),uStack_30);
    if (-1 < lVar1) {
      lVar1 = (**(code **)(**(int **)(param_1 + 0x100) + 0x38))
                        (*(int **)(param_1 + 0x100),auStack_28);
      if (-1 < lVar1) {
        lVar1 = fn_82E32058(auStack_28[0] & 0xffffffff,&piStack_40);
        if (-1 < lVar1) {
          lVar1 = (**(code **)(**(int **)(param_1 + 0x100) + 0x3c))
                            (*(int **)(param_1 + 0x100),piStack_40,0);
          if (-1 < lVar1) {
            lVar1 = (**(code **)(*piStack_40 + 0xc))(piStack_40,&uStack_3c,0,&uStack_38);
            if ((-1 < lVar1) &&
               (lVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x30))
                                  (*(int **)(param_1 + 0x104),uStack_3c,uStack_38,&uStack_34),
               -1 < lVar1)) {
              lVar1 = (**(code **)(*piStack_40 + 0x10))();
              uStack_3c = (int)lVar1 >> 0x1f & uStack_3c;
            }
          }
        }
      }
    }
  }
  if (uStack_3c != 0) {
    (**(code **)(*piStack_40 + 0x10))();
  }
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))();
  }
  return lVar1;
}

