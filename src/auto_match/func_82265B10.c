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
extern int fn_82265680();
extern int fn_82266360();
extern int fn_82266628();
extern int fn_82266AE8();
extern int fn_82517978();
extern int fn_8252D370();
extern int fn_8252D6E0();
extern int fn_8266F2D0();
extern int fn_82A1C098();
extern int fn_82F691F0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82265B10(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_2 + 0x50c) == 0) {
    if (*(int *)(param_2 + 0x104) != 0x3e5) {
      if (*(int *)(param_2 + 0x630) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_2 + 0x104,0,0x1c);
      }
      iVar2 = fn_82A1C098(param_2 + 0x104);
      if (iVar2 < 0) {
        *(undefined4 *)(param_2 + 0x510) = 3;
        *(undefined4 *)(param_2 + 0x514) = 3;
        *(undefined4 *)(param_2 + 0x538) = 1;
      }
      fn_82265680(param_2);
    }
  }
  else if (*(int *)(param_2 + 0x50c) == 2) {
    piVar1 = *(int **)(*(int *)(param_2 + 0xdc) + 0x8c0);
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    else {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fn_82266628(param_2,3,2);
      fn_8252D370(*(undefined4 *)(param_2 + 0xdc));
      fn_8252D6E0(*(undefined4 *)(param_2 + 0xdc),*(undefined4 *)(param_2 + 0x100));
      fn_82266AE8(param_2);
      *(undefined4 *)(param_2 + 0x50c) = 3;
      if ((*(int *)(param_2 + 0x524) != 0) &&
         (iVar2 = *(int *)(*(int *)(param_2 + 0xdc) + 0x8c0), iVar2 != 0)) {
        uStack_30 = 0;
        uStack_2c = 0;
        fn_82517978(&uStack_30,*(undefined4 *)(param_2 + 0x524),
                          *(undefined4 *)(param_2 + 0x528),0);
        fn_8266F2D0((double)lbl_821CC160,iVar2,&uStack_30,0);
      }
    }
  }
  fn_82266360(param_1,param_2);
  return;
}

