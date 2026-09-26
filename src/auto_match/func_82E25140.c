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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82E24128();
extern int fn_82E24DB8();
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


longlong fn_82E25140(int param_1)

{
  longlong lVar1;
  int *piVar2;
  uint uStack_50;
  uint uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [2];
  longlong lStack_38;
  ulonglong auStack_30 [6];
  
  piVar2 = (int *)0x0;
  uStack_4c = 0;
  lStack_38 = 0;
  uStack_50 = 0;
  uStack_44 = 0;
  auStack_40[0] = 0;
  piStack_48 = (int *)0x0;
  lVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x14))(*(int **)(param_1 + 0x108),0,&uStack_4c)
  ;
  if (-1 < lVar1) {
    lVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x10))(*(int **)(param_1 + 0x104),&lStack_38)
    ;
    if (-1 < lVar1) {
      if (lStack_38 != 0) {
        auStack_30[0] = 0;
        lVar1 = fn_82E24128(param_1,*(undefined4 *)(param_1 + 0x104),
                              *(undefined4 *)(param_1 + 0x108),auStack_30);
        if (lVar1 < 0) goto LAB_82e252cc;
        if (auStack_30[0] != uStack_4c) {
          lVar1 = -0x7fff0001;
          goto LAB_82e252cc;
        }
      }
      lVar1 = fn_82E24DB8(uStack_4c,&piStack_48);
      piVar2 = piStack_48;
      if (-1 < lVar1) {
        lVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x14))
                          (*(int **)(param_1 + 0x108),piStack_48,&uStack_4c);
        if (-1 < lVar1) {
          lVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x1c))(*(int **)(param_1 + 0x104),0);
          if (-1 < lVar1) {
            lVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,&uStack_50,0,&uStack_44);
            if ((-1 < lVar1) &&
               (lVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x30))
                                  (*(int **)(param_1 + 0x104),uStack_50,uStack_44,auStack_40),
               -1 < lVar1)) {
              lVar1 = (**(code **)(*piVar2 + 0x10))(piVar2);
              uStack_50 = (int)lVar1 >> 0x1f & uStack_50;
            }
          }
        }
      }
    }
  }
LAB_82e252cc:
  if (uStack_50 != 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return lVar1;
}

