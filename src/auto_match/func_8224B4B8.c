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
extern int fn_8223AAC0();
extern int fn_8224B9E0();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


undefined4 * fn_8224B4B8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    iVar1 = param_3[1];
    uVar2 = *param_3;
    uStack_50 = 0;
    iStack_4c = 0;
    if (iVar1 != 0) {
      cVar3 = fn_8223AAC0(iVar1);
      if (cVar3 != '\0') {
        uStack_50 = uVar2;
        iStack_4c = iVar1;
      }
    }
    iVar1 = param_2[1];
    uVar2 = *param_2;
    uStack_48 = 0;
    iStack_44 = 0;
    if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
      uStack_48 = uVar2;
      iStack_44 = iVar1;
    }
    fn_8224B9E0(param_1 + 3,&uStack_48,&uStack_50);
  }
  return param_1;
}

