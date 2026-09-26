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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern int fn_8265EF70();
extern int fn_8265EF98();
extern int fn_8265F888();
extern int fn_8265F8D8();
extern int fn_8265F918();
extern int fn_8265FA90();
extern int fn_826666A0();
extern int fn_82668E70();
extern int fn_82669B20();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int iStack_2c;
extern unsigned int uStack00000014;
extern unsigned int uStack_18;
extern unsigned int uStack_30;


void fn_8265EEA0(undefined4 param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar4;
  int iVar3;
  undefined4 uStack00000014;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uStack00000014 = param_1;
  fn_82668E70(&uStack_30);
  puVar2 = (undefined4 *)fn_8265F888(auStack_28,uStack00000014);
  uStack_30 = *puVar2;
  while( true ) {
    uVar1 = fn_8265F8D8(auStack_24,uStack00000014);
    cVar4 = fn_8265FA90(&uStack_30,uVar1);
    if (cVar4 == '\0') break;
    iVar3 = fn_826666A0(&uStack_30);
    iStack_2c = *(int *)(iVar3 + 4);
    if (iStack_2c != 0) {
      iStack_20 = iStack_2c;
      iStack_1c = iStack_2c;
      if (iStack_2c == 0) {
        uStack_18 = 0;
      }
      else {
        uStack_18 = fn_8265EF98(iStack_2c,1);
      }
    }
    fn_82669B20(&uStack_30);
  }
  fn_8265F918(uStack00000014);
  fn_8265EF70(uStack00000014);
  return;
}

