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
extern int fn_83064008();
extern int fn_83065C28();
extern int fn_83065E70();
extern int fn_83068358();
extern int fn_83068648();
extern int fn_8306AAF0();
extern int fn_8306AB80();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8 fn_83064858(int param_1,int param_2)

{
  char cVar3;
  int iVar1;
  int iVar2;
  int iVar4;
  int *piVar5;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_60;
  
  piVar5 = (int *)(param_2 + 0x44);
  if ((0 < *(int *)(param_2 + 0x4c)) &&
     (cVar3 = fn_83068648(*(undefined4 *)(param_2 + 0x48)), cVar3 == '\0')) {
    cVar3 = (**(code **)(param_1 + 0x14))(piVar5,param_2,param_1 + 0x1c);
    if (cVar3 == '\x01') {
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      puStack_60 = (undefined4 *)0x0;
      while ((iVar4 = *piVar5, iVar4 != 0 && (cVar3 = fn_83068648(iVar4), cVar3 != '\0'))) {
        fn_8306AB80(piVar5,iVar4);
        fn_8306AAF0(&uStack_70,iVar4);
      }
      iVar4 = param_2 + 0x10;
      cVar3 = (**(code **)(param_1 + 0x18))(piVar5,param_2,param_1 + 0x1c,iVar4);
      if (cVar3 != '\0') {
        iVar1 = fn_83065E70();
        iVar2 = fn_83065E70();
        fn_83064008(param_1,iVar4,piVar5,iVar1 + 0x44,iVar2 + 0x44);
        fn_83064008(param_1,iVar4,&uStack_70,iVar1 + 0x44,iVar2 + 0x44);
        if ((*(char *)(param_1 + 0x24) == '\0') || (*(int *)(iVar1 + 0x4c) != 0)) {
          *(int *)(param_2 + 0x30) = iVar1;
          *(int *)(iVar1 + 0x2c) = param_2;
          fn_83064858(param_1,iVar1);
        }
        else {
          fn_83065C28(iVar1);
        }
        if ((*(char *)(param_1 + 0x24) == '\0') || (*(int *)(iVar2 + 0x4c) != 0)) {
          *(int *)(param_2 + 0x34) = iVar2;
          *(int *)(iVar2 + 0x2c) = param_2;
          fn_83064858(param_1,iVar2);
        }
        else {
          fn_83065C28(iVar2);
        }
        for (; puStack_60 != (undefined4 *)0x0; puStack_60 = (undefined4 *)puStack_60[2]) {
          puStack_60[3] = 0;
          *puStack_60 = 0;
        }
        return 1;
      }
      fn_83068358(piVar5,&uStack_70);
      for (; puStack_60 != (undefined4 *)0x0; puStack_60 = (undefined4 *)puStack_60[2]) {
        puStack_60[3] = 0;
        *puStack_60 = 0;
      }
    }
  }
  return 0;
}

