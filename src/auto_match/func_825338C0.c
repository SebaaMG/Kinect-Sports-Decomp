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
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82864E90();
extern unsigned int lbl_821C3FBC;
extern unsigned int lbl_8327F86C;


undefined8 fn_825338C0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar5;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *apuStack_40 [16];
  
  uVar1 = lbl_8327F86C;
  piVar2 = (int *)fn_82864E90();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x1c))();
  cVar5 = (**(code **)(*piVar2 + 0x38))(piVar2,param_3);
  if (cVar5 != '\0') {
    puVar3 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = param_3;
      puVar3[2] = param_1;
      puVar3[3] = param_2;
      *puVar3 = &lbl_821C3FBC;
    }
    if (puVar3 != (undefined4 *)0x0) {
      apuStack_40[0] = puVar3;
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3,puVar3);
      if (-1 < iVar4) {
        fn_82536690(uVar1,apuStack_40);
        return 0;
      }
      fn_8265CA20(puVar3);
    }
  }
  return 0xffffffff80004005;
}

