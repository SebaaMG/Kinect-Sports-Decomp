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
extern int fn_82575DF0();
extern int fn_82583170();
extern int fn_8263CBB0();
extern int fn_82645EA8();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;


void fn_82581F00(double param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  
  uVar3 = (ulonglong)(uint)param_2[0x37];
  if (uVar3 != 0) {
    dVar4 = (double)lbl_821CC160;
    do {
      piVar2 = (int *)uVar3;
      uVar3 = (ulonglong)(uint)piVar2[5];
      dataCacheBlockTouch(uVar3);
      iVar1 = *(int *)(*piVar2 + 4);
      if (((*(char *)(iVar1 + 0x1a4) != '\0') || (*(char *)(iVar1 + 0x1a5) != '\0')) ||
         ((*(char *)(iVar1 + 0x1a6) == '\0' &&
          (((double)(float)piVar2[3] <= dVar4 ||
           (param_1 <= (double)(float)((double)(float)piVar2[2] + (double)(float)piVar2[3]))))))) {
        fn_82583170(param_1);
        uVar3 = (ulonglong)(uint)piVar2[5];
      }
      else {
        fn_82575DF0(param_2[1]);
      }
    } while (uVar3 != 0);
  }
  if (0x380000 < (uint)param_2[0x3b]) {
    (**(code **)(*param_2 + 0x24))(param_1,param_2);
  }
  fn_82645EA8(lbl_8320A898,3);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0,param_2[0x3a],0x80000000);
}

