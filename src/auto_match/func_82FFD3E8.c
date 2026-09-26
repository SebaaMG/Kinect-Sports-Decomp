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
extern unsigned int *auStack_30;
extern int fn_82FF9FA8();
extern int fn_82FFBCA8();
extern int fn_82FFCC78();
extern int fn_82FFCF20();
extern int fn_82FFE000();
extern int fn_8302B550();
extern unsigned int iStack_38;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


void fn_82FFD3E8(longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  fn_82FFCF20();
  fn_82FFCC78(param_1);
  piVar2 = (int *)fn_8302B550(param_1 + 0x39c);
  iStack_38 = *piVar2;
  uStack_3c = 0;
  uStack_34 = 0;
  while (piStack_40 = piVar2, iStack_38 == 0) {
    uStack_3c = uStack_3c + 1;
    if (0x1e < uStack_3c) goto joined_r0x82ffd46c;
    iStack_38 = piVar2[uStack_3c];
  }
  do {
    iVar1 = iStack_38;
    puVar3 = (undefined4 *)fn_82FFE000(auStack_30,piVar2,&piStack_40);
    piStack_40 = (int *)*puVar3;
    uStack_3c = puVar3[1];
    iStack_38 = puVar3[2];
    uStack_34 = puVar3[3];
    fn_82FF9FA8(iVar1);
    fn_82FFBCA8(iVar1,1);
joined_r0x82ffd46c:;} while (iStack_38 != 0);
  return;
}

