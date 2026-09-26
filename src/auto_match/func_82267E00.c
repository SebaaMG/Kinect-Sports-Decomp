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
extern unsigned int fStack_1c;
extern int fn_8252A1B0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_82267E00(double param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  for (puVar1 = *(undefined4 **)*param_2; puVar1 != (undefined4 *)*param_2;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[2];
    if (*(int *)(iVar2 + 0x40) == param_3) goto code_r0x82267e38;
  }
  iVar2 = 0;
code_r0x82267e38:
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0xdc) != 0)) &&
     ((*(int *)(iVar2 + 0x52c) == 3 || (*(int *)(iVar2 + 0x52c) == 4)))) {
    fStack_1c = (float)param_1;
    uStack_18 = lbl_821CC160;
    uStack_20 = lbl_821CC160;
    fn_8252A1B0(*(int *)(iVar2 + 0xdc),&uStack_20,0);
  }
  return;
}

