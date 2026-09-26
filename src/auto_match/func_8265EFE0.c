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
extern unsigned int *auStack_34;
extern unsigned int *auStack_38;
extern int fn_82230110();
extern int fn_8265D3D0();
extern int fn_8265F0B0();
extern int fn_8265F570();
extern int fn_8265FA58();
extern int fn_82663C10();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern unsigned int uStack00000014;
extern unsigned int uStack_40;


void fn_8265EFE0(undefined4 param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar3;
  undefined4 uStack00000014;
  undefined4 uStack_40;
  undefined2 *puStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [28];
  undefined1 *puStack_14;
  
  uStack00000014 = param_1;
  fn_82663C10(&uStack_40);
  puVar2 = (undefined4 *)fn_82668D40(auStack_38,0xffffffff831e7a4c);
  uStack_40 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_34,0xffffffff831e7a4c);
    cVar3 = fn_82668EA0(&uStack_40,uVar1);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)fn_8265FA58(&uStack_40,0);
    puStack_3c = (undefined2 *)*puVar2;
    puStack_14 = auStack_30;
    uVar1 = fn_8265F570(puStack_3c + 2);
    uVar1 = fn_82230110(puStack_14,uVar1);
    fn_8265F0B0(uStack00000014,*puStack_3c,puStack_3c[1],uVar1);
    fn_8265D3D0(&uStack_40);
  }
  return;
}

