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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern unsigned int lbl_821CC160;


undefined4 * fn_822F9060(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = lbl_821CC160;
  *param_1 = lbl_821CC160;
  param_1[1] = uVar3;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  param_1[4] = uVar3;
  param_1[5] = uVar3;
  iVar1 = param_2[1];
  iVar2 = *param_2;
  iVar6 = 0;
  iVar5 = 0;
  if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
    iVar6 = iVar2;
    iVar5 = iVar1;
  }
  *param_1 = *(undefined4 *)(*param_3 * 4 + iVar6);
  param_1[1] = *(undefined4 *)((*param_3 + 5) * 4 + iVar6);
  param_1[2] = *(undefined4 *)((*param_3 + 10) * 4 + iVar6);
  param_1[3] = *(undefined4 *)((*param_3 + 0xf) * 4 + iVar6);
  param_1[4] = *(undefined4 *)((*param_3 + 0x14) * 4 + iVar6);
  param_1[5] = *(undefined4 *)((*param_3 + 0x19) * 4 + iVar6);
  if (iVar5 != 0) {
    fn_822315A0(iVar5);
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

