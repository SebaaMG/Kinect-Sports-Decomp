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
extern unsigned int fStack_2c;
extern int fn_82266158();
extern int fn_8252A1B0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_8228C1B8(double param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  
  for (puVar1 = *(undefined4 **)**(int **)(param_2 + 0x80);
      puVar1 != (undefined4 *)**(int **)(param_2 + 0x80); puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[2];
    if (*(int *)(iVar2 + 0x40) == 0) goto LAB_8228c200;
  }
  iVar2 = 0;
LAB_8228c200:
  if (iVar2 != 0) {
    fn_82266158(iVar2);
    if ((*(int *)(iVar2 + 0xdc) != 0) &&
       ((*(int *)(iVar2 + 0x52c) == 3 || (*(int *)(iVar2 + 0x52c) == 4)))) {
      fStack_2c = (float)param_1;
      uStack_28 = lbl_821CC160;
      uStack_30 = lbl_821CC160;
      fn_8252A1B0(*(int *)(iVar2 + 0xdc),&uStack_30,0);
    }
  }
  return;
}

