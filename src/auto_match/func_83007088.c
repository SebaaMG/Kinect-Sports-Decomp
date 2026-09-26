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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FAB9C0();
extern int fn_830069B8();
extern int fn_83008158();
extern int fn_8302AE30();
extern unsigned int lbl_832642E0;
extern unsigned int uStack_38;


undefined8 fn_83007088(int *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  int *piVar2;
  char cVar4;
  int iVar3;
  uint uStack_38;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = 0xe;
  }
  else {
    piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 0x350,param_2);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0x10;
    }
    else {
      (**(code **)(*param_1 + 0xd8))(param_1,param_3);
      uStack_38 = uStack_38 & 0x7fffffff;
      cVar4 = fn_830069B8(param_1);
      if ((cVar4 == '\0') ||
         (iVar3 = fn_83008158((ulonglong)(uint)param_1[8] + 0x24,param_3,
                                CONCAT44(piVar2,(int)param_2),(ulonglong)uStack_38 << 0x20),
         iVar3 == 0)) {
        (**(code **)(*piVar2 + 8))(piVar2);
        uVar1 = 2;
      }
      else {
        fn_8302AE30(piVar2,param_1);
        (**(code **)(*param_1 + 0xdc))(param_1);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

