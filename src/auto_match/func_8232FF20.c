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
extern unsigned int *auStack_48;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82330190();
extern int fn_823F2E20();
extern int fn_824563F0();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_38;
extern unsigned int iStack_44;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B0958;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


void fn_8232FF20(int param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined8 uStack_40;
  int iStack_38;
  undefined4 *puStack_30;
  
  uStack_4c = 0;
  ppuStack_50 = (undefined **)fn_82330190;
  uStack_40 = 0x8233019000000000;
  iStack_38 = param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B0958;
    fn_82F68CC0(puVar2 + 2,&uStack_40,0x18);
    puStack_30 = puVar2;
    uVar1 = fn_824563F0(auStack_48,*(undefined4 *)(param_1 + 0x3c),&uStack_40);
    fn_823F2E20(param_1 + 0x30,uVar1);
    if (iStack_44 != 0) {
      fn_822315A0();
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x794) = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

