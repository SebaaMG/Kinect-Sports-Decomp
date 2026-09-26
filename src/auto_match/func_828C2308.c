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
extern int fn_8260D428();
extern int fn_828C2090();


int * fn_828C2308(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_828C2090(param_2,param_3);
  if (iVar1 != *(int *)(param_2 + 4)) {
    puVar3 = (undefined4 *)(iVar1 + 0xc);
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    iVar2 = fn_8260D428(param_3,0,*(undefined4 *)(param_3 + 0x10),puVar3,
                         *(undefined4 *)(iVar1 + 0x1c));
    if (-1 < iVar2) {
      *param_1 = iVar1;
      return param_1;
    }
  }
  *param_1 = *(int *)(param_2 + 4);
  return param_1;
}

