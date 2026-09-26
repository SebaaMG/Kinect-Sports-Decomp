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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82365BD8();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B730C;


undefined4 * fn_823FC3B8(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar3;
  int iVar2;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_50 [80];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = 0;
    iVar5 = 0;
    if (iVar2 != 0) {
      cVar3 = fn_8223AAC0(iVar2);
      if (cVar3 != '\0') {
        uVar4 = uVar1;
        iVar5 = iVar2;
      }
    }
    iVar2 = fn_82365BD8(auStack_50,param_3);
    param_1[4] = 0;
    param_1[3] = &lbl_821B730C;
    param_1[7] = 0;
    param_1[8] = 0;
    if ((iVar5 != 0) && (cVar3 = fn_8223AAC0(iVar5), cVar3 != '\0')) {
      if (param_1[8] != 0) {
        fn_822315A0();
      }
      param_1[8] = iVar5;
      param_1[7] = uVar4;
    }
    fn_82365BD8(param_1 + 9,iVar2);
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

